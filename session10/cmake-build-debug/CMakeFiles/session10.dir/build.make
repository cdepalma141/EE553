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
include CMakeFiles/session10.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/session10.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/session10.dir/flags.make

CMakeFiles/session10.dir/main.cpp.o: CMakeFiles/session10.dir/flags.make
CMakeFiles/session10.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/connordepalma/Documents/Git/EE553/session10/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/session10.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/session10.dir/main.cpp.o -c /Users/connordepalma/Documents/Git/EE553/session10/main.cpp

CMakeFiles/session10.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/session10.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/connordepalma/Documents/Git/EE553/session10/main.cpp > CMakeFiles/session10.dir/main.cpp.i

CMakeFiles/session10.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/session10.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/connordepalma/Documents/Git/EE553/session10/main.cpp -o CMakeFiles/session10.dir/main.cpp.s

CMakeFiles/session10.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/session10.dir/main.cpp.o.requires

CMakeFiles/session10.dir/main.cpp.o.provides: CMakeFiles/session10.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/session10.dir/build.make CMakeFiles/session10.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/session10.dir/main.cpp.o.provides

CMakeFiles/session10.dir/main.cpp.o.provides.build: CMakeFiles/session10.dir/main.cpp.o


CMakeFiles/session10.dir/dynamicmemory.cpp.o: CMakeFiles/session10.dir/flags.make
CMakeFiles/session10.dir/dynamicmemory.cpp.o: ../dynamicmemory.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/connordepalma/Documents/Git/EE553/session10/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/session10.dir/dynamicmemory.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/session10.dir/dynamicmemory.cpp.o -c /Users/connordepalma/Documents/Git/EE553/session10/dynamicmemory.cpp

CMakeFiles/session10.dir/dynamicmemory.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/session10.dir/dynamicmemory.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/connordepalma/Documents/Git/EE553/session10/dynamicmemory.cpp > CMakeFiles/session10.dir/dynamicmemory.cpp.i

CMakeFiles/session10.dir/dynamicmemory.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/session10.dir/dynamicmemory.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/connordepalma/Documents/Git/EE553/session10/dynamicmemory.cpp -o CMakeFiles/session10.dir/dynamicmemory.cpp.s

CMakeFiles/session10.dir/dynamicmemory.cpp.o.requires:

.PHONY : CMakeFiles/session10.dir/dynamicmemory.cpp.o.requires

CMakeFiles/session10.dir/dynamicmemory.cpp.o.provides: CMakeFiles/session10.dir/dynamicmemory.cpp.o.requires
	$(MAKE) -f CMakeFiles/session10.dir/build.make CMakeFiles/session10.dir/dynamicmemory.cpp.o.provides.build
.PHONY : CMakeFiles/session10.dir/dynamicmemory.cpp.o.provides

CMakeFiles/session10.dir/dynamicmemory.cpp.o.provides.build: CMakeFiles/session10.dir/dynamicmemory.cpp.o


CMakeFiles/session10.dir/matrix.cpp.o: CMakeFiles/session10.dir/flags.make
CMakeFiles/session10.dir/matrix.cpp.o: ../matrix.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/connordepalma/Documents/Git/EE553/session10/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/session10.dir/matrix.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/session10.dir/matrix.cpp.o -c /Users/connordepalma/Documents/Git/EE553/session10/matrix.cpp

CMakeFiles/session10.dir/matrix.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/session10.dir/matrix.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/connordepalma/Documents/Git/EE553/session10/matrix.cpp > CMakeFiles/session10.dir/matrix.cpp.i

CMakeFiles/session10.dir/matrix.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/session10.dir/matrix.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/connordepalma/Documents/Git/EE553/session10/matrix.cpp -o CMakeFiles/session10.dir/matrix.cpp.s

CMakeFiles/session10.dir/matrix.cpp.o.requires:

.PHONY : CMakeFiles/session10.dir/matrix.cpp.o.requires

