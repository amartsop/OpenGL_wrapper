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

# Utility rule file for docs.

# Include the progress variables for this target.
include libs/animation/libs/glfw-3.1.2/docs/CMakeFiles/docs.dir/progress.make

libs/animation/libs/glfw-3.1.2/docs/CMakeFiles/docs:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/thanos/Documents/PhDDevelopment/Physics/TissueModelling/CollisionDetection/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating HTML documentation"
	cd /home/thanos/Documents/PhDDevelopment/Physics/TissueModelling/CollisionDetection/build/libs/animation/libs/glfw-3.1.2/docs && /usr/bin/doxygen

docs: libs/animation/libs/glfw-3.1.2/docs/CMakeFiles/docs
docs: libs/animation/libs/glfw-3.1.2/docs/CMakeFiles/docs.dir/build.make

.PHONY : docs

# Rule to build all files generated by this target.
libs/animation/libs/glfw-3.1.2/docs/CMakeFiles/docs.dir/build: docs

.PHONY : libs/animation/libs/glfw-3.1.2/docs/CMakeFiles/docs.dir/build

libs/animation/libs/glfw-3.1.2/docs/CMakeFiles/docs.dir/clean:
	cd /home/thanos/Documents/PhDDevelopment/Physics/TissueModelling/CollisionDetection/build/libs/animation/libs/glfw-3.1.2/docs && $(CMAKE_COMMAND) -P CMakeFiles/docs.dir/cmake_clean.cmake
.PHONY : libs/animation/libs/glfw-3.1.2/docs/CMakeFiles/docs.dir/clean

libs/animation/libs/glfw-3.1.2/docs/CMakeFiles/docs.dir/depend:
	cd /home/thanos/Documents/PhDDevelopment/Physics/TissueModelling/CollisionDetection/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/thanos/Documents/PhDDevelopment/Physics/TissueModelling/CollisionDetection /home/thanos/Documents/PhDDevelopment/Physics/TissueModelling/CollisionDetection/libs/animation/libs/glfw-3.1.2/docs /home/thanos/Documents/PhDDevelopment/Physics/TissueModelling/CollisionDetection/build /home/thanos/Documents/PhDDevelopment/Physics/TissueModelling/CollisionDetection/build/libs/animation/libs/glfw-3.1.2/docs /home/thanos/Documents/PhDDevelopment/Physics/TissueModelling/CollisionDetection/build/libs/animation/libs/glfw-3.1.2/docs/CMakeFiles/docs.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : libs/animation/libs/glfw-3.1.2/docs/CMakeFiles/docs.dir/depend

