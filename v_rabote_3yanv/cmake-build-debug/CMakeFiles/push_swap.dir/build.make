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
CMAKE_SOURCE_DIR = /Users/snakita/CLionProjects/push_swap

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/snakita/CLionProjects/push_swap/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/push_swap.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/push_swap.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/push_swap.dir/flags.make

CMakeFiles/push_swap.dir/push_swap.c.o: CMakeFiles/push_swap.dir/flags.make
CMakeFiles/push_swap.dir/push_swap.c.o: ../push_swap.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/snakita/CLionProjects/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/push_swap.dir/push_swap.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/push_swap.dir/push_swap.c.o -c /Users/snakita/CLionProjects/push_swap/push_swap.c

CMakeFiles/push_swap.dir/push_swap.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/push_swap.dir/push_swap.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/snakita/CLionProjects/push_swap/push_swap.c > CMakeFiles/push_swap.dir/push_swap.c.i

CMakeFiles/push_swap.dir/push_swap.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/push_swap.dir/push_swap.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/snakita/CLionProjects/push_swap/push_swap.c -o CMakeFiles/push_swap.dir/push_swap.c.s

CMakeFiles/push_swap.dir/utils.c.o: CMakeFiles/push_swap.dir/flags.make
CMakeFiles/push_swap.dir/utils.c.o: ../utils.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/snakita/CLionProjects/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/push_swap.dir/utils.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/push_swap.dir/utils.c.o -c /Users/snakita/CLionProjects/push_swap/utils.c

CMakeFiles/push_swap.dir/utils.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/push_swap.dir/utils.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/snakita/CLionProjects/push_swap/utils.c > CMakeFiles/push_swap.dir/utils.c.i

CMakeFiles/push_swap.dir/utils.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/push_swap.dir/utils.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/snakita/CLionProjects/push_swap/utils.c -o CMakeFiles/push_swap.dir/utils.c.s

CMakeFiles/push_swap.dir/utils2.c.o: CMakeFiles/push_swap.dir/flags.make
CMakeFiles/push_swap.dir/utils2.c.o: ../utils2.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/snakita/CLionProjects/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/push_swap.dir/utils2.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/push_swap.dir/utils2.c.o -c /Users/snakita/CLionProjects/push_swap/utils2.c

CMakeFiles/push_swap.dir/utils2.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/push_swap.dir/utils2.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/snakita/CLionProjects/push_swap/utils2.c > CMakeFiles/push_swap.dir/utils2.c.i

CMakeFiles/push_swap.dir/utils2.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/push_swap.dir/utils2.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/snakita/CLionProjects/push_swap/utils2.c -o CMakeFiles/push_swap.dir/utils2.c.s

CMakeFiles/push_swap.dir/write_arg.c.o: CMakeFiles/push_swap.dir/flags.make
CMakeFiles/push_swap.dir/write_arg.c.o: ../write_arg.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/snakita/CLionProjects/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/push_swap.dir/write_arg.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/push_swap.dir/write_arg.c.o -c /Users/snakita/CLionProjects/push_swap/write_arg.c

CMakeFiles/push_swap.dir/write_arg.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/push_swap.dir/write_arg.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/snakita/CLionProjects/push_swap/write_arg.c > CMakeFiles/push_swap.dir/write_arg.c.i

CMakeFiles/push_swap.dir/write_arg.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/push_swap.dir/write_arg.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/snakita/CLionProjects/push_swap/write_arg.c -o CMakeFiles/push_swap.dir/write_arg.c.s

CMakeFiles/push_swap.dir/ft_split.c.o: CMakeFiles/push_swap.dir/flags.make
CMakeFiles/push_swap.dir/ft_split.c.o: ../ft_split.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/snakita/CLionProjects/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/push_swap.dir/ft_split.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/push_swap.dir/ft_split.c.o -c /Users/snakita/CLionProjects/push_swap/ft_split.c

CMakeFiles/push_swap.dir/ft_split.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/push_swap.dir/ft_split.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/snakita/CLionProjects/push_swap/ft_split.c > CMakeFiles/push_swap.dir/ft_split.c.i

CMakeFiles/push_swap.dir/ft_split.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/push_swap.dir/ft_split.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/snakita/CLionProjects/push_swap/ft_split.c -o CMakeFiles/push_swap.dir/ft_split.c.s

CMakeFiles/push_swap.dir/instr_s.c.o: CMakeFiles/push_swap.dir/flags.make
CMakeFiles/push_swap.dir/instr_s.c.o: ../instr_s.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/snakita/CLionProjects/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/push_swap.dir/instr_s.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/push_swap.dir/instr_s.c.o -c /Users/snakita/CLionProjects/push_swap/instr_s.c

CMakeFiles/push_swap.dir/instr_s.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/push_swap.dir/instr_s.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/snakita/CLionProjects/push_swap/instr_s.c > CMakeFiles/push_swap.dir/instr_s.c.i

