# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.25

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "E:\software_install_position\JetBrains2023\CLion2023\CLion 2023.1.1\bin\cmake\win\x64\bin\cmake.exe"

# The command to remove a file.
RM = "E:\software_install_position\JetBrains2023\CLion2023\CLion 2023.1.1\bin\cmake\win\x64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\3code\C++\Cprimerplus_code\chapter14\program_exercise\q5

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\3code\C++\Cprimerplus_code\chapter14\program_exercise\q5\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/q5.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/q5.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/q5.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/q5.dir/flags.make

CMakeFiles/q5.dir/emp.cpp.obj: CMakeFiles/q5.dir/flags.make
CMakeFiles/q5.dir/emp.cpp.obj: E:/3code/C++/Cprimerplus_code/chapter14/program_exercise/q5/emp.cpp
CMakeFiles/q5.dir/emp.cpp.obj: CMakeFiles/q5.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\3code\C++\Cprimerplus_code\chapter14\program_exercise\q5\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/q5.dir/emp.cpp.obj"
	D:\VSCode\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/q5.dir/emp.cpp.obj -MF CMakeFiles\q5.dir\emp.cpp.obj.d -o CMakeFiles\q5.dir\emp.cpp.obj -c E:\3code\C++\Cprimerplus_code\chapter14\program_exercise\q5\emp.cpp

CMakeFiles/q5.dir/emp.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/q5.dir/emp.cpp.i"
	D:\VSCode\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\3code\C++\Cprimerplus_code\chapter14\program_exercise\q5\emp.cpp > CMakeFiles\q5.dir\emp.cpp.i

CMakeFiles/q5.dir/emp.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/q5.dir/emp.cpp.s"
	D:\VSCode\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\3code\C++\Cprimerplus_code\chapter14\program_exercise\q5\emp.cpp -o CMakeFiles\q5.dir\emp.cpp.s

CMakeFiles/q5.dir/main.cpp.obj: CMakeFiles/q5.dir/flags.make
CMakeFiles/q5.dir/main.cpp.obj: E:/3code/C++/Cprimerplus_code/chapter14/program_exercise/q5/main.cpp
CMakeFiles/q5.dir/main.cpp.obj: CMakeFiles/q5.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\3code\C++\Cprimerplus_code\chapter14\program_exercise\q5\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/q5.dir/main.cpp.obj"
	D:\VSCode\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/q5.dir/main.cpp.obj -MF CMakeFiles\q5.dir\main.cpp.obj.d -o CMakeFiles\q5.dir\main.cpp.obj -c E:\3code\C++\Cprimerplus_code\chapter14\program_exercise\q5\main.cpp

CMakeFiles/q5.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/q5.dir/main.cpp.i"
	D:\VSCode\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\3code\C++\Cprimerplus_code\chapter14\program_exercise\q5\main.cpp > CMakeFiles\q5.dir\main.cpp.i

CMakeFiles/q5.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/q5.dir/main.cpp.s"
	D:\VSCode\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\3code\C++\Cprimerplus_code\chapter14\program_exercise\q5\main.cpp -o CMakeFiles\q5.dir\main.cpp.s

# Object files for target q5
q5_OBJECTS = \
"CMakeFiles/q5.dir/emp.cpp.obj" \
"CMakeFiles/q5.dir/main.cpp.obj"

# External object files for target q5
q5_EXTERNAL_OBJECTS =

q5.exe: CMakeFiles/q5.dir/emp.cpp.obj
q5.exe: CMakeFiles/q5.dir/main.cpp.obj
q5.exe: CMakeFiles/q5.dir/build.make
q5.exe: CMakeFiles/q5.dir/linkLibs.rsp
q5.exe: CMakeFiles/q5.dir/objects1
q5.exe: CMakeFiles/q5.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\3code\C++\Cprimerplus_code\chapter14\program_exercise\q5\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable q5.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\q5.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/q5.dir/build: q5.exe
.PHONY : CMakeFiles/q5.dir/build

CMakeFiles/q5.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\q5.dir\cmake_clean.cmake
.PHONY : CMakeFiles/q5.dir/clean

CMakeFiles/q5.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\3code\C++\Cprimerplus_code\chapter14\program_exercise\q5 E:\3code\C++\Cprimerplus_code\chapter14\program_exercise\q5 E:\3code\C++\Cprimerplus_code\chapter14\program_exercise\q5\cmake-build-debug E:\3code\C++\Cprimerplus_code\chapter14\program_exercise\q5\cmake-build-debug E:\3code\C++\Cprimerplus_code\chapter14\program_exercise\q5\cmake-build-debug\CMakeFiles\q5.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/q5.dir/depend
