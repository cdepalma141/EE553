# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

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
CMAKE_COMMAND = "/Users/connordepalma/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/173.4127.32/CLion.app/Contents/bin/cmake/bin/cmake"

# The command to remove a file.
RM = "/Users/connordepalma/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/173.4127.32/CLion.app/Contents/bin/cmake/bin/cmake" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/connordepalma/Documents/Git/EE553/Session02

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/connordepalma/Documents/Git/EE553/Session02/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/05functions.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/05functions.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/05functions.dir/flags.make

CMakeFiles/05functions.dir/05functions.cpp.o: CMakeFiles/05functions.dir/flags.make
CMakeFiles/05functions.dir/05functions.cpp.o: ../05functions.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/connordepalma/Documents/Git/EE553/Session02/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/05functions.dir/05functions.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/05functions.dir/05functions.cpp.o -c /Users/connordepalma/Documents/Git/EE553/Session02/05functions.cpp

CMakeFiles/05functions.dir/05functions.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/05functions.dir/05functions.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/connordepalma/Documents/Git/EE553/Session02/05functions.cpp > CMakeFiles/05functions.dir/05functions.cpp.i

CMakeFiles/05functions.dir/05functions.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/05functions.dir/05functions.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/connordepalma/Documents/Git/EE553/Session02/05functions.cpp -o CMakeFiles/05functions.dir/05functions.cpp.s

CMakeFiles/05functions.dir/05functions.cpp.o.requires:

.PHONY : CMakeFiles/05functions.dir/05functions.cpp.o.requires

CMakeFiles/05functions.dir/05functions.cpp.o.provides: CMakeFiles/05functions.dir/05functions.cpp.o.requires
	$(MAKE) -f CMakeFiles/05functions.dir/build.make CMakeFiles/05functions.dir/05functions.cpp.o.provides.build
.PHONY : CMakeFiles/05functions.dir/05functions.cpp.o.provides

CMakeFiles/05functions.dir/05functions.cpp.o.provides.build: CMakeFiles/05functions.dir/05functions.cpp.o


# Object files for target 05functions
05functions_OBJECTS = \
"CMakeFiles/05functions.dir/05functions.cpp.o"

# External object files for target 05functions
05functions_EXTERNAL_OBJECTS =

05functions: CMakeFiles/05functions.dir/05functions.cpp.o
05functions: CMakeFiles/05functions.dir/build.make
05functions: CMakeFiles/05functions.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/connordepalma/Documents/Git/EE553/Session02/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 05functions"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/05functions.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/05functions.dir/build: 05functions

.PHONY : CMakeFiles/05functions.dir/build

CMakeFiles/05functions.dir/requires: CMakeFiles/05functions.dir/05functions.cpp.o.requires

.PHONY : CMakeFiles/05functions.dir/requires

CMakeFiles/05functions.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/05functions.dir/cmake_clean.cmake
.PHONY : CMakeFiles/05functions.dir/clean

CMakeFiles/05functions.dir/depend:
	cd /Users/connordepalma/Documents/Git/EE553/Session02/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/connordepalma/Documents/Git/EE553/Session02 /Users/connordepalma/Documents/Git/EE553/Session02 /Users/connordepalma/Documents/Git/EE553/Session02/cmake-build-debug /Users/connordepalma/Documents/Git/EE553/Session02/cmake-build-debug /Users/connordepalma/Documents/Git/EE553/Session02/cmake-build-debug/CMakeFiles/05functions.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/05functions.dir/depend