CMakeFiles/push_swap.dir/instr_s.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/push_swap.dir/instr_s.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/snakita/CLionProjects/push_swap/instr_s.c -o CMakeFiles/push_swap.dir/instr_s.c.s

CMakeFiles/push_swap.dir/list.c.o: CMakeFiles/push_swap.dir/flags.make
CMakeFiles/push_swap.dir/list.c.o: ../list.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/snakita/CLionProjects/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/push_swap.dir/list.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/push_swap.dir/list.c.o -c /Users/snakita/CLionProjects/push_swap/list.c

CMakeFiles/push_swap.dir/list.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/push_swap.dir/list.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/snakita/CLionProjects/push_swap/list.c > CMakeFiles/push_swap.dir/list.c.i

CMakeFiles/push_swap.dir/list.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/push_swap.dir/list.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/snakita/CLionProjects/push_swap/list.c -o CMakeFiles/push_swap.dir/list.c.s

CMakeFiles/push_swap.dir/instr_p.c.o: CMakeFiles/push_swap.dir/flags.make
CMakeFiles/push_swap.dir/instr_p.c.o: ../instr_p.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/snakita/CLionProjects/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/push_swap.dir/instr_p.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/push_swap.dir/instr_p.c.o -c /Users/snakita/CLionProjects/push_swap/instr_p.c

CMakeFiles/push_swap.dir/instr_p.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/push_swap.dir/instr_p.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/snakita/CLionProjects/push_swap/instr_p.c > CMakeFiles/push_swap.dir/instr_p.c.i

CMakeFiles/push_swap.dir/instr_p.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/push_swap.dir/instr_p.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/snakita/CLionProjects/push_swap/instr_p.c -o CMakeFiles/push_swap.dir/instr_p.c.s

CMakeFiles/push_swap.dir/instr_r.c.o: CMakeFiles/push_swap.dir/flags.make
CMakeFiles/push_swap.dir/instr_r.c.o: ../instr_r.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/snakita/CLionProjects/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object CMakeFiles/push_swap.dir/instr_r.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/push_swap.dir/instr_r.c.o -c /Users/snakita/CLionProjects/push_swap/instr_r.c

CMakeFiles/push_swap.dir/instr_r.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/push_swap.dir/instr_r.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/snakita/CLionProjects/push_swap/instr_r.c > CMakeFiles/push_swap.dir/instr_r.c.i

CMakeFiles/push_swap.dir/instr_r.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/push_swap.dir/instr_r.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/snakita/CLionProjects/push_swap/instr_r.c -o CMakeFiles/push_swap.dir/instr_r.c.s

CMakeFiles/push_swap.dir/instr_rr.c.o: CMakeFiles/push_swap.dir/flags.make
CMakeFiles/push_swap.dir/instr_rr.c.o: ../instr_rr.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/snakita/CLionProjects/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building C object CMakeFiles/push_swap.dir/instr_rr.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/push_swap.dir/instr_rr.c.o -c /Users/snakita/CLionProjects/push_swap/instr_rr.c

CMakeFiles/push_swap.dir/instr_rr.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/push_swap.dir/instr_rr.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/snakita/CLionProjects/push_swap/instr_rr.c > CMakeFiles/push_swap.dir/instr_rr.c.i

CMakeFiles/push_swap.dir/instr_rr.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/push_swap.dir/instr_rr.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/snakita/CLionProjects/push_swap/instr_rr.c -o CMakeFiles/push_swap.dir/instr_rr.c.s

CMakeFiles/push_swap.dir/sort.c.o: CMakeFiles/push_swap.dir/flags.make
CMakeFiles/push_swap.dir/sort.c.o: ../sort.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/snakita/CLionProjects/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building C object CMakeFiles/push_swap.dir/sort.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/push_swap.dir/sort.c.o -c /Users/snakita/CLionProjects/push_swap/sort.c

CMakeFiles/push_swap.dir/sort.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/push_swap.dir/sort.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/snakita/CLionProjects/push_swap/sort.c > CMakeFiles/push_swap.dir/sort.c.i

CMakeFiles/push_swap.dir/sort.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/push_swap.dir/sort.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/snakita/CLionProjects/push_swap/sort.c -o CMakeFiles/push_swap.dir/sort.c.s

CMakeFiles/push_swap.dir/list2.c.o: CMakeFiles/push_swap.dir/flags.make
CMakeFiles/push_swap.dir/list2.c.o: ../list2.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/snakita/CLionProjects/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building C object CMakeFiles/push_swap.dir/list2.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/push_swap.dir/list2.c.o -c /Users/snakita/CLionProjects/push_swap/list2.c

CMakeFiles/push_swap.dir/list2.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/push_swap.dir/list2.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/snakita/CLionProjects/push_swap/list2.c > CMakeFiles/push_swap.dir/list2.c.i

