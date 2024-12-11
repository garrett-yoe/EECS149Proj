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
CMAKE_SOURCE_DIR = /home/foobar/EECS149Proj/PololuCharacterization/src-gen/ESPDrive

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/foobar/EECS149Proj/PololuCharacterization/src-gen/ESPDrive/build

# Utility rule file for robot_quadrature_encoder_pio_h.

# Include any custom commands dependencies for this target.
include robot/CMakeFiles/robot_quadrature_encoder_pio_h.dir/compiler_depend.make

# Include the progress variables for this target.
include robot/CMakeFiles/robot_quadrature_encoder_pio_h.dir/progress.make

robot/CMakeFiles/robot_quadrature_encoder_pio_h: robot/quadrature_encoder.pio.h

robot/quadrature_encoder.pio.h: ../robot-lib/quadrature_encoder.pio
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/foobar/EECS149Proj/PololuCharacterization/src-gen/ESPDrive/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating quadrature_encoder.pio.h"
	cd /home/foobar/EECS149Proj/PololuCharacterization/src-gen/ESPDrive/build/robot && ../pioasm/pioasm -o c-sdk /home/foobar/EECS149Proj/PololuCharacterization/src-gen/ESPDrive/robot-lib/quadrature_encoder.pio /home/foobar/EECS149Proj/PololuCharacterization/src-gen/ESPDrive/build/robot/quadrature_encoder.pio.h

robot_quadrature_encoder_pio_h: robot/CMakeFiles/robot_quadrature_encoder_pio_h
robot_quadrature_encoder_pio_h: robot/quadrature_encoder.pio.h
robot_quadrature_encoder_pio_h: robot/CMakeFiles/robot_quadrature_encoder_pio_h.dir/build.make
.PHONY : robot_quadrature_encoder_pio_h

# Rule to build all files generated by this target.
robot/CMakeFiles/robot_quadrature_encoder_pio_h.dir/build: robot_quadrature_encoder_pio_h
.PHONY : robot/CMakeFiles/robot_quadrature_encoder_pio_h.dir/build

robot/CMakeFiles/robot_quadrature_encoder_pio_h.dir/clean:
	cd /home/foobar/EECS149Proj/PololuCharacterization/src-gen/ESPDrive/build/robot && $(CMAKE_COMMAND) -P CMakeFiles/robot_quadrature_encoder_pio_h.dir/cmake_clean.cmake
.PHONY : robot/CMakeFiles/robot_quadrature_encoder_pio_h.dir/clean

robot/CMakeFiles/robot_quadrature_encoder_pio_h.dir/depend:
	cd /home/foobar/EECS149Proj/PololuCharacterization/src-gen/ESPDrive/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/foobar/EECS149Proj/PololuCharacterization/src-gen/ESPDrive /home/foobar/EECS149Proj/PololuCharacterization/src-gen/ESPDrive/robot-lib /home/foobar/EECS149Proj/PololuCharacterization/src-gen/ESPDrive/build /home/foobar/EECS149Proj/PololuCharacterization/src-gen/ESPDrive/build/robot /home/foobar/EECS149Proj/PololuCharacterization/src-gen/ESPDrive/build/robot/CMakeFiles/robot_quadrature_encoder_pio_h.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : robot/CMakeFiles/robot_quadrature_encoder_pio_h.dir/depend

