# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
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
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/lixiang/CLionProjects/课本例题+习题/例10.5.c

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/lixiang/CLionProjects/课本例题+习题/例10.5.c/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/10_5_c.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/10_5_c.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/10_5_c.dir/flags.make

CMakeFiles/10_5_c.dir/main.c.o: CMakeFiles/10_5_c.dir/flags.make
CMakeFiles/10_5_c.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/lixiang/CLionProjects/课本例题+习题/例10.5.c/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/10_5_c.dir/main.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/10_5_c.dir/main.c.o -c /Users/lixiang/CLionProjects/课本例题+习题/例10.5.c/main.c

CMakeFiles/10_5_c.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/10_5_c.dir/main.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/lixiang/CLionProjects/课本例题+习题/例10.5.c/main.c > CMakeFiles/10_5_c.dir/main.c.i

CMakeFiles/10_5_c.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/10_5_c.dir/main.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/lixiang/CLionProjects/课本例题+习题/例10.5.c/main.c -o CMakeFiles/10_5_c.dir/main.c.s

# Object files for target 10_5_c
10_5_c_OBJECTS = \
"CMakeFiles/10_5_c.dir/main.c.o"

# External object files for target 10_5_c
10_5_c_EXTERNAL_OBJECTS =

10_5_c: CMakeFiles/10_5_c.dir/main.c.o
10_5_c: CMakeFiles/10_5_c.dir/build.make
10_5_c: CMakeFiles/10_5_c.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/lixiang/CLionProjects/课本例题+习题/例10.5.c/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable 10_5_c"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/10_5_c.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/10_5_c.dir/build: 10_5_c
.PHONY : CMakeFiles/10_5_c.dir/build

CMakeFiles/10_5_c.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/10_5_c.dir/cmake_clean.cmake
.PHONY : CMakeFiles/10_5_c.dir/clean

CMakeFiles/10_5_c.dir/depend:
	cd /Users/lixiang/CLionProjects/课本例题+习题/例10.5.c/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/lixiang/CLionProjects/课本例题+习题/例10.5.c /Users/lixiang/CLionProjects/课本例题+习题/例10.5.c /Users/lixiang/CLionProjects/课本例题+习题/例10.5.c/cmake-build-debug /Users/lixiang/CLionProjects/课本例题+习题/例10.5.c/cmake-build-debug /Users/lixiang/CLionProjects/课本例题+习题/例10.5.c/cmake-build-debug/CMakeFiles/10_5_c.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/10_5_c.dir/depend

