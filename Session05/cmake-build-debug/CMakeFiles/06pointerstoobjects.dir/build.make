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
CMAKE_SOURCE_DIR = /Users/connordepalma/Documents/Git/EE553/Session05

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/connordepalma/Documents/Git/EE553/Session05/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/06pointerstoobjects.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/06pointerstoobjects.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/06pointerstoobjects.dir/flags.make

CMakeFiles/06pointerstoobjects.dir/06pointerstoobjects.cpp.o: CMakeFiles/06pointerstoobjects.dir/flags.make
CMakeFiles/06pointerstoobjects.dir/06pointerstoobjects.cpp.o: ../06pointerstoobjects.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/connordepalma/Documents/Git/EE553/Session05/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/06pointerstoobjects.dir/06pointerstoobjects.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/06pointerstoobjects.dir/06pointerstoobjects.cpp.o -c /Users/connordepalma/Documents/Git/EE553/Session05/06pointerstoobjects.cpp

CMakeFiles/06pointerstoobjects.dir/06pointerstoobjects.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/06pointerstoobjects.dir/06pointerstoobjects.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/connordepalma/Documents/Git/EE553/Session05/06pointerstoobjects.cpp > CMakeFiles/06pointerstoobjects.dir/06pointerstoobjects.cpp.i

CMakeFiles/06pointerstoobjects.dir/06pointerstoobjects.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/06pointerstoobjects.dir/06pointerstoobjects.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/connordepalma/Documents/Git/EE553/Session05/06pointerstoobjects.cpp -o CMakeFiles/06pointerstoobjects.dir/06pointerstoobjects.cpp.s

CMakeFiles/06pointerstoobjects.dir/06pointerstoobjects.cpp.o.requires:

.PHONY : CMakeFiles/06pointerstoobjects.dir/06pointerstoobjects.cpp.o.requires

CMakeFiles/06pointerstoobjects.dir/06pointerstoobjects.cpp.o.provides: CMakeFiles/06pointerstoobjects.dir/06pointerstoobjects.cpp.o.requires
	$(MAKE) -f CMakeFiles/06pointerstoobjects.dir/build.make CMakeFiles/06pointerstoobjects.dir/06pointerstoobjects.cpp.o.provides.build
.PHONY : CMakeFiles/06pointerstoobjects.dir/06pointerstoobjects.cpp.o.provides

CMakeFiles/06pointerstoobjects.dir/06pointerstoobjects.cpp.o.provides.build: CMakeFiles/06pointerstoobjects.dir/06pointerstoobjects.cpp.o


# Object files for target 06pointerstoobjects
06pointerstoobjects_OBJECTS = \
"CMakeFiles/06pointerstoobjects.dir/06pointerstoobjects.cpp.o"

# External object files for target 06pointerstoobjects
06pointerstoobjects_EXTERNAL_OBJECTS =

06pointerstoobjects: CMakeFiles/06pointerstoobjects.dir/06pointerstoobjects.cpp.o
06pointerstoobjects: CMakeFiles/06pointerstoobjects.dir/build.make
06pointerstoobjects: CMakeFiles/06pointerstoobjects.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/connordepalma/Documents/Git/EE553/Session05/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 06pointerstoobjects"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/06pointerstoobjects.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/06pointerstoobjects.dir/build: 06pointerstoobjects

.PHONY : CMakeFiles/06pointerstoobjects.dir/build

CMakeFiles/06pointerstoobjects.dir/requires: CMakeFiles/06pointerstoobjects.dir/06pointerstoobjects.cpp.o.requires

.PHONY : CMakeFiles/06pointerstoobjects.dir/requires

CMakeFiles/06pointerstoobjects.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/06pointerstoobjects.dir/cmake_clean.cmake
.PHONY : CMakeFiles/06pointerstoobjects.dir/clean

CMakeFiles/06pointerstoobjects.dir/depend:
	cd /Users/connordepalma/Documents/Git/EE553/Session05/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/connordepalma/Documents/Git/EE553/Session05 /Users/connordepalma/Documents/Git/EE553/Session05 /Users/connordepalma/Documents/Git/EE553/Session05/cmake-build-debug /Users/connordepalma/Documents/Git/EE553/Session05/cmake-build-debug /Users/connordepalma/Documents/Git/EE553/Session05/cmake-build-debug/CMakeFiles/06pointerstoobjects.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/06pointerstoobjects.dir/depend

