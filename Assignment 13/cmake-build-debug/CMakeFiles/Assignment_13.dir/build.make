# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/Nigel/Documents/School/CIS 27/Assignment 13"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/Nigel/Documents/School/CIS 27/Assignment 13/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Assignment_13.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Assignment_13.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Assignment_13.dir/flags.make

CMakeFiles/Assignment_13.dir/main.cpp.o: CMakeFiles/Assignment_13.dir/flags.make
CMakeFiles/Assignment_13.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/Nigel/Documents/School/CIS 27/Assignment 13/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Assignment_13.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Assignment_13.dir/main.cpp.o -c "/Users/Nigel/Documents/School/CIS 27/Assignment 13/main.cpp"

CMakeFiles/Assignment_13.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Assignment_13.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/Nigel/Documents/School/CIS 27/Assignment 13/main.cpp" > CMakeFiles/Assignment_13.dir/main.cpp.i

CMakeFiles/Assignment_13.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Assignment_13.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/Nigel/Documents/School/CIS 27/Assignment 13/main.cpp" -o CMakeFiles/Assignment_13.dir/main.cpp.s

CMakeFiles/Assignment_13.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/Assignment_13.dir/main.cpp.o.requires

CMakeFiles/Assignment_13.dir/main.cpp.o.provides: CMakeFiles/Assignment_13.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Assignment_13.dir/build.make CMakeFiles/Assignment_13.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/Assignment_13.dir/main.cpp.o.provides

CMakeFiles/Assignment_13.dir/main.cpp.o.provides.build: CMakeFiles/Assignment_13.dir/main.cpp.o


# Object files for target Assignment_13
Assignment_13_OBJECTS = \
"CMakeFiles/Assignment_13.dir/main.cpp.o"

# External object files for target Assignment_13
Assignment_13_EXTERNAL_OBJECTS =

Assignment_13: CMakeFiles/Assignment_13.dir/main.cpp.o
Assignment_13: CMakeFiles/Assignment_13.dir/build.make
Assignment_13: CMakeFiles/Assignment_13.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/Nigel/Documents/School/CIS 27/Assignment 13/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Assignment_13"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Assignment_13.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Assignment_13.dir/build: Assignment_13

.PHONY : CMakeFiles/Assignment_13.dir/build

CMakeFiles/Assignment_13.dir/requires: CMakeFiles/Assignment_13.dir/main.cpp.o.requires

.PHONY : CMakeFiles/Assignment_13.dir/requires

CMakeFiles/Assignment_13.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Assignment_13.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Assignment_13.dir/clean

CMakeFiles/Assignment_13.dir/depend:
	cd "/Users/Nigel/Documents/School/CIS 27/Assignment 13/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/Nigel/Documents/School/CIS 27/Assignment 13" "/Users/Nigel/Documents/School/CIS 27/Assignment 13" "/Users/Nigel/Documents/School/CIS 27/Assignment 13/cmake-build-debug" "/Users/Nigel/Documents/School/CIS 27/Assignment 13/cmake-build-debug" "/Users/Nigel/Documents/School/CIS 27/Assignment 13/cmake-build-debug/CMakeFiles/Assignment_13.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Assignment_13.dir/depend

