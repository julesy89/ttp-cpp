# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/ccmake

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/julesy/Workspace/travelling-thief-problem/vendor/knpgenerator

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/julesy/Workspace/travelling-thief-problem/vendor/knpgenerator

# Include any dependencies generated for this target.
include CMakeFiles/knpgenerator.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/knpgenerator.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/knpgenerator.dir/flags.make

CMakeFiles/knpgenerator.dir/pisinger_generator.c.o: CMakeFiles/knpgenerator.dir/flags.make
CMakeFiles/knpgenerator.dir/pisinger_generator.c.o: pisinger_generator.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/julesy/Workspace/travelling-thief-problem/vendor/knpgenerator/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/knpgenerator.dir/pisinger_generator.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/knpgenerator.dir/pisinger_generator.c.o   -c /home/julesy/Workspace/travelling-thief-problem/vendor/knpgenerator/pisinger_generator.c

CMakeFiles/knpgenerator.dir/pisinger_generator.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/knpgenerator.dir/pisinger_generator.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/julesy/Workspace/travelling-thief-problem/vendor/knpgenerator/pisinger_generator.c > CMakeFiles/knpgenerator.dir/pisinger_generator.c.i

CMakeFiles/knpgenerator.dir/pisinger_generator.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/knpgenerator.dir/pisinger_generator.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/julesy/Workspace/travelling-thief-problem/vendor/knpgenerator/pisinger_generator.c -o CMakeFiles/knpgenerator.dir/pisinger_generator.c.s

CMakeFiles/knpgenerator.dir/pisinger_generator.c.o.requires:
.PHONY : CMakeFiles/knpgenerator.dir/pisinger_generator.c.o.requires

CMakeFiles/knpgenerator.dir/pisinger_generator.c.o.provides: CMakeFiles/knpgenerator.dir/pisinger_generator.c.o.requires
	$(MAKE) -f CMakeFiles/knpgenerator.dir/build.make CMakeFiles/knpgenerator.dir/pisinger_generator.c.o.provides.build
.PHONY : CMakeFiles/knpgenerator.dir/pisinger_generator.c.o.provides

CMakeFiles/knpgenerator.dir/pisinger_generator.c.o.provides.build: CMakeFiles/knpgenerator.dir/pisinger_generator.c.o

# Object files for target knpgenerator
knpgenerator_OBJECTS = \
"CMakeFiles/knpgenerator.dir/pisinger_generator.c.o"

# External object files for target knpgenerator
knpgenerator_EXTERNAL_OBJECTS =

libknpgenerator.a: CMakeFiles/knpgenerator.dir/pisinger_generator.c.o
libknpgenerator.a: CMakeFiles/knpgenerator.dir/build.make
libknpgenerator.a: CMakeFiles/knpgenerator.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking C static library libknpgenerator.a"
	$(CMAKE_COMMAND) -P CMakeFiles/knpgenerator.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/knpgenerator.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/knpgenerator.dir/build: libknpgenerator.a
.PHONY : CMakeFiles/knpgenerator.dir/build

CMakeFiles/knpgenerator.dir/requires: CMakeFiles/knpgenerator.dir/pisinger_generator.c.o.requires
.PHONY : CMakeFiles/knpgenerator.dir/requires

CMakeFiles/knpgenerator.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/knpgenerator.dir/cmake_clean.cmake
.PHONY : CMakeFiles/knpgenerator.dir/clean

CMakeFiles/knpgenerator.dir/depend:
	cd /home/julesy/Workspace/travelling-thief-problem/vendor/knpgenerator && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/julesy/Workspace/travelling-thief-problem/vendor/knpgenerator /home/julesy/Workspace/travelling-thief-problem/vendor/knpgenerator /home/julesy/Workspace/travelling-thief-problem/vendor/knpgenerator /home/julesy/Workspace/travelling-thief-problem/vendor/knpgenerator /home/julesy/Workspace/travelling-thief-problem/vendor/knpgenerator/CMakeFiles/knpgenerator.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/knpgenerator.dir/depend

