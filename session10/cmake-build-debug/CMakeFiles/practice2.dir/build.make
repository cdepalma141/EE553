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
CMAKE_SOURCE_DIR = /Users/connordepalma/Documents/Git/EE553/session10

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/connordepalma/Documents/Git/EE553/session10/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/practice2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/practice2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/practice2.dir/flags.make

CMakeFiles/practice2.dir/practice2.cpp.o: CMakeFiles/practice2.dir/flags.make
CMakeFiles/practice2.dir/practice2.cpp.o: ../practice2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/connordepalma/Documents/Git/EE553/session10/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/practice2.dir/practice2.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/practice2.dir/practice2.cpp.o -c /Users/connordepalma/Documents/Git/EE553/session10/practice2.cpp

CMakeFiles/practice2.dir/practice2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/practice2.dir/practice2.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/connordepalma/Documents/Git/EE553/session10/practice2.cpp > CMakeFiles/practice2.dir/practice2.cpp.i

CMakeFiles/practice2.dir/practice2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/practice2.dir/practice2.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/connordepalma/Documents/Git/EE553/session10/practice2.cpp -o CMakeFiles/practice2.dir/practice2.cpp.s

CMakeFiles/practice2.dir/practice2.cpp.o.requires:

.PHONY : CMakeFiles/practice2.dir/practice2.cpp.o.requires

CMakeFiles/practice2.dir/practice2.cpp.o.provides: CMakeFiles/practice2.dir/practice2.cpp.o.requires
	$(MAKE) -f CMakeFiles/practice2.dir/build.make CMakeFiles/practice2.dir/practice2.cpp.o.provides.build
.PHONY : CMakeFiles/practice2.dir/practice2.cpp.o.provides

CMakeFiles/practice2.dir/practice2.cpp.o.provides.build: CMakeFiles/practice2.dir/practice2.cpp.o


# Object files for target practice2
practice2_OBJECTS = \
"CMakeFiles/practice2.dir/practice2.cpp.o"

# External object files for target practice2
practice2_EXTERNAL_OBJECTS =

practice2: CMakeFiles/practice2.dir/practice2.cpp.o
practice2: CMakeFiles/practice2.dir/build.make
practice2: CMakeFiles/practice2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/connordepalma/Documents/Git/EE553/session10/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable practice2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/practice2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/practice2.dir/build: practice2

.PHONY : CMakeFiles/practice2.dir/build

CMakeFiles/practice2.dir/requires: CMakeFiles/practice2.dir/practice2.cpp.o.requires

.PHONY : CMakeFiles/practice2.dir/requires

CMakeFiles/practice2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/practice2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/practice2.dir/clean

CMakeFiles/practice2.dir/depend:
	cd /Users/connordepalma/Documents/Git/EE553/session10/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/connordepalma/Documents/Git/EE553/session10 /Users/connordepalma/Documents/Git/EE553/session10 /Users/connordepalma/Documents/Git/EE553/session10/cmake-build-debug /Users/connordepalma/Documents/Git/EE553/session10/cmake-build-debug /Users/connordepalma/Documents/Git/EE553/session10/cmake-build-debug/CMakeFiles/practice2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/practice2.dir/depend

