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
CMAKE_SOURCE_DIR = /Users/connordepalma/Documents/Git/EE553/session06/trafficsim2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/connordepalma/Documents/Git/EE553/session06/trafficsim2/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/trafficsim.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/trafficsim.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/trafficsim.dir/flags.make

CMakeFiles/trafficsim.dir/main.cpp.o: CMakeFiles/trafficsim.dir/flags.make
CMakeFiles/trafficsim.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/connordepalma/Documents/Git/EE553/session06/trafficsim2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/trafficsim.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/trafficsim.dir/main.cpp.o -c /Users/connordepalma/Documents/Git/EE553/session06/trafficsim2/main.cpp

CMakeFiles/trafficsim.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/trafficsim.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/connordepalma/Documents/Git/EE553/session06/trafficsim2/main.cpp > CMakeFiles/trafficsim.dir/main.cpp.i

CMakeFiles/trafficsim.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/trafficsim.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/connordepalma/Documents/Git/EE553/session06/trafficsim2/main.cpp -o CMakeFiles/trafficsim.dir/main.cpp.s

CMakeFiles/trafficsim.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/trafficsim.dir/main.cpp.o.requires

CMakeFiles/trafficsim.dir/main.cpp.o.provides: CMakeFiles/trafficsim.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/trafficsim.dir/build.make CMakeFiles/trafficsim.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/trafficsim.dir/main.cpp.o.provides

CMakeFiles/trafficsim.dir/main.cpp.o.provides.build: CMakeFiles/trafficsim.dir/main.cpp.o


# Object files for target trafficsim
trafficsim_OBJECTS = \
"CMakeFiles/trafficsim.dir/main.cpp.o"

# External object files for target trafficsim
trafficsim_EXTERNAL_OBJECTS =

trafficsim: CMakeFiles/trafficsim.dir/main.cpp.o
trafficsim: CMakeFiles/trafficsim.dir/build.make
trafficsim: CMakeFiles/trafficsim.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/connordepalma/Documents/Git/EE553/session06/trafficsim2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable trafficsim"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/trafficsim.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/trafficsim.dir/build: trafficsim

.PHONY : CMakeFiles/trafficsim.dir/build

CMakeFiles/trafficsim.dir/requires: CMakeFiles/trafficsim.dir/main.cpp.o.requires

.PHONY : CMakeFiles/trafficsim.dir/requires

CMakeFiles/trafficsim.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/trafficsim.dir/cmake_clean.cmake
.PHONY : CMakeFiles/trafficsim.dir/clean

CMakeFiles/trafficsim.dir/depend:
	cd /Users/connordepalma/Documents/Git/EE553/session06/trafficsim2/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/connordepalma/Documents/Git/EE553/session06/trafficsim2 /Users/connordepalma/Documents/Git/EE553/session06/trafficsim2 /Users/connordepalma/Documents/Git/EE553/session06/trafficsim2/cmake-build-debug /Users/connordepalma/Documents/Git/EE553/session06/trafficsim2/cmake-build-debug /Users/connordepalma/Documents/Git/EE553/session06/trafficsim2/cmake-build-debug/CMakeFiles/trafficsim.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/trafficsim.dir/depend

