# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_SOURCE_DIR = /home/fn/graphical_GreenHouse

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/fn/graphical_GreenHouse/build

# Include any dependencies generated for this target.
include CMakeFiles/app.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/app.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/app.dir/flags.make

CMakeFiles/app.dir/src/main.cpp.o: CMakeFiles/app.dir/flags.make
CMakeFiles/app.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fn/graphical_GreenHouse/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/app.dir/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/app.dir/src/main.cpp.o -c /home/fn/graphical_GreenHouse/src/main.cpp

CMakeFiles/app.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/app.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fn/graphical_GreenHouse/src/main.cpp > CMakeFiles/app.dir/src/main.cpp.i

CMakeFiles/app.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/app.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fn/graphical_GreenHouse/src/main.cpp -o CMakeFiles/app.dir/src/main.cpp.s

CMakeFiles/app.dir/src/main.cpp.o.requires:

.PHONY : CMakeFiles/app.dir/src/main.cpp.o.requires

CMakeFiles/app.dir/src/main.cpp.o.provides: CMakeFiles/app.dir/src/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/app.dir/build.make CMakeFiles/app.dir/src/main.cpp.o.provides.build
.PHONY : CMakeFiles/app.dir/src/main.cpp.o.provides

CMakeFiles/app.dir/src/main.cpp.o.provides.build: CMakeFiles/app.dir/src/main.cpp.o


CMakeFiles/app.dir/src/flower.cpp.o: CMakeFiles/app.dir/flags.make
CMakeFiles/app.dir/src/flower.cpp.o: ../src/flower.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fn/graphical_GreenHouse/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/app.dir/src/flower.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/app.dir/src/flower.cpp.o -c /home/fn/graphical_GreenHouse/src/flower.cpp

CMakeFiles/app.dir/src/flower.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/app.dir/src/flower.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fn/graphical_GreenHouse/src/flower.cpp > CMakeFiles/app.dir/src/flower.cpp.i

CMakeFiles/app.dir/src/flower.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/app.dir/src/flower.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fn/graphical_GreenHouse/src/flower.cpp -o CMakeFiles/app.dir/src/flower.cpp.s

CMakeFiles/app.dir/src/flower.cpp.o.requires:

.PHONY : CMakeFiles/app.dir/src/flower.cpp.o.requires

CMakeFiles/app.dir/src/flower.cpp.o.provides: CMakeFiles/app.dir/src/flower.cpp.o.requires
	$(MAKE) -f CMakeFiles/app.dir/build.make CMakeFiles/app.dir/src/flower.cpp.o.provides.build
.PHONY : CMakeFiles/app.dir/src/flower.cpp.o.provides

CMakeFiles/app.dir/src/flower.cpp.o.provides.build: CMakeFiles/app.dir/src/flower.cpp.o


CMakeFiles/app.dir/src/ordinaryflower.cpp.o: CMakeFiles/app.dir/flags.make
CMakeFiles/app.dir/src/ordinaryflower.cpp.o: ../src/ordinaryflower.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fn/graphical_GreenHouse/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/app.dir/src/ordinaryflower.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/app.dir/src/ordinaryflower.cpp.o -c /home/fn/graphical_GreenHouse/src/ordinaryflower.cpp

CMakeFiles/app.dir/src/ordinaryflower.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/app.dir/src/ordinaryflower.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fn/graphical_GreenHouse/src/ordinaryflower.cpp > CMakeFiles/app.dir/src/ordinaryflower.cpp.i

CMakeFiles/app.dir/src/ordinaryflower.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/app.dir/src/ordinaryflower.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fn/graphical_GreenHouse/src/ordinaryflower.cpp -o CMakeFiles/app.dir/src/ordinaryflower.cpp.s

CMakeFiles/app.dir/src/ordinaryflower.cpp.o.requires:

.PHONY : CMakeFiles/app.dir/src/ordinaryflower.cpp.o.requires

CMakeFiles/app.dir/src/ordinaryflower.cpp.o.provides: CMakeFiles/app.dir/src/ordinaryflower.cpp.o.requires
	$(MAKE) -f CMakeFiles/app.dir/build.make CMakeFiles/app.dir/src/ordinaryflower.cpp.o.provides.build
.PHONY : CMakeFiles/app.dir/src/ordinaryflower.cpp.o.provides

CMakeFiles/app.dir/src/ordinaryflower.cpp.o.provides.build: CMakeFiles/app.dir/src/ordinaryflower.cpp.o


CMakeFiles/app.dir/src/rareflower.cpp.o: CMakeFiles/app.dir/flags.make
CMakeFiles/app.dir/src/rareflower.cpp.o: ../src/rareflower.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fn/graphical_GreenHouse/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/app.dir/src/rareflower.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/app.dir/src/rareflower.cpp.o -c /home/fn/graphical_GreenHouse/src/rareflower.cpp

CMakeFiles/app.dir/src/rareflower.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/app.dir/src/rareflower.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fn/graphical_GreenHouse/src/rareflower.cpp > CMakeFiles/app.dir/src/rareflower.cpp.i

CMakeFiles/app.dir/src/rareflower.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/app.dir/src/rareflower.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fn/graphical_GreenHouse/src/rareflower.cpp -o CMakeFiles/app.dir/src/rareflower.cpp.s

CMakeFiles/app.dir/src/rareflower.cpp.o.requires:

.PHONY : CMakeFiles/app.dir/src/rareflower.cpp.o.requires

CMakeFiles/app.dir/src/rareflower.cpp.o.provides: CMakeFiles/app.dir/src/rareflower.cpp.o.requires
	$(MAKE) -f CMakeFiles/app.dir/build.make CMakeFiles/app.dir/src/rareflower.cpp.o.provides.build
