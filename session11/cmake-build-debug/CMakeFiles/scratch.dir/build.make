# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = "/Users/connordepalma/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/181.4203.549/CLion.app/Contents/bin/cmake/bin/cmake"

# The command to remove a file.
RM = "/Users/connordepalma/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/181.4203.549/CLion.app/Contents/bin/cmake/bin/cmake" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/connordepalma/Documents/Git/EE553/session11

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/connordepalma/Documents/Git/EE553/session11/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/scratch.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/scratch.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/scratch.dir/flags.make

CMakeFiles/scratch.dir/Users/connordepalma/Library/Preferences/CLion2018.1/scratches/scratch.cpp.o: CMakeFiles/scratch.dir/flags.make
CMakeFiles/scratch.dir/Users/connordepalma/Library/Preferences/CLion2018.1/scratches/scratch.cpp.o: /Users/connordepalma/Library/Preferences/CLion2018.1/scratches/scratch.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/connordepalma/Documents/Git/EE553/session11/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/scratch.dir/Users/connordepalma/Library/Preferences/CLion2018.1/scratches/scratch.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/scratch.dir/Users/connordepalma/Library/Preferences/CLion2018.1/scratches/scratch.cpp.o -c /Users/connordepalma/Library/Preferences/CLion2018.1/scratches/scratch.cpp

CMakeFiles/scratch.dir/Users/connordepalma/Library/Preferences/CLion2018.1/scratches/scratch.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/scratch.dir/Users/connordepalma/Library/Preferences/CLion2018.1/scratches/scratch.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/connordepalma/Library/Preferences/CLion2018.1/scratches/scratch.cpp > CMakeFiles/scratch.dir/Users/connordepalma/Library/Preferences/CLion2018.1/scratches/scratch.cpp.i

CMakeFiles/scratch.dir/Users/connordepalma/Library/Preferences/CLion2018.1/scratches/scratch.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/scratch.dir/Users/connordepalma/Library/Preferences/CLion2018.1/scratches/scratch.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/connordepalma/Library/Preferences/CLion2018.1/scratches/scratch.cpp -o CMakeFiles/scratch.dir/Users/connordepalma/Library/Preferences/CLion2018.1/scratches/scratch.cpp.s

CMakeFiles/scratch.dir/Users/connordepalma/Library/Preferences/CLion2018.1/scratches/scratch.cpp.o.requires:

.PHONY : CMakeFiles/scratch.dir/Users/connordepalma/Library/Preferences/CLion2018.1/scratches/scratch.cpp.o.requires

CMakeFiles/scratch.dir/Users/connordepalma/Library/Preferences/CLion2018.1/scratches/scratch.cpp.o.provides: CMakeFiles/scratch.dir/Users/connordepalma/Library/Preferences/CLion2018.1/scratches/scratch.cpp.o.requires
	$(MAKE) -f CMakeFiles/scratch.dir/build.make CMakeFiles/scratch.dir/Users/connordepalma/Library/Preferences/CLion2018.1/scratches/scratch.cpp.o.provides.build
.PHONY : CMakeFiles/scratch.dir/Users/connordepalma/Library/Preferences/CLion2018.1/scratches/scratch.cpp.o.provides

CMakeFiles/scratch.dir/Users/connordepalma/Library/Preferences/CLion2018.1/scratches/scratch.cpp.o.provides.build: CMakeFiles/scratch.dir/Users/connordepalma/Library/Preferences/CLion2018.1/scratches/scratch.cpp.o


# Object files for target scratch
scratch_OBJECTS = \
"CMakeFiles/scratch.dir/Users/connordepalma/Library/Preferences/CLion2018.1/scratches/scratch.cpp.o"

# External object files for target scratch
scratch_EXTERNAL_OBJECTS =

scratch: CMakeFiles/scratch.dir/Users/connordepalma/Library/Preferences/CLion2018.1/scratches/scratch.cpp.o
scratch: CMakeFiles/scratch.dir/build.make
scratch: CMakeFiles/scratch.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/connordepalma/Documents/Git/EE553/session11/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable scratch"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/scratch.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/scratch.dir/build: scratch

.PHONY : CMakeFiles/scratch.dir/build

CMakeFiles/scratch.dir/requires: CMakeFiles/scratch.dir/Users/connordepalma/Library/Preferences/CLion2018.1/scratches/scratch.cpp.o.requires

.PHONY : CMakeFiles/scratch.dir/requires

CMakeFiles/scratch.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/scratch.dir/cmake_clean.cmake
.PHONY : CMakeFiles/scratch.dir/clean

CMakeFiles/scratch.dir/depend:
	cd /Users/connordepalma/Documents/Git/EE553/session11/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/connordepalma/Documents/Git/EE553/session11 /Users/connordepalma/Documents/Git/EE553/session11 /Users/connordepalma/Documents/Git/EE553/session11/cmake-build-debug /Users/connordepalma/Documents/Git/EE553/session11/cmake-build-debug /Users/connordepalma/Documents/Git/EE553/session11/cmake-build-debug/CMakeFiles/scratch.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/scratch.dir/depend
