# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/dingshuo/ConnectionPool

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/dingshuo/ConnectionPool/build

# Include any dependencies generated for this target.
include src/CMakeFiles/ConnectionPool.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/ConnectionPool.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/ConnectionPool.dir/flags.make

src/CMakeFiles/ConnectionPool.dir/CommonConnectionPool.cpp.o: src/CMakeFiles/ConnectionPool.dir/flags.make
src/CMakeFiles/ConnectionPool.dir/CommonConnectionPool.cpp.o: ../src/CommonConnectionPool.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dingshuo/ConnectionPool/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/ConnectionPool.dir/CommonConnectionPool.cpp.o"
	cd /home/dingshuo/ConnectionPool/build/src && /usr/bin/g++-8  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ConnectionPool.dir/CommonConnectionPool.cpp.o -c /home/dingshuo/ConnectionPool/src/CommonConnectionPool.cpp

src/CMakeFiles/ConnectionPool.dir/CommonConnectionPool.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ConnectionPool.dir/CommonConnectionPool.cpp.i"
	cd /home/dingshuo/ConnectionPool/build/src && /usr/bin/g++-8 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dingshuo/ConnectionPool/src/CommonConnectionPool.cpp > CMakeFiles/ConnectionPool.dir/CommonConnectionPool.cpp.i

src/CMakeFiles/ConnectionPool.dir/CommonConnectionPool.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ConnectionPool.dir/CommonConnectionPool.cpp.s"
	cd /home/dingshuo/ConnectionPool/build/src && /usr/bin/g++-8 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dingshuo/ConnectionPool/src/CommonConnectionPool.cpp -o CMakeFiles/ConnectionPool.dir/CommonConnectionPool.cpp.s

src/CMakeFiles/ConnectionPool.dir/Connection.cpp.o: src/CMakeFiles/ConnectionPool.dir/flags.make
src/CMakeFiles/ConnectionPool.dir/Connection.cpp.o: ../src/Connection.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dingshuo/ConnectionPool/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/CMakeFiles/ConnectionPool.dir/Connection.cpp.o"
	cd /home/dingshuo/ConnectionPool/build/src && /usr/bin/g++-8  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ConnectionPool.dir/Connection.cpp.o -c /home/dingshuo/ConnectionPool/src/Connection.cpp

src/CMakeFiles/ConnectionPool.dir/Connection.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ConnectionPool.dir/Connection.cpp.i"
	cd /home/dingshuo/ConnectionPool/build/src && /usr/bin/g++-8 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dingshuo/ConnectionPool/src/Connection.cpp > CMakeFiles/ConnectionPool.dir/Connection.cpp.i

src/CMakeFiles/ConnectionPool.dir/Connection.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ConnectionPool.dir/Connection.cpp.s"
	cd /home/dingshuo/ConnectionPool/build/src && /usr/bin/g++-8 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dingshuo/ConnectionPool/src/Connection.cpp -o CMakeFiles/ConnectionPool.dir/Connection.cpp.s

src/CMakeFiles/ConnectionPool.dir/main.cpp.o: src/CMakeFiles/ConnectionPool.dir/flags.make
src/CMakeFiles/ConnectionPool.dir/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dingshuo/ConnectionPool/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/CMakeFiles/ConnectionPool.dir/main.cpp.o"
	cd /home/dingshuo/ConnectionPool/build/src && /usr/bin/g++-8  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ConnectionPool.dir/main.cpp.o -c /home/dingshuo/ConnectionPool/src/main.cpp

src/CMakeFiles/ConnectionPool.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ConnectionPool.dir/main.cpp.i"
	cd /home/dingshuo/ConnectionPool/build/src && /usr/bin/g++-8 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dingshuo/ConnectionPool/src/main.cpp > CMakeFiles/ConnectionPool.dir/main.cpp.i

src/CMakeFiles/ConnectionPool.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ConnectionPool.dir/main.cpp.s"
	cd /home/dingshuo/ConnectionPool/build/src && /usr/bin/g++-8 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dingshuo/ConnectionPool/src/main.cpp -o CMakeFiles/ConnectionPool.dir/main.cpp.s

src/CMakeFiles/ConnectionPool.dir/pch.cpp.o: src/CMakeFiles/ConnectionPool.dir/flags.make
src/CMakeFiles/ConnectionPool.dir/pch.cpp.o: ../src/pch.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dingshuo/ConnectionPool/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/CMakeFiles/ConnectionPool.dir/pch.cpp.o"
	cd /home/dingshuo/ConnectionPool/build/src && /usr/bin/g++-8  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ConnectionPool.dir/pch.cpp.o -c /home/dingshuo/ConnectionPool/src/pch.cpp

src/CMakeFiles/ConnectionPool.dir/pch.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ConnectionPool.dir/pch.cpp.i"
	cd /home/dingshuo/ConnectionPool/build/src && /usr/bin/g++-8 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dingshuo/ConnectionPool/src/pch.cpp > CMakeFiles/ConnectionPool.dir/pch.cpp.i

src/CMakeFiles/ConnectionPool.dir/pch.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ConnectionPool.dir/pch.cpp.s"
	cd /home/dingshuo/ConnectionPool/build/src && /usr/bin/g++-8 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dingshuo/ConnectionPool/src/pch.cpp -o CMakeFiles/ConnectionPool.dir/pch.cpp.s

# Object files for target ConnectionPool
ConnectionPool_OBJECTS = \
"CMakeFiles/ConnectionPool.dir/CommonConnectionPool.cpp.o" \
"CMakeFiles/ConnectionPool.dir/Connection.cpp.o" \
"CMakeFiles/ConnectionPool.dir/main.cpp.o" \
"CMakeFiles/ConnectionPool.dir/pch.cpp.o"

# External object files for target ConnectionPool
ConnectionPool_EXTERNAL_OBJECTS =

../bin/ConnectionPool: src/CMakeFiles/ConnectionPool.dir/CommonConnectionPool.cpp.o
../bin/ConnectionPool: src/CMakeFiles/ConnectionPool.dir/Connection.cpp.o
../bin/ConnectionPool: src/CMakeFiles/ConnectionPool.dir/main.cpp.o
../bin/ConnectionPool: src/CMakeFiles/ConnectionPool.dir/pch.cpp.o
../bin/ConnectionPool: src/CMakeFiles/ConnectionPool.dir/build.make
../bin/ConnectionPool: src/CMakeFiles/ConnectionPool.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/dingshuo/ConnectionPool/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable ../../bin/ConnectionPool"
	cd /home/dingshuo/ConnectionPool/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ConnectionPool.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/ConnectionPool.dir/build: ../bin/ConnectionPool

.PHONY : src/CMakeFiles/ConnectionPool.dir/build

src/CMakeFiles/ConnectionPool.dir/clean:
	cd /home/dingshuo/ConnectionPool/build/src && $(CMAKE_COMMAND) -P CMakeFiles/ConnectionPool.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/ConnectionPool.dir/clean

src/CMakeFiles/ConnectionPool.dir/depend:
	cd /home/dingshuo/ConnectionPool/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/dingshuo/ConnectionPool /home/dingshuo/ConnectionPool/src /home/dingshuo/ConnectionPool/build /home/dingshuo/ConnectionPool/build/src /home/dingshuo/ConnectionPool/build/src/CMakeFiles/ConnectionPool.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/ConnectionPool.dir/depend

