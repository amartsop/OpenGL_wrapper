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
include libs/animation/libs/glfw-3.1.2/tests/CMakeFiles/windows.dir/depend.make

# Include the progress variables for this target.
include libs/animation/libs/glfw-3.1.2/tests/CMakeFiles/windows.dir/progress.make

# Include the compile flags for this target's objects.
include libs/animation/libs/glfw-3.1.2/tests/CMakeFiles/windows.dir/flags.make

libs/animation/libs/glfw-3.1.2/tests/CMakeFiles/windows.dir/windows.c.o: libs/animation/libs/glfw-3.1.2/tests/CMakeFiles/windows.dir/flags.make
libs/animation/libs/glfw-3.1.2/tests/CMakeFiles/windows.dir/windows.c.o: ../libs/animation/libs/glfw-3.1.2/tests/windows.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/thanos/Documents/PhDDevelopment/Physics/TissueModelling/CollisionDetection/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object libs/animation/libs/glfw-3.1.2/tests/CMakeFiles/windows.dir/windows.c.o"
	cd /home/thanos/Documents/PhDDevelopment/Physics/TissueModelling/CollisionDetection/build/libs/animation/libs/glfw-3.1.2/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/windows.dir/windows.c.o -c /home/thanos/Documents/PhDDevelopment/Physics/TissueModelling/CollisionDetection/libs/animation/libs/glfw-3.1.2/tests/windows.c

libs/animation/libs/glfw-3.1.2/tests/CMakeFiles/windows.dir/windows.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/windows.dir/windows.c.i"
	cd /home/thanos/Documents/PhDDevelopment/Physics/TissueModelling/CollisionDetection/build/libs/animation/libs/glfw-3.1.2/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/thanos/Documents/PhDDevelopment/Physics/TissueModelling/CollisionDetection/libs/animation/libs/glfw-3.1.2/tests/windows.c > CMakeFiles/windows.dir/windows.c.i

libs/animation/libs/glfw-3.1.2/tests/CMakeFiles/windows.dir/windows.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/windows.dir/windows.c.s"
	cd /home/thanos/Documents/PhDDevelopment/Physics/TissueModelling/CollisionDetection/build/libs/animation/libs/glfw-3.1.2/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/thanos/Documents/PhDDevelopment/Physics/TissueModelling/CollisionDetection/libs/animation/libs/glfw-3.1.2/tests/windows.c -o CMakeFiles/windows.dir/windows.c.s

# Object files for target windows
windows_OBJECTS = \
"CMakeFiles/windows.dir/windows.c.o"

# External object files for target windows
windows_EXTERNAL_OBJECTS =

libs/animation/libs/glfw-3.1.2/tests/windows: libs/animation/libs/glfw-3.1.2/tests/CMakeFiles/windows.dir/windows.c.o
libs/animation/libs/glfw-3.1.2/tests/windows: libs/animation/libs/glfw-3.1.2/tests/CMakeFiles/windows.dir/build.make
libs/animation/libs/glfw-3.1.2/tests/windows: libs/animation/libs/glfw-3.1.2/src/libglfw3.a
libs/animation/libs/glfw-3.1.2/tests/windows: /usr/lib/x86_64-linux-gnu/librt.so
libs/animation/libs/glfw-3.1.2/tests/windows: /usr/lib/x86_64-linux-gnu/libm.so
libs/animation/libs/glfw-3.1.2/tests/windows: /usr/lib/x86_64-linux-gnu/libX11.so
libs/animation/libs/glfw-3.1.2/tests/windows: /usr/lib/x86_64-linux-gnu/libXrandr.so
libs/animation/libs/glfw-3.1.2/tests/windows: /usr/lib/x86_64-linux-gnu/libXinerama.so
libs/animation/libs/glfw-3.1.2/tests/windows: /usr/lib/x86_64-linux-gnu/libXi.so
libs/animation/libs/glfw-3.1.2/tests/windows: /usr/lib/x86_64-linux-gnu/libXxf86vm.so
libs/animation/libs/glfw-3.1.2/tests/windows: /usr/lib/x86_64-linux-gnu/libXcursor.so
libs/animation/libs/glfw-3.1.2/tests/windows: /usr/lib/x86_64-linux-gnu/libGL.so
libs/animation/libs/glfw-3.1.2/tests/windows: libs/animation/libs/glfw-3.1.2/tests/CMakeFiles/windows.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/thanos/Documents/PhDDevelopment/Physics/TissueModelling/CollisionDetection/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable windows"
	cd /home/thanos/Documents/PhDDevelopment/Physics/TissueModelling/CollisionDetection/build/libs/animation/libs/glfw-3.1.2/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/windows.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
libs/animation/libs/glfw-3.1.2/tests/CMakeFiles/windows.dir/build: libs/animation/libs/glfw-3.1.2/tests/windows

.PHONY : libs/animation/libs/glfw-3.1.2/tests/CMakeFiles/windows.dir/build

libs/animation/libs/glfw-3.1.2/tests/CMakeFiles/windows.dir/clean:
	cd /home/thanos/Documents/PhDDevelopment/Physics/TissueModelling/CollisionDetection/build/libs/animation/libs/glfw-3.1.2/tests && $(CMAKE_COMMAND) -P CMakeFiles/windows.dir/cmake_clean.cmake
.PHONY : libs/animation/libs/glfw-3.1.2/tests/CMakeFiles/windows.dir/clean

libs/animation/libs/glfw-3.1.2/tests/CMakeFiles/windows.dir/depend:
	cd /home/thanos/Documents/PhDDevelopment/Physics/TissueModelling/CollisionDetection/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/thanos/Documents/PhDDevelopment/Physics/TissueModelling/CollisionDetection /home/thanos/Documents/PhDDevelopment/Physics/TissueModelling/CollisionDetection/libs/animation/libs/glfw-3.1.2/tests /home/thanos/Documents/PhDDevelopment/Physics/TissueModelling/CollisionDetection/build /home/thanos/Documents/PhDDevelopment/Physics/TissueModelling/CollisionDetection/build/libs/animation/libs/glfw-3.1.2/tests /home/thanos/Documents/PhDDevelopment/Physics/TissueModelling/CollisionDetection/build/libs/animation/libs/glfw-3.1.2/tests/CMakeFiles/windows.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : libs/animation/libs/glfw-3.1.2/tests/CMakeFiles/windows.dir/depend

