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
CMAKE_SOURCE_DIR = /Users/connordepalma/Documents/Git/EE553/session14

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/connordepalma/Documents/Git/EE553/session14/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Account.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Account.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Account.dir/flags.make

CMakeFiles/Account.dir/Account.cpp.o: CMakeFiles/Account.dir/flags.make
CMakeFiles/Account.dir/Account.cpp.o: ../Account.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/connordepalma/Documents/Git/EE553/session14/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Account.dir/Account.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Account.dir/Account.cpp.o -c /Users/connordepalma/Documents/Git/EE553/session14/Account.cpp

CMakeFiles/Account.dir/Account.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Account.dir/Account.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/connordepalma/Documents/Git/EE553/session14/Account.cpp > CMakeFiles/Account.dir/Account.cpp.i

CMakeFiles/Account.dir/Account.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Account.dir/Account.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/connordepalma/Documents/Git/EE553/session14/Account.cpp -o CMakeFiles/Account.dir/Account.cpp.s

CMakeFiles/Account.dir/Account.cpp.o.requires:

.PHONY : CMakeFiles/Account.dir/Account.cpp.o.requires

CMakeFiles/Account.dir/Account.cpp.o.provides: CMakeFiles/Account.dir/Account.cpp.o.requires
	$(MAKE) -f CMakeFiles/Account.dir/build.make CMakeFiles/Account.dir/Account.cpp.o.provides.build
.PHONY : CMakeFiles/Account.dir/Account.cpp.o.provides

CMakeFiles/Account.dir/Account.cpp.o.provides.build: CMakeFiles/Account.dir/Account.cpp.o


# Object files for target Account
Account_OBJECTS = \
"CMakeFiles/Account.dir/Account.cpp.o"

# External object files for target Account
Account_EXTERNAL_OBJECTS =

Account: CMakeFiles/Account.dir/Account.cpp.o
Account: CMakeFiles/Account.dir/build.make
Account: CMakeFiles/Account.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/connordepalma/Documents/Git/EE553/session14/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Account"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Account.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Account.dir/build: Account

.PHONY : CMakeFiles/Account.dir/build

CMakeFiles/Account.dir/requires: CMakeFiles/Account.dir/Account.cpp.o.requires

.PHONY : CMakeFiles/Account.dir/requires

CMakeFiles/Account.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Account.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Account.dir/clean

CMakeFiles/Account.dir/depend:
	cd /Users/connordepalma/Documents/Git/EE553/session14/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/connordepalma/Documents/Git/EE553/session14 /Users/connordepalma/Documents/Git/EE553/session14 /Users/connordepalma/Documents/Git/EE553/session14/cmake-build-debug /Users/connordepalma/Documents/Git/EE553/session14/cmake-build-debug /Users/connordepalma/Documents/Git/EE553/session14/cmake-build-debug/CMakeFiles/Account.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Account.dir/depend

