# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\user\CLionProjects\new-projects

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\user\CLionProjects\new-projects\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/new-projects.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/new-projects.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/new-projects.dir/flags.make

CMakeFiles/new-projects.dir/main.c.obj: CMakeFiles/new-projects.dir/flags.make
CMakeFiles/new-projects.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\user\CLionProjects\new-projects\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/new-projects.dir/main.c.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\new-projects.dir\main.c.obj -c C:\Users\user\CLionProjects\new-projects\main.c

CMakeFiles/new-projects.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/new-projects.dir/main.c.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\user\CLionProjects\new-projects\main.c > CMakeFiles\new-projects.dir\main.c.i

CMakeFiles/new-projects.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/new-projects.dir/main.c.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\user\CLionProjects\new-projects\main.c -o CMakeFiles\new-projects.dir\main.c.s

# Object files for target new-projects
new__projects_OBJECTS = \
"CMakeFiles/new-projects.dir/main.c.obj"

# External object files for target new-projects
new__projects_EXTERNAL_OBJECTS =

new-projects.exe: CMakeFiles/new-projects.dir/main.c.obj
new-projects.exe: CMakeFiles/new-projects.dir/build.make
new-projects.exe: libs/data_structures/libdata_structures.a
new-projects.exe: libs/data_structures/string/libstring.a
new-projects.exe: CMakeFiles/new-projects.dir/linklibs.rsp
new-projects.exe: CMakeFiles/new-projects.dir/objects1.rsp
new-projects.exe: CMakeFiles/new-projects.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\user\CLionProjects\new-projects\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable new-projects.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\new-projects.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/new-projects.dir/build: new-projects.exe
.PHONY : CMakeFiles/new-projects.dir/build

CMakeFiles/new-projects.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\new-projects.dir\cmake_clean.cmake
.PHONY : CMakeFiles/new-projects.dir/clean

CMakeFiles/new-projects.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\user\CLionProjects\new-projects C:\Users\user\CLionProjects\new-projects C:\Users\user\CLionProjects\new-projects\cmake-build-debug C:\Users\user\CLionProjects\new-projects\cmake-build-debug C:\Users\user\CLionProjects\new-projects\cmake-build-debug\CMakeFiles\new-projects.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/new-projects.dir/depend

