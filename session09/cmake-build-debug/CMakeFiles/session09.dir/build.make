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
CMAKE_COMMAND = "/Users/connordepalma/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/173.4674.29/CLion.app/Contents/bin/cmake/bin/cmake"

# The command to remove a file.
RM = "/Users/connordepalma/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/173.4674.29/CLion.app/Contents/bin/cmake/bin/cmake" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/connordepalma/Documents/Git/EE553/session09

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/connordepalma/Documents/Git/EE553/session09/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/session09.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/session09.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/session09.dir/flags.make

CMakeFiles/session09.dir/main.cpp.o: CMakeFiles/session09.dir/flags.make
CMakeFiles/session09.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/connordepalma/Documents/Git/EE553/session09/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/session09.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/session09.dir/main.cpp.o -c /Users/connordepalma/Documents/Git/EE553/session09/main.cpp

CMakeFiles/session09.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/session09.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/connordepalma/Documents/Git/EE553/session09/main.cpp > CMakeFiles/session09.dir/main.cpp.i

CMakeFiles/session09.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/session09.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/connordepalma/Documents/Git/EE553/session09/main.cpp -o CMakeFiles/session09.dir/main.cpp.s

CMakeFiles/session09.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/session09.dir/main.cpp.o.requires

CMakeFiles/session09.dir/main.cpp.o.provides: CMakeFiles/session09.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/session09.dir/build.make CMakeFiles/session09.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/session09.dir/main.cpp.o.provides

CMakeFiles/session09.dir/main.cpp.o.provides.build: CMakeFiles/session09.dir/main.cpp.o


CMakeFiles/session09.dir/dynamicMemory.cpp.o: CMakeFiles/session09.dir/flags.make
CMakeFiles/session09.dir/dynamicMemory.cpp.o: ../dynamicMemory.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/connordepalma/Documents/Git/EE553/session09/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/session09.dir/dynamicMemory.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/session09.dir/dynamicMemory.cpp.o -c /Users/connordepalma/Documents/Git/EE553/session09/dynamicMemory.cpp

CMakeFiles/session09.dir/dynamicMemory.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/session09.dir/dynamicMemory.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/connordepalma/Documents/Git/EE553/session09/dynamicMemory.cpp > CMakeFiles/session09.dir/dynamicMemory.cpp.i

CMakeFiles/session09.dir/dynamicMemory.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/session09.dir/dynamicMemory.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/connordepalma/Documents/Git/EE553/session09/dynamicMemory.cpp -o CMakeFiles/session09.dir/dynamicMemory.cpp.s

CMakeFiles/session09.dir/dynamicMemory.cpp.o.requires:

.PHONY : CMakeFiles/session09.dir/dynamicMemory.cpp.o.requires

CMakeFiles/session09.dir/dynamicMemory.cpp.o.provides: CMakeFiles/session09.dir/dynamicMemory.cpp.o.requires
	$(MAKE) -f CMakeFiles/session09.dir/build.make CMakeFiles/session09.dir/dynamicMemory.cpp.o.provides.build
.PHONY : CMakeFiles/session09.dir/dynamicMemory.cpp.o.provides

CMakeFiles/session09.dir/dynamicMemory.cpp.o.provides.build: CMakeFiles/session09.dir/dynamicMemory.cpp.o


CMakeFiles/session09.dir/dynamicarray.cpp.o: CMakeFiles/session09.dir/flags.make
CMakeFiles/session09.dir/dynamicarray.cpp.o: ../dynamicarray.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/connordepalma/Documents/Git/EE553/session09/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/session09.dir/dynamicarray.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/session09.dir/dynamicarray.cpp.o -c /Users/connordepalma/Documents/Git/EE553/session09/dynamicarray.cpp

CMakeFiles/session09.dir/dynamicarray.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/session09.dir/dynamicarray.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/connordepalma/Documents/Git/EE553/session09/dynamicarray.cpp > CMakeFiles/session09.dir/dynamicarray.cpp.i

CMakeFiles/session09.dir/dynamicarray.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/session09.dir/dynamicarray.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/connordepalma/Documents/Git/EE553/session09/dynamicarray.cpp -o CMakeFiles/session09.dir/dynamicarray.cpp.s

