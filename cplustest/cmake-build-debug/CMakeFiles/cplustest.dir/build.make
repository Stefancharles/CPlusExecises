# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.14

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.2\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\vscode\CPlusExecises\cplustest

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\vscode\CPlusExecises\cplustest\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/cplustest.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/cplustest.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cplustest.dir/flags.make

CMakeFiles/cplustest.dir/main.cpp.obj: CMakeFiles/cplustest.dir/flags.make
CMakeFiles/cplustest.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\vscode\CPlusExecises\cplustest\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cplustest.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\cplustest.dir\main.cpp.obj -c E:\vscode\CPlusExecises\cplustest\main.cpp

CMakeFiles/cplustest.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cplustest.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\vscode\CPlusExecises\cplustest\main.cpp > CMakeFiles\cplustest.dir\main.cpp.i

CMakeFiles/cplustest.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cplustest.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\vscode\CPlusExecises\cplustest\main.cpp -o CMakeFiles\cplustest.dir\main.cpp.s

# Object files for target cplustest
cplustest_OBJECTS = \
"CMakeFiles/cplustest.dir/main.cpp.obj"

# External object files for target cplustest
cplustest_EXTERNAL_OBJECTS =

cplustest.exe: CMakeFiles/cplustest.dir/main.cpp.obj
cplustest.exe: CMakeFiles/cplustest.dir/build.make
cplustest.exe: CMakeFiles/cplustest.dir/linklibs.rsp
cplustest.exe: CMakeFiles/cplustest.dir/objects1.rsp
cplustest.exe: CMakeFiles/cplustest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\vscode\CPlusExecises\cplustest\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable cplustest.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\cplustest.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cplustest.dir/build: cplustest.exe

.PHONY : CMakeFiles/cplustest.dir/build

CMakeFiles/cplustest.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\cplustest.dir\cmake_clean.cmake
.PHONY : CMakeFiles/cplustest.dir/clean

CMakeFiles/cplustest.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\vscode\CPlusExecises\cplustest E:\vscode\CPlusExecises\cplustest E:\vscode\CPlusExecises\cplustest\cmake-build-debug E:\vscode\CPlusExecises\cplustest\cmake-build-debug E:\vscode\CPlusExecises\cplustest\cmake-build-debug\CMakeFiles\cplustest.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cplustest.dir/depend

