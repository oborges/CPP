# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.20.2/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.20.2/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/olavo/Desktop/CPP/rest

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/olavo/Desktop/CPP/rest/build

# Include any dependencies generated for this target.
include CMakeFiles/cpprestserver.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/cpprestserver.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/cpprestserver.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cpprestserver.dir/flags.make

CMakeFiles/cpprestserver.dir/cpprestserver.cc.o: CMakeFiles/cpprestserver.dir/flags.make
CMakeFiles/cpprestserver.dir/cpprestserver.cc.o: ../cpprestserver.cc
CMakeFiles/cpprestserver.dir/cpprestserver.cc.o: CMakeFiles/cpprestserver.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/olavo/Desktop/CPP/rest/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cpprestserver.dir/cpprestserver.cc.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/cpprestserver.dir/cpprestserver.cc.o -MF CMakeFiles/cpprestserver.dir/cpprestserver.cc.o.d -o CMakeFiles/cpprestserver.dir/cpprestserver.cc.o -c /Users/olavo/Desktop/CPP/rest/cpprestserver.cc

CMakeFiles/cpprestserver.dir/cpprestserver.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cpprestserver.dir/cpprestserver.cc.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/olavo/Desktop/CPP/rest/cpprestserver.cc > CMakeFiles/cpprestserver.dir/cpprestserver.cc.i

CMakeFiles/cpprestserver.dir/cpprestserver.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cpprestserver.dir/cpprestserver.cc.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/olavo/Desktop/CPP/rest/cpprestserver.cc -o CMakeFiles/cpprestserver.dir/cpprestserver.cc.s

# Object files for target cpprestserver
cpprestserver_OBJECTS = \
"CMakeFiles/cpprestserver.dir/cpprestserver.cc.o"

# External object files for target cpprestserver
cpprestserver_EXTERNAL_OBJECTS =

cpprestserver: CMakeFiles/cpprestserver.dir/cpprestserver.cc.o
cpprestserver: CMakeFiles/cpprestserver.dir/build.make
cpprestserver: /usr/local/lib/libserved.dylib
cpprestserver: CMakeFiles/cpprestserver.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/olavo/Desktop/CPP/rest/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable cpprestserver"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cpprestserver.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cpprestserver.dir/build: cpprestserver
.PHONY : CMakeFiles/cpprestserver.dir/build

CMakeFiles/cpprestserver.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cpprestserver.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cpprestserver.dir/clean

CMakeFiles/cpprestserver.dir/depend:
	cd /Users/olavo/Desktop/CPP/rest/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/olavo/Desktop/CPP/rest /Users/olavo/Desktop/CPP/rest /Users/olavo/Desktop/CPP/rest/build /Users/olavo/Desktop/CPP/rest/build /Users/olavo/Desktop/CPP/rest/build/CMakeFiles/cpprestserver.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cpprestserver.dir/depend

