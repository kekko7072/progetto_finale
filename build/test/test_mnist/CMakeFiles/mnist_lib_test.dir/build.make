# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/leonardoparise/progetto5/progetto_finale

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/leonardoparise/progetto5/progetto_finale/build

# Include any dependencies generated for this target.
include test/test_mnist/CMakeFiles/mnist_lib_test.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include test/test_mnist/CMakeFiles/mnist_lib_test.dir/compiler_depend.make

# Include the progress variables for this target.
include test/test_mnist/CMakeFiles/mnist_lib_test.dir/progress.make

# Include the compile flags for this target's objects.
include test/test_mnist/CMakeFiles/mnist_lib_test.dir/flags.make

test/test_mnist/CMakeFiles/mnist_lib_test.dir/src/test.c.o: test/test_mnist/CMakeFiles/mnist_lib_test.dir/flags.make
test/test_mnist/CMakeFiles/mnist_lib_test.dir/src/test.c.o: ../test/test_mnist/src/test.c
test/test_mnist/CMakeFiles/mnist_lib_test.dir/src/test.c.o: test/test_mnist/CMakeFiles/mnist_lib_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/leonardoparise/progetto5/progetto_finale/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object test/test_mnist/CMakeFiles/mnist_lib_test.dir/src/test.c.o"
	cd /home/leonardoparise/progetto5/progetto_finale/build/test/test_mnist && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT test/test_mnist/CMakeFiles/mnist_lib_test.dir/src/test.c.o -MF CMakeFiles/mnist_lib_test.dir/src/test.c.o.d -o CMakeFiles/mnist_lib_test.dir/src/test.c.o -c /home/leonardoparise/progetto5/progetto_finale/test/test_mnist/src/test.c

test/test_mnist/CMakeFiles/mnist_lib_test.dir/src/test.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/mnist_lib_test.dir/src/test.c.i"
	cd /home/leonardoparise/progetto5/progetto_finale/build/test/test_mnist && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/leonardoparise/progetto5/progetto_finale/test/test_mnist/src/test.c > CMakeFiles/mnist_lib_test.dir/src/test.c.i

test/test_mnist/CMakeFiles/mnist_lib_test.dir/src/test.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/mnist_lib_test.dir/src/test.c.s"
	cd /home/leonardoparise/progetto5/progetto_finale/build/test/test_mnist && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/leonardoparise/progetto5/progetto_finale/test/test_mnist/src/test.c -o CMakeFiles/mnist_lib_test.dir/src/test.c.s

# Object files for target mnist_lib_test
mnist_lib_test_OBJECTS = \
"CMakeFiles/mnist_lib_test.dir/src/test.c.o"

# External object files for target mnist_lib_test
mnist_lib_test_EXTERNAL_OBJECTS =

test/test_mnist/mnist_lib_test: test/test_mnist/CMakeFiles/mnist_lib_test.dir/src/test.c.o
test/test_mnist/mnist_lib_test: test/test_mnist/CMakeFiles/mnist_lib_test.dir/build.make
test/test_mnist/mnist_lib_test: lib/mnist/libmnist.so
test/test_mnist/mnist_lib_test: external/Unity/libUnity.a
test/test_mnist/mnist_lib_test: test/test_mnist/CMakeFiles/mnist_lib_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/leonardoparise/progetto5/progetto_finale/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable mnist_lib_test"
	cd /home/leonardoparise/progetto5/progetto_finale/build/test/test_mnist && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/mnist_lib_test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/test_mnist/CMakeFiles/mnist_lib_test.dir/build: test/test_mnist/mnist_lib_test
.PHONY : test/test_mnist/CMakeFiles/mnist_lib_test.dir/build

test/test_mnist/CMakeFiles/mnist_lib_test.dir/clean:
	cd /home/leonardoparise/progetto5/progetto_finale/build/test/test_mnist && $(CMAKE_COMMAND) -P CMakeFiles/mnist_lib_test.dir/cmake_clean.cmake
.PHONY : test/test_mnist/CMakeFiles/mnist_lib_test.dir/clean

test/test_mnist/CMakeFiles/mnist_lib_test.dir/depend:
	cd /home/leonardoparise/progetto5/progetto_finale/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/leonardoparise/progetto5/progetto_finale /home/leonardoparise/progetto5/progetto_finale/test/test_mnist /home/leonardoparise/progetto5/progetto_finale/build /home/leonardoparise/progetto5/progetto_finale/build/test/test_mnist /home/leonardoparise/progetto5/progetto_finale/build/test/test_mnist/CMakeFiles/mnist_lib_test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/test_mnist/CMakeFiles/mnist_lib_test.dir/depend

