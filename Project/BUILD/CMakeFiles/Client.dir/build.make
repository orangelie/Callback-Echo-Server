# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.21

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
CMAKE_COMMAND = W:\cmake-3.21.2\bin\cmake.exe

# The command to remove a file.
RM = W:\cmake-3.21.2\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "W:\Github\IOCP-Echo (Callback)\Project"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "W:\Github\IOCP-Echo (Callback)\Project\BUILD"

# Include any dependencies generated for this target.
include CMakeFiles/Client.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Client.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Client.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Client.dir/flags.make

CMakeFiles/Client.dir/Source/Client.cpp.obj: CMakeFiles/Client.dir/flags.make
CMakeFiles/Client.dir/Source/Client.cpp.obj: ../Source/Client.cpp
CMakeFiles/Client.dir/Source/Client.cpp.obj: CMakeFiles/Client.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="W:\Github\IOCP-Echo (Callback)\Project\BUILD\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Client.dir/Source/Client.cpp.obj"
	W:\Compilers\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Client.dir/Source/Client.cpp.obj -MF CMakeFiles\Client.dir\Source\Client.cpp.obj.d -o CMakeFiles\Client.dir\Source\Client.cpp.obj -c "W:\Github\IOCP-Echo (Callback)\Project\Source\Client.cpp"

CMakeFiles/Client.dir/Source/Client.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Client.dir/Source/Client.cpp.i"
	W:\Compilers\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "W:\Github\IOCP-Echo (Callback)\Project\Source\Client.cpp" > CMakeFiles\Client.dir\Source\Client.cpp.i

CMakeFiles/Client.dir/Source/Client.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Client.dir/Source/Client.cpp.s"
	W:\Compilers\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "W:\Github\IOCP-Echo (Callback)\Project\Source\Client.cpp" -o CMakeFiles\Client.dir\Source\Client.cpp.s

CMakeFiles/Client.dir/Source/IOCPClient.cpp.obj: CMakeFiles/Client.dir/flags.make
CMakeFiles/Client.dir/Source/IOCPClient.cpp.obj: ../Source/IOCPClient.cpp
CMakeFiles/Client.dir/Source/IOCPClient.cpp.obj: CMakeFiles/Client.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="W:\Github\IOCP-Echo (Callback)\Project\BUILD\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Client.dir/Source/IOCPClient.cpp.obj"
	W:\Compilers\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Client.dir/Source/IOCPClient.cpp.obj -MF CMakeFiles\Client.dir\Source\IOCPClient.cpp.obj.d -o CMakeFiles\Client.dir\Source\IOCPClient.cpp.obj -c "W:\Github\IOCP-Echo (Callback)\Project\Source\IOCPClient.cpp"

CMakeFiles/Client.dir/Source/IOCPClient.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Client.dir/Source/IOCPClient.cpp.i"
	W:\Compilers\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "W:\Github\IOCP-Echo (Callback)\Project\Source\IOCPClient.cpp" > CMakeFiles\Client.dir\Source\IOCPClient.cpp.i

CMakeFiles/Client.dir/Source/IOCPClient.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Client.dir/Source/IOCPClient.cpp.s"
	W:\Compilers\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "W:\Github\IOCP-Echo (Callback)\Project\Source\IOCPClient.cpp" -o CMakeFiles\Client.dir\Source\IOCPClient.cpp.s

CMakeFiles/Client.dir/Source/IOCPCrash.cpp.obj: CMakeFiles/Client.dir/flags.make
CMakeFiles/Client.dir/Source/IOCPCrash.cpp.obj: ../Source/IOCPCrash.cpp
CMakeFiles/Client.dir/Source/IOCPCrash.cpp.obj: CMakeFiles/Client.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="W:\Github\IOCP-Echo (Callback)\Project\BUILD\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Client.dir/Source/IOCPCrash.cpp.obj"
	W:\Compilers\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Client.dir/Source/IOCPCrash.cpp.obj -MF CMakeFiles\Client.dir\Source\IOCPCrash.cpp.obj.d -o CMakeFiles\Client.dir\Source\IOCPCrash.cpp.obj -c "W:\Github\IOCP-Echo (Callback)\Project\Source\IOCPCrash.cpp"

CMakeFiles/Client.dir/Source/IOCPCrash.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Client.dir/Source/IOCPCrash.cpp.i"
	W:\Compilers\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "W:\Github\IOCP-Echo (Callback)\Project\Source\IOCPCrash.cpp" > CMakeFiles\Client.dir\Source\IOCPCrash.cpp.i

CMakeFiles/Client.dir/Source/IOCPCrash.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Client.dir/Source/IOCPCrash.cpp.s"
	W:\Compilers\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "W:\Github\IOCP-Echo (Callback)\Project\Source\IOCPCrash.cpp" -o CMakeFiles\Client.dir\Source\IOCPCrash.cpp.s

# Object files for target Client
Client_OBJECTS = \
"CMakeFiles/Client.dir/Source/Client.cpp.obj" \
"CMakeFiles/Client.dir/Source/IOCPClient.cpp.obj" \
"CMakeFiles/Client.dir/Source/IOCPCrash.cpp.obj"

# External object files for target Client
Client_EXTERNAL_OBJECTS =

Client.exe: CMakeFiles/Client.dir/Source/Client.cpp.obj
Client.exe: CMakeFiles/Client.dir/Source/IOCPClient.cpp.obj
Client.exe: CMakeFiles/Client.dir/Source/IOCPCrash.cpp.obj
Client.exe: CMakeFiles/Client.dir/build.make
Client.exe: CMakeFiles/Client.dir/linklibs.rsp
Client.exe: CMakeFiles/Client.dir/objects1.rsp
Client.exe: CMakeFiles/Client.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="W:\Github\IOCP-Echo (Callback)\Project\BUILD\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable Client.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Client.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Client.dir/build: Client.exe
.PHONY : CMakeFiles/Client.dir/build

CMakeFiles/Client.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Client.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Client.dir/clean

CMakeFiles/Client.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "W:\Github\IOCP-Echo (Callback)\Project" "W:\Github\IOCP-Echo (Callback)\Project" "W:\Github\IOCP-Echo (Callback)\Project\BUILD" "W:\Github\IOCP-Echo (Callback)\Project\BUILD" "W:\Github\IOCP-Echo (Callback)\Project\BUILD\CMakeFiles\Client.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Client.dir/depend