.PHONY : CMakeFiles/app.dir/src/rareflower.cpp.o.provides

CMakeFiles/app.dir/src/rareflower.cpp.o.provides.build: CMakeFiles/app.dir/src/rareflower.cpp.o


CMakeFiles/app.dir/src/decorativeFlower.cpp.o: CMakeFiles/app.dir/flags.make
CMakeFiles/app.dir/src/decorativeFlower.cpp.o: ../src/decorativeFlower.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fn/graphical_GreenHouse/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/app.dir/src/decorativeFlower.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/app.dir/src/decorativeFlower.cpp.o -c /home/fn/graphical_GreenHouse/src/decorativeFlower.cpp

CMakeFiles/app.dir/src/decorativeFlower.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/app.dir/src/decorativeFlower.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fn/graphical_GreenHouse/src/decorativeFlower.cpp > CMakeFiles/app.dir/src/decorativeFlower.cpp.i

CMakeFiles/app.dir/src/decorativeFlower.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/app.dir/src/decorativeFlower.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fn/graphical_GreenHouse/src/decorativeFlower.cpp -o CMakeFiles/app.dir/src/decorativeFlower.cpp.s

CMakeFiles/app.dir/src/decorativeFlower.cpp.o.requires:

.PHONY : CMakeFiles/app.dir/src/decorativeFlower.cpp.o.requires

CMakeFiles/app.dir/src/decorativeFlower.cpp.o.provides: CMakeFiles/app.dir/src/decorativeFlower.cpp.o.requires
	$(MAKE) -f CMakeFiles/app.dir/build.make CMakeFiles/app.dir/src/decorativeFlower.cpp.o.provides.build
.PHONY : CMakeFiles/app.dir/src/decorativeFlower.cpp.o.provides

CMakeFiles/app.dir/src/decorativeFlower.cpp.o.provides.build: CMakeFiles/app.dir/src/decorativeFlower.cpp.o


CMakeFiles/app.dir/src/functions.cpp.o: CMakeFiles/app.dir/flags.make
CMakeFiles/app.dir/src/functions.cpp.o: ../src/functions.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fn/graphical_GreenHouse/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/app.dir/src/functions.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/app.dir/src/functions.cpp.o -c /home/fn/graphical_GreenHouse/src/functions.cpp

CMakeFiles/app.dir/src/functions.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/app.dir/src/functions.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fn/graphical_GreenHouse/src/functions.cpp > CMakeFiles/app.dir/src/functions.cpp.i

CMakeFiles/app.dir/src/functions.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/app.dir/src/functions.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fn/graphical_GreenHouse/src/functions.cpp -o CMakeFiles/app.dir/src/functions.cpp.s

CMakeFiles/app.dir/src/functions.cpp.o.requires:

.PHONY : CMakeFiles/app.dir/src/functions.cpp.o.requires

CMakeFiles/app.dir/src/functions.cpp.o.provides: CMakeFiles/app.dir/src/functions.cpp.o.requires
	$(MAKE) -f CMakeFiles/app.dir/build.make CMakeFiles/app.dir/src/functions.cpp.o.provides.build
.PHONY : CMakeFiles/app.dir/src/functions.cpp.o.provides

CMakeFiles/app.dir/src/functions.cpp.o.provides.build: CMakeFiles/app.dir/src/functions.cpp.o


# Object files for target app
app_OBJECTS = \
"CMakeFiles/app.dir/src/main.cpp.o" \
"CMakeFiles/app.dir/src/flower.cpp.o" \
"CMakeFiles/app.dir/src/ordinaryflower.cpp.o" \
"CMakeFiles/app.dir/src/rareflower.cpp.o" \
"CMakeFiles/app.dir/src/decorativeFlower.cpp.o" \
"CMakeFiles/app.dir/src/functions.cpp.o"

# External object files for target app
app_EXTERNAL_OBJECTS =

app: CMakeFiles/app.dir/src/main.cpp.o
app: CMakeFiles/app.dir/src/flower.cpp.o
app: CMakeFiles/app.dir/src/ordinaryflower.cpp.o
app: CMakeFiles/app.dir/src/rareflower.cpp.o
app: CMakeFiles/app.dir/src/decorativeFlower.cpp.o
app: CMakeFiles/app.dir/src/functions.cpp.o
app: CMakeFiles/app.dir/build.make
app: CMakeFiles/app.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/fn/graphical_GreenHouse/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable app"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/app.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/app.dir/build: app

.PHONY : CMakeFiles/app.dir/build

CMakeFiles/app.dir/requires: CMakeFiles/app.dir/src/main.cpp.o.requires
CMakeFiles/app.dir/requires: CMakeFiles/app.dir/src/flower.cpp.o.requires
CMakeFiles/app.dir/requires: CMakeFiles/app.dir/src/ordinaryflower.cpp.o.requires
CMakeFiles/app.dir/requires: CMakeFiles/app.dir/src/rareflower.cpp.o.requires
CMakeFiles/app.dir/requires: CMakeFiles/app.dir/src/decorativeFlower.cpp.o.requires
CMakeFiles/app.dir/requires: CMakeFiles/app.dir/src/functions.cpp.o.requires

.PHONY : CMakeFiles/app.dir/requires

CMakeFiles/app.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/app.dir/cmake_clean.cmake
.PHONY : CMakeFiles/app.dir/clean

CMakeFiles/app.dir/depend:
	cd /home/fn/graphical_GreenHouse/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/fn/graphical_GreenHouse /home/fn/graphical_GreenHouse /home/fn/graphical_GreenHouse/build /home/fn/graphical_GreenHouse/build /home/fn/graphical_GreenHouse/build/CMakeFiles/app.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/app.dir/depend

