# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

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
CMAKE_SOURCE_DIR = /home/ulysses/Documentos/jogos/IJE-MetalSlug-2017-1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ulysses/Documentos/jogos/IJE-MetalSlug-2017-1

# Include any dependencies generated for this target.
include CMakeFiles/game.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/game.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/game.dir/flags.make

CMakeFiles/game.dir/src/main.cpp.o: CMakeFiles/game.dir/flags.make
CMakeFiles/game.dir/src/main.cpp.o: src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ulysses/Documentos/jogos/IJE-MetalSlug-2017-1/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/game.dir/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/game.dir/src/main.cpp.o -c /home/ulysses/Documentos/jogos/IJE-MetalSlug-2017-1/src/main.cpp

CMakeFiles/game.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ulysses/Documentos/jogos/IJE-MetalSlug-2017-1/src/main.cpp > CMakeFiles/game.dir/src/main.cpp.i

CMakeFiles/game.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ulysses/Documentos/jogos/IJE-MetalSlug-2017-1/src/main.cpp -o CMakeFiles/game.dir/src/main.cpp.s

CMakeFiles/game.dir/src/main.cpp.o.requires:

.PHONY : CMakeFiles/game.dir/src/main.cpp.o.requires

CMakeFiles/game.dir/src/main.cpp.o.provides: CMakeFiles/game.dir/src/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/game.dir/build.make CMakeFiles/game.dir/src/main.cpp.o.provides.build
.PHONY : CMakeFiles/game.dir/src/main.cpp.o.provides

CMakeFiles/game.dir/src/main.cpp.o.provides.build: CMakeFiles/game.dir/src/main.cpp.o


CMakeFiles/game.dir/src/menu_scene.cpp.o: CMakeFiles/game.dir/flags.make
CMakeFiles/game.dir/src/menu_scene.cpp.o: src/menu_scene.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ulysses/Documentos/jogos/IJE-MetalSlug-2017-1/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/game.dir/src/menu_scene.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/game.dir/src/menu_scene.cpp.o -c /home/ulysses/Documentos/jogos/IJE-MetalSlug-2017-1/src/menu_scene.cpp

CMakeFiles/game.dir/src/menu_scene.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/src/menu_scene.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ulysses/Documentos/jogos/IJE-MetalSlug-2017-1/src/menu_scene.cpp > CMakeFiles/game.dir/src/menu_scene.cpp.i

CMakeFiles/game.dir/src/menu_scene.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/src/menu_scene.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ulysses/Documentos/jogos/IJE-MetalSlug-2017-1/src/menu_scene.cpp -o CMakeFiles/game.dir/src/menu_scene.cpp.s

CMakeFiles/game.dir/src/menu_scene.cpp.o.requires:

.PHONY : CMakeFiles/game.dir/src/menu_scene.cpp.o.requires

CMakeFiles/game.dir/src/menu_scene.cpp.o.provides: CMakeFiles/game.dir/src/menu_scene.cpp.o.requires
	$(MAKE) -f CMakeFiles/game.dir/build.make CMakeFiles/game.dir/src/menu_scene.cpp.o.provides.build
.PHONY : CMakeFiles/game.dir/src/menu_scene.cpp.o.provides

CMakeFiles/game.dir/src/menu_scene.cpp.o.provides.build: CMakeFiles/game.dir/src/menu_scene.cpp.o


CMakeFiles/game.dir/src/monsterAI.cpp.o: CMakeFiles/game.dir/flags.make
CMakeFiles/game.dir/src/monsterAI.cpp.o: src/monsterAI.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ulysses/Documentos/jogos/IJE-MetalSlug-2017-1/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/game.dir/src/monsterAI.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/game.dir/src/monsterAI.cpp.o -c /home/ulysses/Documentos/jogos/IJE-MetalSlug-2017-1/src/monsterAI.cpp

CMakeFiles/game.dir/src/monsterAI.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/src/monsterAI.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ulysses/Documentos/jogos/IJE-MetalSlug-2017-1/src/monsterAI.cpp > CMakeFiles/game.dir/src/monsterAI.cpp.i

CMakeFiles/game.dir/src/monsterAI.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/src/monsterAI.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ulysses/Documentos/jogos/IJE-MetalSlug-2017-1/src/monsterAI.cpp -o CMakeFiles/game.dir/src/monsterAI.cpp.s

