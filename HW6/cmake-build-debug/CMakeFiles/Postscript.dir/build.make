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
CMAKE_SOURCE_DIR = /Users/connordepalma/Documents/Git/EE553/HW6

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/connordepalma/Documents/Git/EE553/HW6/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Postscript.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Postscript.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Postscript.dir/flags.make

CMakeFiles/Postscript.dir/Postscript.cpp.o: CMakeFiles/Postscript.dir/flags.make
CMakeFiles/Postscript.dir/Postscript.cpp.o: ../Postscript.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/connordepalma/Documents/Git/EE553/HW6/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Postscript.dir/Postscript.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Postscript.dir/Postscript.cpp.o -c /Users/connordepalma/Documents/Git/EE553/HW6/Postscript.cpp

CMakeFiles/Postscript.dir/Postscript.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Postscript.dir/Postscript.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/connordepalma/Documents/Git/EE553/HW6/Postscript.cpp > CMakeFiles/Postscript.dir/Postscript.cpp.i

CMakeFiles/Postscript.dir/Postscript.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Postscript.dir/Postscript.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/connordepalma/Documents/Git/EE553/HW6/Postscript.cpp -o CMakeFiles/Postscript.dir/Postscript.cpp.s

CMakeFiles/Postscript.dir/Postscript.cpp.o.requires:

.PHONY : CMakeFiles/Postscript.dir/Postscript.cpp.o.requires

CMakeFiles/Postscript.dir/Postscript.cpp.o.provides: CMakeFiles/Postscript.dir/Postscript.cpp.o.requires
	$(MAKE) -f CMakeFiles/Postscript.dir/build.make CMakeFiles/Postscript.dir/Postscript.cpp.o.provides.build
.PHONY : CMakeFiles/Postscript.dir/Postscript.cpp.o.provides

CMakeFiles/Postscript.dir/Postscript.cpp.o.provides.build: CMakeFiles/Postscript.dir/Postscript.cpp.o


# Object files for target Postscript
Postscript_OBJECTS = \
"CMakeFiles/Postscript.dir/Postscript.cpp.o"

# External object files for target Postscript
Postscript_EXTERNAL_OBJECTS =

Postscript: CMakeFiles/Postscript.dir/Postscript.cpp.o
Postscript: CMakeFiles/Postscript.dir/build.make
Postscript: CMakeFiles/Postscript.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/connordepalma/Documents/Git/EE553/HW6/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Postscript"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Postscript.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Postscript.dir/build: Postscript

.PHONY : CMakeFiles/Postscript.dir/build

CMakeFiles/Postscript.dir/requires: CMakeFiles/Postscript.dir/Postscript.cpp.o.requires

.PHONY : CMakeFiles/Postscript.dir/requires

CMakeFiles/Postscript.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Postscript.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Postscript.dir/clean

CMakeFiles/Postscript.dir/depend:
	cd /Users/connordepalma/Documents/Git/EE553/HW6/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/connordepalma/Documents/Git/EE553/HW6 /Users/connordepalma/Documents/Git/EE553/HW6 /Users/connordepalma/Documents/Git/EE553/HW6/cmake-build-debug /Users/connordepalma/Documents/Git/EE553/HW6/cmake-build-debug /Users/connordepalma/Documents/Git/EE553/HW6/cmake-build-debug/CMakeFiles/Postscript.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Postscript.dir/depend