CMakeFiles/session09.dir/dynamicarray.cpp.o.requires:

.PHONY : CMakeFiles/session09.dir/dynamicarray.cpp.o.requires

CMakeFiles/session09.dir/dynamicarray.cpp.o.provides: CMakeFiles/session09.dir/dynamicarray.cpp.o.requires
	$(MAKE) -f CMakeFiles/session09.dir/build.make CMakeFiles/session09.dir/dynamicarray.cpp.o.provides.build
.PHONY : CMakeFiles/session09.dir/dynamicarray.cpp.o.provides

CMakeFiles/session09.dir/dynamicarray.cpp.o.provides.build: CMakeFiles/session09.dir/dynamicarray.cpp.o


CMakeFiles/session09.dir/String.cpp.o: CMakeFiles/session09.dir/flags.make
CMakeFiles/session09.dir/String.cpp.o: ../String.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/connordepalma/Documents/Git/EE553/session09/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/session09.dir/String.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/session09.dir/String.cpp.o -c /Users/connordepalma/Documents/Git/EE553/session09/String.cpp

CMakeFiles/session09.dir/String.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/session09.dir/String.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/connordepalma/Documents/Git/EE553/session09/String.cpp > CMakeFiles/session09.dir/String.cpp.i

CMakeFiles/session09.dir/String.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/session09.dir/String.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/connordepalma/Documents/Git/EE553/session09/String.cpp -o CMakeFiles/session09.dir/String.cpp.s

CMakeFiles/session09.dir/String.cpp.o.requires:

.PHONY : CMakeFiles/session09.dir/String.cpp.o.requires

CMakeFiles/session09.dir/String.cpp.o.provides: CMakeFiles/session09.dir/String.cpp.o.requires
	$(MAKE) -f CMakeFiles/session09.dir/build.make CMakeFiles/session09.dir/String.cpp.o.provides.build
.PHONY : CMakeFiles/session09.dir/String.cpp.o.provides

CMakeFiles/session09.dir/String.cpp.o.provides.build: CMakeFiles/session09.dir/String.cpp.o


# Object files for target session09
session09_OBJECTS = \
"CMakeFiles/session09.dir/main.cpp.o" \
"CMakeFiles/session09.dir/dynamicMemory.cpp.o" \
"CMakeFiles/session09.dir/dynamicarray.cpp.o" \
"CMakeFiles/session09.dir/String.cpp.o"

# External object files for target session09
session09_EXTERNAL_OBJECTS =

session09: CMakeFiles/session09.dir/main.cpp.o
session09: CMakeFiles/session09.dir/dynamicMemory.cpp.o
session09: CMakeFiles/session09.dir/dynamicarray.cpp.o
session09: CMakeFiles/session09.dir/String.cpp.o
session09: CMakeFiles/session09.dir/build.make
session09: CMakeFiles/session09.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/connordepalma/Documents/Git/EE553/session09/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable session09"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/session09.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/session09.dir/build: session09

.PHONY : CMakeFiles/session09.dir/build

CMakeFiles/session09.dir/requires: CMakeFiles/session09.dir/main.cpp.o.requires
CMakeFiles/session09.dir/requires: CMakeFiles/session09.dir/dynamicMemory.cpp.o.requires
CMakeFiles/session09.dir/requires: CMakeFiles/session09.dir/dynamicarray.cpp.o.requires
CMakeFiles/session09.dir/requires: CMakeFiles/session09.dir/String.cpp.o.requires

.PHONY : CMakeFiles/session09.dir/requires

CMakeFiles/session09.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/session09.dir/cmake_clean.cmake
.PHONY : CMakeFiles/session09.dir/clean

CMakeFiles/session09.dir/depend:
	cd /Users/connordepalma/Documents/Git/EE553/session09/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/connordepalma/Documents/Git/EE553/session09 /Users/connordepalma/Documents/Git/EE553/session09 /Users/connordepalma/Documents/Git/EE553/session09/cmake-build-debug /Users/connordepalma/Documents/Git/EE553/session09/cmake-build-debug /Users/connordepalma/Documents/Git/EE553/session09/cmake-build-debug/CMakeFiles/session09.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/session09.dir/depend

