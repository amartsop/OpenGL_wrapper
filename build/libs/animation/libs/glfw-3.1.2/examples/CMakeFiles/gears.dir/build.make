# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

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
CMAKE_COMMAND = /opt/cmake-3.18.4-Linux-x86_64/bin/cmake

# The command to remove a file.
RM = /opt/cmake-3.18.4-Linux-x86_64/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/thanos/Documents/PhDDevelopment/Physics/TissueModelling/CollisionDetection

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/thanos/Documents/PhDDevelopment/Physics/TissueModelling/CollisionDetection/build

# Include any dependencies generated for this target.
include libs/animation/libs/glfw-3.1.2/examples/CMakeFiles/gears.dir/depend.make

# Include the progress variables for this target.
include libs/animation/libs/glfw-3.1.2/examples/CMakeFiles/gears.dir/progress.make

# Include the compile flags for this target's objects.
include libs/animation/libs/glfw-3.1.2/examples/CMakeFiles/gears.dir/flags.make

libs/animation/libs/glfw-3.1.2/examples/CMakeFiles/gears.dir/gears.c.o: libs/animation/libs/glfw-3.1.2/examples/CMakeFiles/gears.dir/flags.make
libs/animation/libs/glfw-3.1.2/examples/CMakeFiles/gears.dir/gears.c.o: ../libs/animation/libs/glfw-3.1.2/examples/gears.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/thanos/Documents/PhDDevelopment/Physics/TissueModelling/CollisionDetection/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object libs/animation/libs/glfw-3.1.2/examples/CMakeFiles/gears.dir/gears.c.o"
	cd /home/thanos/Documents/PhDDevelopment/Physics/TissueModelling/CollisionDetection/build/libs/animation/libs/glfw-3.1.2/examples && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/gears.dir/gears.c.o -c /home/thanos/Documents/PhDDevelopment/Physics/TissueModelling/CollisionDetection/libs/animation/libs/glfw-3.1.2/examples/gears.c

libs/animation/libs/glfw-3.1.2/examples/CMakeFiles/gears.dir/gears.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/gears.dir/gears.c.i"
	cd /home/thanos/Documents/PhDDevelopment/Physics/TissueModelling/CollisionDetection/build/libs/animation/libs/glfw-3.1.2/examples && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/thanos/Documents/PhDDevelopment/Physics/TissueModelling/CollisionDetection/libs/animation/libs/glfw-3.1.2/examples/gears.c > CMakeFiles/gears.dir/gears.c.i

libs/animation/libs/glfw-3.1.2/examples/CMakeFiles/gears.dir/gears.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/gears.dir/gears.c.s"
	cd /home/thanos/Documents/PhDDevelopment/Physics/TissueModelling/CollisionDetection/build/libs/animation/libs/glfw-3.1.2/examples && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/thanos/Documents/PhDDevelopment/Physics/TissueModelling/CollisionDetection/libs/animation/libs/glfw-3.1.2/examples/gears.c -o CMakeFiles/gears.dir/gears.c.s

# Object files for target gears
gears_OBJECTS = \
"CMakeFiles/gears.dir/gears.c.o"

# External object files for target gears
gears_EXTERNAL_OBJECTS =

libs/animation/libs/glfw-3.1.2/examples/gears: libs/animation/libs/glfw-3.1.2/examples/CMakeFiles/gears.dir/gears.c.o
libs/animation/libs/glfw-3.1.2/examples/gears: libs/animation/libs/glfw-3.1.2/examples/CMakeFiles/gears.dir/build.make
libs/animation/libs/glfw-3.1.2/examples/gears: libs/animation/libs/glfw-3.1.2/src/libglfw3.a
libs/animation/libs/glfw-3.1.2/examples/gears: /usr/lib/x86_64-linux-gnu/librt.so
libs/animation/libs/glfw-3.1.2/examples/gears: /usr/lib/x86_64-linux-gnu/libm.so
libs/animation/libs/glfw-3.1.2/examples/gears: /usr/lib/x86_64-linux-gnu/libX11.so
libs/animation/libs/glfw-3.1.2/examples/gears: /usr/lib/x86_64-linux-gnu/libXrandr.so
libs/animation/libs/glfw-3.1.2/examples/gears: /usr/lib/x86_64-linux-gnu/libXinerama.so
libs/animation/libs/glfw-3.1.2/examples/gears: /usr/lib/x86_64-linux-gnu/libXi.so
libs/animation/libs/glfw-3.1.2/examples/gears: /usr/lib/x86_64-linux-gnu/libXxf86vm.so
libs/animation/libs/glfw-3.1.2/examples/gears: /usr/lib/x86_64-linux-gnu/libXcursor.so
libs/animation/libs/glfw-3.1.2/examples/gears: /usr/lib/x86_64-linux-gnu/libGL.so
libs/animation/libs/glfw-3.1.2/examples/gears: libs/animation/libs/glfw-3.1.2/examples/CMakeFiles/gears.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/thanos/Documents/PhDDevelopment/Physics/TissueModelling/CollisionDetection/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable gears"
	cd /home/thanos/Documents/PhDDevelopment/Physics/TissueModelling/CollisionDetection/build/libs/animation/libs/glfw-3.1.2/examples && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/gears.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
libs/animation/libs/glfw-3.1.2/examples/CMakeFiles/gears.dir/build: libs/animation/libs/glfw-3.1.2/examples/gears

.PHONY : libs/animation/libs/glfw-3.1.2/examples/CMakeFiles/gears.dir/build

libs/animation/libs/glfw-3.1.2/examples/CMakeFiles/gears.dir/clean:
	cd /home/thanos/Documents/PhDDevelopment/Physics/TissueModelling/CollisionDetection/build/libs/animation/libs/glfw-3.1.2/examples && $(CMAKE_COMMAND) -P CMakeFiles/gears.dir/cmake_clean.cmake
.PHONY : libs/animation/libs/glfw-3.1.2/examples/CMakeFiles/gears.dir/clean

libs/animation/libs/glfw-3.1.2/examples/CMakeFiles/gears.dir/depend:
	cd /home/thanos/Documents/PhDDevelopment/Physics/TissueModelling/CollisionDetection/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/thanos/Documents/PhDDevelopment/Physics/TissueModelling/CollisionDetection /home/thanos/Documents/PhDDevelopment/Physics/TissueModelling/CollisionDetection/libs/animation/libs/glfw-3.1.2/examples /home/thanos/Documents/PhDDevelopment/Physics/TissueModelling/CollisionDetection/build /home/thanos/Documents/PhDDevelopment/Physics/TissueModelling/CollisionDetection/build/libs/animation/libs/glfw-3.1.2/examples /home/thanos/Documents/PhDDevelopment/Physics/TissueModelling/CollisionDetection/build/libs/animation/libs/glfw-3.1.2/examples/CMakeFiles/gears.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : libs/animation/libs/glfw-3.1.2/examples/CMakeFiles/gears.dir/depend