CMakeFiles/push_swap.dir/list2.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/push_swap.dir/list2.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/snakita/CLionProjects/push_swap/list2.c -o CMakeFiles/push_swap.dir/list2.c.s

CMakeFiles/push_swap.dir/global_sort.c.o: CMakeFiles/push_swap.dir/flags.make
CMakeFiles/push_swap.dir/global_sort.c.o: ../global_sort.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/snakita/CLionProjects/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building C object CMakeFiles/push_swap.dir/global_sort.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/push_swap.dir/global_sort.c.o -c /Users/snakita/CLionProjects/push_swap/global_sort.c

CMakeFiles/push_swap.dir/global_sort.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/push_swap.dir/global_sort.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/snakita/CLionProjects/push_swap/global_sort.c > CMakeFiles/push_swap.dir/global_sort.c.i

CMakeFiles/push_swap.dir/global_sort.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/push_swap.dir/global_sort.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/snakita/CLionProjects/push_swap/global_sort.c -o CMakeFiles/push_swap.dir/global_sort.c.s

CMakeFiles/push_swap.dir/list3.c.o: CMakeFiles/push_swap.dir/flags.make
CMakeFiles/push_swap.dir/list3.c.o: ../list3.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/snakita/CLionProjects/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building C object CMakeFiles/push_swap.dir/list3.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/push_swap.dir/list3.c.o -c /Users/snakita/CLionProjects/push_swap/list3.c

CMakeFiles/push_swap.dir/list3.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/push_swap.dir/list3.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/snakita/CLionProjects/push_swap/list3.c > CMakeFiles/push_swap.dir/list3.c.i

CMakeFiles/push_swap.dir/list3.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/push_swap.dir/list3.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/snakita/CLionProjects/push_swap/list3.c -o CMakeFiles/push_swap.dir/list3.c.s

# Object files for target push_swap
push_swap_OBJECTS = \
"CMakeFiles/push_swap.dir/push_swap.c.o" \
"CMakeFiles/push_swap.dir/utils.c.o" \
"CMakeFiles/push_swap.dir/utils2.c.o" \
"CMakeFiles/push_swap.dir/write_arg.c.o" \
"CMakeFiles/push_swap.dir/ft_split.c.o" \
"CMakeFiles/push_swap.dir/instr_s.c.o" \
"CMakeFiles/push_swap.dir/list.c.o" \
"CMakeFiles/push_swap.dir/instr_p.c.o" \
"CMakeFiles/push_swap.dir/instr_r.c.o" \
"CMakeFiles/push_swap.dir/instr_rr.c.o" \
"CMakeFiles/push_swap.dir/sort.c.o" \
"CMakeFiles/push_swap.dir/list2.c.o" \
"CMakeFiles/push_swap.dir/global_sort.c.o" \
"CMakeFiles/push_swap.dir/list3.c.o"

# External object files for target push_swap
push_swap_EXTERNAL_OBJECTS =

push_swap: CMakeFiles/push_swap.dir/push_swap.c.o
push_swap: CMakeFiles/push_swap.dir/utils.c.o
push_swap: CMakeFiles/push_swap.dir/utils2.c.o
push_swap: CMakeFiles/push_swap.dir/write_arg.c.o
push_swap: CMakeFiles/push_swap.dir/ft_split.c.o
push_swap: CMakeFiles/push_swap.dir/instr_s.c.o
push_swap: CMakeFiles/push_swap.dir/list.c.o
push_swap: CMakeFiles/push_swap.dir/instr_p.c.o
push_swap: CMakeFiles/push_swap.dir/instr_r.c.o
push_swap: CMakeFiles/push_swap.dir/instr_rr.c.o
push_swap: CMakeFiles/push_swap.dir/sort.c.o
push_swap: CMakeFiles/push_swap.dir/list2.c.o
push_swap: CMakeFiles/push_swap.dir/global_sort.c.o
push_swap: CMakeFiles/push_swap.dir/list3.c.o
push_swap: CMakeFiles/push_swap.dir/build.make
push_swap: CMakeFiles/push_swap.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/snakita/CLionProjects/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Linking C executable push_swap"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/push_swap.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/push_swap.dir/build: push_swap
.PHONY : CMakeFiles/push_swap.dir/build

CMakeFiles/push_swap.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/push_swap.dir/cmake_clean.cmake
.PHONY : CMakeFiles/push_swap.dir/clean

CMakeFiles/push_swap.dir/depend:
	cd /Users/snakita/CLionProjects/push_swap/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/snakita/CLionProjects/push_swap /Users/snakita/CLionProjects/push_swap /Users/snakita/CLionProjects/push_swap/cmake-build-debug /Users/snakita/CLionProjects/push_swap/cmake-build-debug /Users/snakita/CLionProjects/push_swap/cmake-build-debug/CMakeFiles/push_swap.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/push_swap.dir/depend
