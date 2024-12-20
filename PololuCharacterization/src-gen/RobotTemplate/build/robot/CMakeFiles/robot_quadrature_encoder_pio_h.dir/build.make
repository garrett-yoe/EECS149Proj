# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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
CMAKE_SOURCE_DIR = /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/build

# Utility rule file for robot_quadrature_encoder_pio_h.

# Include any custom commands dependencies for this target.
include robot/CMakeFiles/robot_quadrature_encoder_pio_h.dir/compiler_depend.make

# Include the progress variables for this target.
include robot/CMakeFiles/robot_quadrature_encoder_pio_h.dir/progress.make

robot/CMakeFiles/robot_quadrature_encoder_pio_h: robot/quadrature_encoder.pio.h

robot/quadrature_encoder.pio.h: /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/robot-lib/quadrature_encoder.pio
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating quadrature_encoder.pio.h"
	cd /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/build/robot && ../pioasm-install/pioasm/pioasm -o c-sdk -v 0 /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/robot-lib/quadrature_encoder.pio /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/build/robot/quadrature_encoder.pio.h

robot_quadrature_encoder_pio_h: robot/CMakeFiles/robot_quadrature_encoder_pio_h
robot_quadrature_encoder_pio_h: robot/quadrature_encoder.pio.h
robot_quadrature_encoder_pio_h: robot/CMakeFiles/robot_quadrature_encoder_pio_h.dir/build.make
.PHONY : robot_quadrature_encoder_pio_h

# Rule to build all files generated by this target.
robot/CMakeFiles/robot_quadrature_encoder_pio_h.dir/build: robot_quadrature_encoder_pio_h
.PHONY : robot/CMakeFiles/robot_quadrature_encoder_pio_h.dir/build

robot/CMakeFiles/robot_quadrature_encoder_pio_h.dir/clean:
	cd /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/build/robot && $(CMAKE_COMMAND) -P CMakeFiles/robot_quadrature_encoder_pio_h.dir/cmake_clean.cmake
.PHONY : robot/CMakeFiles/robot_quadrature_encoder_pio_h.dir/clean

robot/CMakeFiles/robot_quadrature_encoder_pio_h.dir/depend:
	cd /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/robot-lib /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/build /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/build/robot /mnt/c/Users/gyoe4/EECS149Proj/PololuCharacterization/src-gen/RobotTemplate/build/robot/CMakeFiles/robot_quadrature_encoder_pio_h.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : robot/CMakeFiles/robot_quadrature_encoder_pio_h.dir/depend
