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
CMAKE_SOURCE_DIR = /Users/connordepalma/Documents/Git/EE553/session06/HW5

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/connordepalma/Documents/Git/EE553/session06/HW5/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/PointerPractice.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/PointerPractice.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/PointerPractice.dir/flags.make

CMakeFiles/PointerPractice.dir/PointerPractice.cpp.o: CMakeFiles/PointerPractice.dir/flags.make
CMakeFiles/PointerPractice.dir/PointerPractice.cpp.o: ../PointerPractice.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/connordepalma/Documents/Git/EE553/session06/HW5/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/PointerPractice.dir/PointerPractice.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PointerPractice.dir/PointerPractice.cpp.o -c /Users/connordepalma/Documents/Git/EE553/session06/HW5/PointerPractice.cpp

CMakeFiles/PointerPractice.dir/PointerPractice.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PointerPractice.dir/PointerPractice.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/connordepalma/Documents/Git/EE553/session06/HW5/PointerPractice.cpp > CMakeFiles/PointerPractice.dir/PointerPractice.cpp.i

CMakeFiles/PointerPractice.dir/PointerPractice.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PointerPractice.dir/PointerPractice.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/connordepalma/Documents/Git/EE553/session06/HW5/PointerPractice.cpp -o CMakeFiles/PointerPractice.dir/PointerPractice.cpp.s

CMakeFiles/PointerPractice.dir/PointerPractice.cpp.o.requires:

.PHONY : CMakeFiles/PointerPractice.dir/PointerPractice.cpp.o.requires

CMakeFiles/PointerPractice.dir/PointerPractice.cpp.o.provides: CMakeFiles/PointerPractice.dir/PointerPractice.cpp.o.requires
	$(MAKE) -f CMakeFiles/PointerPractice.dir/build.make CMakeFiles/PointerPractice.dir/PointerPractice.cpp.o.provides.build
.PHONY : CMakeFiles/PointerPractice.dir/PointerPractice.cpp.o.provides

CMakeFiles/PointerPractice.dir/PointerPractice.cpp.o.provides.build: CMakeFiles/PointerPractice.dir/PointerPractice.cpp.o


# Object files for target PointerPractice
PointerPractice_OBJECTS = \
"CMakeFiles/PointerPractice.dir/PointerPractice.cpp.o"

# External object files for target PointerPractice
PointerPractice_EXTERNAL_OBJECTS =

PointerPractice: CMakeFiles/PointerPractice.dir/PointerPractice.cpp.o
PointerPractice: CMakeFiles/PointerPractice.dir/build.make
PointerPractice: CMakeFiles/PointerPractice.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/connordepalma/Documents/Git/EE553/session06/HW5/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable PointerPractice"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/PointerPractice.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/PointerPractice.dir/build: PointerPractice

.PHONY : CMakeFiles/PointerPractice.dir/build

CMakeFiles/PointerPractice.dir/requires: CMakeFiles/PointerPractice.dir/PointerPractice.cpp.o.requires

.PHONY : CMakeFiles/PointerPractice.dir/requires

CMakeFiles/PointerPractice.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/PointerPractice.dir/cmake_clean.cmake
.PHONY : CMakeFiles/PointerPractice.dir/clean

CMakeFiles/PointerPractice.dir/depend:
	cd /Users/connordepalma/Documents/Git/EE553/session06/HW5/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/connordepalma/Documents/Git/EE553/session06/HW5 /Users/connordepalma/Documents/Git/EE553/session06/HW5 /Users/connordepalma/Documents/Git/EE553/session06/HW5/cmake-build-debug /Users/connordepalma/Documents/Git/EE553/session06/HW5/cmake-build-debug /Users/connordepalma/Documents/Git/EE553/session06/HW5/cmake-build-debug/CMakeFiles/PointerPractice.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/PointerPractice.dir/depend

