# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/benjaminlewis/CSC 600/Procedural-Programming/Procedural-Programming"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/benjaminlewis/CSC 600/Procedural-Programming/Procedural-Programming/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Procedural-Programming.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Procedural-Programming.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Procedural-Programming.dir/flags.make

CMakeFiles/Procedural-Programming.dir/main.cpp.o: CMakeFiles/Procedural-Programming.dir/flags.make
CMakeFiles/Procedural-Programming.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/benjaminlewis/CSC 600/Procedural-Programming/Procedural-Programming/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Procedural-Programming.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Procedural-Programming.dir/main.cpp.o -c "/Users/benjaminlewis/CSC 600/Procedural-Programming/Procedural-Programming/main.cpp"

CMakeFiles/Procedural-Programming.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Procedural-Programming.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/benjaminlewis/CSC 600/Procedural-Programming/Procedural-Programming/main.cpp" > CMakeFiles/Procedural-Programming.dir/main.cpp.i

CMakeFiles/Procedural-Programming.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Procedural-Programming.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/benjaminlewis/CSC 600/Procedural-Programming/Procedural-Programming/main.cpp" -o CMakeFiles/Procedural-Programming.dir/main.cpp.s

# Object files for target Procedural-Programming
Procedural__Programming_OBJECTS = \
"CMakeFiles/Procedural-Programming.dir/main.cpp.o"

# External object files for target Procedural-Programming
Procedural__Programming_EXTERNAL_OBJECTS =

Procedural-Programming: CMakeFiles/Procedural-Programming.dir/main.cpp.o
Procedural-Programming: CMakeFiles/Procedural-Programming.dir/build.make
Procedural-Programming: CMakeFiles/Procedural-Programming.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/benjaminlewis/CSC 600/Procedural-Programming/Procedural-Programming/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Procedural-Programming"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Procedural-Programming.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Procedural-Programming.dir/build: Procedural-Programming

.PHONY : CMakeFiles/Procedural-Programming.dir/build

CMakeFiles/Procedural-Programming.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Procedural-Programming.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Procedural-Programming.dir/clean

CMakeFiles/Procedural-Programming.dir/depend:
	cd "/Users/benjaminlewis/CSC 600/Procedural-Programming/Procedural-Programming/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/benjaminlewis/CSC 600/Procedural-Programming/Procedural-Programming" "/Users/benjaminlewis/CSC 600/Procedural-Programming/Procedural-Programming" "/Users/benjaminlewis/CSC 600/Procedural-Programming/Procedural-Programming/cmake-build-debug" "/Users/benjaminlewis/CSC 600/Procedural-Programming/Procedural-Programming/cmake-build-debug" "/Users/benjaminlewis/CSC 600/Procedural-Programming/Procedural-Programming/cmake-build-debug/CMakeFiles/Procedural-Programming.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Procedural-Programming.dir/depend