CMakeFiles/game.dir/src/monsterAI.cpp.o.requires:

.PHONY : CMakeFiles/game.dir/src/monsterAI.cpp.o.requires

CMakeFiles/game.dir/src/monsterAI.cpp.o.provides: CMakeFiles/game.dir/src/monsterAI.cpp.o.requires
	$(MAKE) -f CMakeFiles/game.dir/build.make CMakeFiles/game.dir/src/monsterAI.cpp.o.provides.build
.PHONY : CMakeFiles/game.dir/src/monsterAI.cpp.o.provides

CMakeFiles/game.dir/src/monsterAI.cpp.o.provides.build: CMakeFiles/game.dir/src/monsterAI.cpp.o


CMakeFiles/game.dir/src/player.cpp.o: CMakeFiles/game.dir/flags.make
CMakeFiles/game.dir/src/player.cpp.o: src/player.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ulysses/Documentos/jogos/IJE-MetalSlug-2017-1/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/game.dir/src/player.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/game.dir/src/player.cpp.o -c /home/ulysses/Documentos/jogos/IJE-MetalSlug-2017-1/src/player.cpp

CMakeFiles/game.dir/src/player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/src/player.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ulysses/Documentos/jogos/IJE-MetalSlug-2017-1/src/player.cpp > CMakeFiles/game.dir/src/player.cpp.i

CMakeFiles/game.dir/src/player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/src/player.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ulysses/Documentos/jogos/IJE-MetalSlug-2017-1/src/player.cpp -o CMakeFiles/game.dir/src/player.cpp.s

CMakeFiles/game.dir/src/player.cpp.o.requires:

.PHONY : CMakeFiles/game.dir/src/player.cpp.o.requires

CMakeFiles/game.dir/src/player.cpp.o.provides: CMakeFiles/game.dir/src/player.cpp.o.requires
	$(MAKE) -f CMakeFiles/game.dir/build.make CMakeFiles/game.dir/src/player.cpp.o.provides.build
.PHONY : CMakeFiles/game.dir/src/player.cpp.o.provides

CMakeFiles/game.dir/src/player.cpp.o.provides.build: CMakeFiles/game.dir/src/player.cpp.o


CMakeFiles/game.dir/src/soldier.cpp.o: CMakeFiles/game.dir/flags.make
CMakeFiles/game.dir/src/soldier.cpp.o: src/soldier.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ulysses/Documentos/jogos/IJE-MetalSlug-2017-1/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/game.dir/src/soldier.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/game.dir/src/soldier.cpp.o -c /home/ulysses/Documentos/jogos/IJE-MetalSlug-2017-1/src/soldier.cpp

CMakeFiles/game.dir/src/soldier.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/src/soldier.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ulysses/Documentos/jogos/IJE-MetalSlug-2017-1/src/soldier.cpp > CMakeFiles/game.dir/src/soldier.cpp.i

CMakeFiles/game.dir/src/soldier.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/src/soldier.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ulysses/Documentos/jogos/IJE-MetalSlug-2017-1/src/soldier.cpp -o CMakeFiles/game.dir/src/soldier.cpp.s

CMakeFiles/game.dir/src/soldier.cpp.o.requires:

.PHONY : CMakeFiles/game.dir/src/soldier.cpp.o.requires

CMakeFiles/game.dir/src/soldier.cpp.o.provides: CMakeFiles/game.dir/src/soldier.cpp.o.requires
	$(MAKE) -f CMakeFiles/game.dir/build.make CMakeFiles/game.dir/src/soldier.cpp.o.provides.build
.PHONY : CMakeFiles/game.dir/src/soldier.cpp.o.provides

CMakeFiles/game.dir/src/soldier.cpp.o.provides.build: CMakeFiles/game.dir/src/soldier.cpp.o


CMakeFiles/game.dir/src/stage1_scene.cpp.o: CMakeFiles/game.dir/flags.make
CMakeFiles/game.dir/src/stage1_scene.cpp.o: src/stage1_scene.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ulysses/Documentos/jogos/IJE-MetalSlug-2017-1/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/game.dir/src/stage1_scene.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/game.dir/src/stage1_scene.cpp.o -c /home/ulysses/Documentos/jogos/IJE-MetalSlug-2017-1/src/stage1_scene.cpp

