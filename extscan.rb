
require 'find'

$root = ARGV[0]
$knownfiles = Array["cpp", "c"]
$gldump = Array[]

if (!File.directory? $root)
	puts "not a directory.. can't continue"
	exit
end

# Struct for handling all the core functions and extensions
DumpStruct = Struct.new(:base, :func, :num)
NameStruct = Struct.new(:name, :num)

path =  (File.expand_path $0).rpartition("/")[0]

# load dump file
dump = File.new("#{path}/internals/gl.dump", "r")

while (line = dump.gets)
	strs = line.split(' ')
	if(strs.length > 1)
		dumps = DumpStruct.new(strs[1], Array[], 0)
		$gldump.push(dumps)
	else
		$gldump[$gldump.size-1].func.push(NameStruct.new(strs[0], 0))
	end
end

dump.close

major_version = 1
minor_version = 0

Find.find($root) do |file|
	str = file.split('.')
	num = str.size
	fileend = str[num-1]
	if($knownfiles.include? fileend)
		#puts "#{str} is a source file"

		source = File.new(file, "r")
		while (line = source.gets)
			splits = line.gsub('(', ' ').split(' ')
			splits.each do |sp|
				if(sp.start_with? "gl")
					$gldump.each do |ext|
						ext.func.each do |func|
							if(sp.eql? func.name)
								func.num += 1
								ext.num += 1

								# check the minimum major/minor version
								if(ext.base.include? "core_")
									bs = ext.base.split("_")

									major = bs[1].to_i
									minor = bs[2].to_i

									if(major > major_version)
										major_version = major
										minor_version = minor
									end

									if(major == major_version)
										if(minor > minor_version)
											minor_version = minor
										end
									end

								end

							end
						end
					end
				end
			end
		end
		source.close

	end
end

defines = Array[]

defines.push "#ifndef _GLELP_DEFINES_H_"
defines.push "#define _GLELP_DEFINES_H_"
defines.push "// DO NOT CHANGE, THIS FILE IS GENERATED"
defines.push ""

defines.push "#define GLELP_GL_MAJOR_VERSION #{major_version}"
defines.push "#define GLELP_GL_MINOR_VERSION #{minor_version}"
defines.push ""

# check what we got and generate the file
$gldump.each do |ext|
	if(ext.num != 0)
		defines.push "#define define_#{ext.base}"
		ext.func.each do |func|
			if(func.num != 0)
				defines.push "#define using_#{func.name}"
			end
		end
	end
end

# We need to make sure that we core_1_0 and glGetString defined
if(!defines.include? "#define define_core_1_0")
	defines.push "#define define_core_1_0"
end
if(!defines.include? "#define using_glGetString")
	defines.push "#define using_glGetString"
end

defines.push ""
defines.push "#endif // _GLELP_DEFINES_H_"

projectdefines = File.new("#{path}/glelp_defines.h", "w")
projectdefines.puts defines
projectdefines.close
