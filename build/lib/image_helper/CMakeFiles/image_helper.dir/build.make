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
include lib/image_helper/CMakeFiles/image_helper.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include lib/image_helper/CMakeFiles/image_helper.dir/compiler_depend.make

# Include the progress variables for this target.
include lib/image_helper/CMakeFiles/image_helper.dir/progress.make

# Include the compile flags for this target's objects.
include lib/image_helper/CMakeFiles/image_helper.dir/flags.make

lib/image_helper/CMakeFiles/image_helper.dir/src/image_helper.c.o: lib/image_helper/CMakeFiles/image_helper.dir/flags.make
lib/image_helper/CMakeFiles/image_helper.dir/src/image_helper.c.o: ../lib/image_helper/src/image_helper.c
lib/image_helper/CMakeFiles/image_helper.dir/src/image_helper.c.o: lib/image_helper/CMakeFiles/image_helper.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/leonardoparise/progetto5/progetto_finale/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object lib/image_helper/CMakeFiles/image_helper.dir/src/image_helper.c.o"
	cd /home/leonardoparise/progetto5/progetto_finale/build/lib/image_helper && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT lib/image_helper/CMakeFiles/image_helper.dir/src/image_helper.c.o -MF CMakeFiles/image_helper.dir/src/image_helper.c.o.d -o CMakeFiles/image_helper.dir/src/image_helper.c.o -c /home/leonardoparise/progetto5/progetto_finale/lib/image_helper/src/image_helper.c

lib/image_helper/CMakeFiles/image_helper.dir/src/image_helper.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/image_helper.dir/src/image_helper.c.i"
	cd /home/leonardoparise/progetto5/progetto_finale/build/lib/image_helper && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/leonardoparise/progetto5/progetto_finale/lib/image_helper/src/image_helper.c > CMakeFiles/image_helper.dir/src/image_helper.c.i

lib/image_helper/CMakeFiles/image_helper.dir/src/image_helper.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/image_helper.dir/src/image_helper.c.s"
	cd /home/leonardoparise/progetto5/progetto_finale/build/lib/image_helper && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/leonardoparise/progetto5/progetto_finale/lib/image_helper/src/image_helper.c -o CMakeFiles/image_helper.dir/src/image_helper.c.s

# Object files for target image_helper
image_helper_OBJECTS = \
"CMakeFiles/image_helper.dir/src/image_helper.c.o"

# External object files for target image_helper
image_helper_EXTERNAL_OBJECTS =

lib/image_helper/libimage_helper.a: lib/image_helper/CMakeFiles/image_helper.dir/src/image_helper.c.o
lib/image_helper/libimage_helper.a: lib/image_helper/CMakeFiles/image_helper.dir/build.make
lib/image_helper/libimage_helper.a: lib/image_helper/CMakeFiles/image_helper.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/leonardoparise/progetto5/progetto_finale/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C static library libimage_helper.a"
	cd /home/leonardoparise/progetto5/progetto_finale/build/lib/image_helper && $(CMAKE_COMMAND) -P CMakeFiles/image_helper.dir/cmake_clean_target.cmake
	cd /home/leonardoparise/progetto5/progetto_finale/build/lib/image_helper && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/image_helper.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/image_helper/CMakeFiles/image_helper.dir/build: lib/image_helper/libimage_helper.a
.PHONY : lib/image_helper/CMakeFiles/image_helper.dir/build

lib/image_helper/CMakeFiles/image_helper.dir/clean:
	cd /home/leonardoparise/progetto5/progetto_finale/build/lib/image_helper && $(CMAKE_COMMAND) -P CMakeFiles/image_helper.dir/cmake_clean.cmake
.PHONY : lib/image_helper/CMakeFiles/image_helper.dir/clean

lib/image_helper/CMakeFiles/image_helper.dir/depend:
	cd /home/leonardoparise/progetto5/progetto_finale/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/leonardoparise/progetto5/progetto_finale /home/leonardoparise/progetto5/progetto_finale/lib/image_helper /home/leonardoparise/progetto5/progetto_finale/build /home/leonardoparise/progetto5/progetto_finale/build/lib/image_helper /home/leonardoparise/progetto5/progetto_finale/build/lib/image_helper/CMakeFiles/image_helper.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/image_helper/CMakeFiles/image_helper.dir/depend