CMakeFiles/game.dir/src/stage1_scene.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/game.dir/src/stage1_scene.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ulysses/Documentos/jogos/IJE-MetalSlug-2017-1/src/stage1_scene.cpp > CMakeFiles/game.dir/src/stage1_scene.cpp.i

CMakeFiles/game.dir/src/stage1_scene.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/game.dir/src/stage1_scene.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ulysses/Documentos/jogos/IJE-MetalSlug-2017-1/src/stage1_scene.cpp -o CMakeFiles/game.dir/src/stage1_scene.cpp.s

CMakeFiles/game.dir/src/stage1_scene.cpp.o.requires:

.PHONY : CMakeFiles/game.dir/src/stage1_scene.cpp.o.requires

CMakeFiles/game.dir/src/stage1_scene.cpp.o.provides: CMakeFiles/game.dir/src/stage1_scene.cpp.o.requires
	$(MAKE) -f CMakeFiles/game.dir/build.make CMakeFiles/game.dir/src/stage1_scene.cpp.o.provides.build
.PHONY : CMakeFiles/game.dir/src/stage1_scene.cpp.o.provides

CMakeFiles/game.dir/src/stage1_scene.cpp.o.provides.build: CMakeFiles/game.dir/src/stage1_scene.cpp.o


# Object files for target game
game_OBJECTS = \
"CMakeFiles/game.dir/src/main.cpp.o" \
"CMakeFiles/game.dir/src/menu_scene.cpp.o" \
"CMakeFiles/game.dir/src/monsterAI.cpp.o" \
"CMakeFiles/game.dir/src/player.cpp.o" \
"CMakeFiles/game.dir/src/soldier.cpp.o" \
"CMakeFiles/game.dir/src/stage1_scene.cpp.o"

# External object files for target game
game_EXTERNAL_OBJECTS =

game: CMakeFiles/game.dir/src/main.cpp.o
game: CMakeFiles/game.dir/src/menu_scene.cpp.o
game: CMakeFiles/game.dir/src/monsterAI.cpp.o
game: CMakeFiles/game.dir/src/player.cpp.o
game: CMakeFiles/game.dir/src/soldier.cpp.o
game: CMakeFiles/game.dir/src/stage1_scene.cpp.o
game: CMakeFiles/game.dir/build.make
game: engine/libengine.a
game: CMakeFiles/game.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ulysses/Documentos/jogos/IJE-MetalSlug-2017-1/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable game"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/game.dir/link.txt --verbose=$(VERBOSE)
	/usr/bin/cmake -E copy_directory /home/ulysses/Documentos/jogos/IJE-MetalSlug-2017-1/assets /home/ulysses/Documentos/jogos/IJE-MetalSlug-2017-1/assets

# Rule to build all files generated by this target.
CMakeFiles/game.dir/build: game

.PHONY : CMakeFiles/game.dir/build

CMakeFiles/game.dir/requires: CMakeFiles/game.dir/src/main.cpp.o.requires
CMakeFiles/game.dir/requires: CMakeFiles/game.dir/src/menu_scene.cpp.o.requires
CMakeFiles/game.dir/requires: CMakeFiles/game.dir/src/monsterAI.cpp.o.requires
CMakeFiles/game.dir/requires: CMakeFiles/game.dir/src/player.cpp.o.requires
CMakeFiles/game.dir/requires: CMakeFiles/game.dir/src/soldier.cpp.o.requires
CMakeFiles/game.dir/requires: CMakeFiles/game.dir/src/stage1_scene.cpp.o.requires

.PHONY : CMakeFiles/game.dir/requires

CMakeFiles/game.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/game.dir/cmake_clean.cmake
.PHONY : CMakeFiles/game.dir/clean

CMakeFiles/game.dir/depend:
	cd /home/ulysses/Documentos/jogos/IJE-MetalSlug-2017-1 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ulysses/Documentos/jogos/IJE-MetalSlug-2017-1 /home/ulysses/Documentos/jogos/IJE-MetalSlug-2017-1 /home/ulysses/Documentos/jogos/IJE-MetalSlug-2017-1 /home/ulysses/Documentos/jogos/IJE-MetalSlug-2017-1 /home/ulysses/Documentos/jogos/IJE-MetalSlug-2017-1/CMakeFiles/game.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/game.dir/depend