CMakeFiles/session10.dir/matrix.cpp.o.provides: CMakeFiles/session10.dir/matrix.cpp.o.requires
	$(MAKE) -f CMakeFiles/session10.dir/build.make CMakeFiles/session10.dir/matrix.cpp.o.provides.build
.PHONY : CMakeFiles/session10.dir/matrix.cpp.o.provides

CMakeFiles/session10.dir/matrix.cpp.o.provides.build: CMakeFiles/session10.dir/matrix.cpp.o


CMakeFiles/session10.dir/practice1.cpp.o: CMakeFiles/session10.dir/flags.make
CMakeFiles/session10.dir/practice1.cpp.o: ../practice1.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/connordepalma/Documents/Git/EE553/session10/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/session10.dir/practice1.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/session10.dir/practice1.cpp.o -c /Users/connordepalma/Documents/Git/EE553/session10/practice1.cpp

CMakeFiles/session10.dir/practice1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/session10.dir/practice1.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/connordepalma/Documents/Git/EE553/session10/practice1.cpp > CMakeFiles/session10.dir/practice1.cpp.i

CMakeFiles/session10.dir/practice1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/session10.dir/practice1.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/connordepalma/Documents/Git/EE553/session10/practice1.cpp -o CMakeFiles/session10.dir/practice1.cpp.s

CMakeFiles/session10.dir/practice1.cpp.o.requires:

.PHONY : CMakeFiles/session10.dir/practice1.cpp.o.requires

CMakeFiles/session10.dir/practice1.cpp.o.provides: CMakeFiles/session10.dir/practice1.cpp.o.requires
	$(MAKE) -f CMakeFiles/session10.dir/build.make CMakeFiles/session10.dir/practice1.cpp.o.provides.build
.PHONY : CMakeFiles/session10.dir/practice1.cpp.o.provides

CMakeFiles/session10.dir/practice1.cpp.o.provides.build: CMakeFiles/session10.dir/practice1.cpp.o


# Object files for target session10
session10_OBJECTS = \
"CMakeFiles/session10.dir/main.cpp.o" \
"CMakeFiles/session10.dir/dynamicmemory.cpp.o" \
"CMakeFiles/session10.dir/matrix.cpp.o" \
"CMakeFiles/session10.dir/practice1.cpp.o"

# External object files for target session10
session10_EXTERNAL_OBJECTS =

session10: CMakeFiles/session10.dir/main.cpp.o
session10: CMakeFiles/session10.dir/dynamicmemory.cpp.o
session10: CMakeFiles/session10.dir/matrix.cpp.o
session10: CMakeFiles/session10.dir/practice1.cpp.o
session10: CMakeFiles/session10.dir/build.make
session10: CMakeFiles/session10.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/connordepalma/Documents/Git/EE553/session10/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable session10"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/session10.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/session10.dir/build: session10

.PHONY : CMakeFiles/session10.dir/build

CMakeFiles/session10.dir/requires: CMakeFiles/session10.dir/main.cpp.o.requires
CMakeFiles/session10.dir/requires: CMakeFiles/session10.dir/dynamicmemory.cpp.o.requires
CMakeFiles/session10.dir/requires: CMakeFiles/session10.dir/matrix.cpp.o.requires
CMakeFiles/session10.dir/requires: CMakeFiles/session10.dir/practice1.cpp.o.requires

.PHONY : CMakeFiles/session10.dir/requires

CMakeFiles/session10.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/session10.dir/cmake_clean.cmake
.PHONY : CMakeFiles/session10.dir/clean

CMakeFiles/session10.dir/depend:
	cd /Users/connordepalma/Documents/Git/EE553/session10/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/connordepalma/Documents/Git/EE553/session10 /Users/connordepalma/Documents/Git/EE553/session10 /Users/connordepalma/Documents/Git/EE553/session10/cmake-build-debug /Users/connordepalma/Documents/Git/EE553/session10/cmake-build-debug /Users/connordepalma/Documents/Git/EE553/session10/cmake-build-debug/CMakeFiles/session10.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/session10.dir/depend
