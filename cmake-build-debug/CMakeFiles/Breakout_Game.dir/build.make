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
CMAKE_COMMAND = /home/michael/Descargas/CLion-2021.2.1/clion-2021.2.1/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/michael/Descargas/CLion-2021.2.1/clion-2021.2.1/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/michael/Documentos/Breakout-Game

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/michael/Documentos/Breakout-Game/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Breakout_Game.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/Breakout_Game.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Breakout_Game.dir/flags.make

<<<<<<< Updated upstream
CMakeFiles/Breakout_Game.dir/main.cpp.o: CMakeFiles/Breakout_Game.dir/flags.make
CMakeFiles/Breakout_Game.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/michael/Documentos/Breakout-Game/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Breakout_Game.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Breakout_Game.dir/main.cpp.o -c /home/michael/Documentos/Breakout-Game/main.cpp

CMakeFiles/Breakout_Game.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Breakout_Game.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/michael/Documentos/Breakout-Game/main.cpp > CMakeFiles/Breakout_Game.dir/main.cpp.i

CMakeFiles/Breakout_Game.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Breakout_Game.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/michael/Documentos/Breakout-Game/main.cpp -o CMakeFiles/Breakout_Game.dir/main.cpp.s

CMakeFiles/Breakout_Game.dir/SocketServer/SocketServer.cpp.o: CMakeFiles/Breakout_Game.dir/flags.make
CMakeFiles/Breakout_Game.dir/SocketServer/SocketServer.cpp.o: ../SocketServer/SocketServer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/michael/Documentos/Breakout-Game/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Breakout_Game.dir/SocketServer/SocketServer.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Breakout_Game.dir/SocketServer/SocketServer.cpp.o -c /home/michael/Documentos/Breakout-Game/SocketServer/SocketServer.cpp

CMakeFiles/Breakout_Game.dir/SocketServer/SocketServer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Breakout_Game.dir/SocketServer/SocketServer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/michael/Documentos/Breakout-Game/SocketServer/SocketServer.cpp > CMakeFiles/Breakout_Game.dir/SocketServer/SocketServer.cpp.i

CMakeFiles/Breakout_Game.dir/SocketServer/SocketServer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Breakout_Game.dir/SocketServer/SocketServer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/michael/Documentos/Breakout-Game/SocketServer/SocketServer.cpp -o CMakeFiles/Breakout_Game.dir/SocketServer/SocketServer.cpp.s

CMakeFiles/Breakout_Game.dir/Client/main.cpp.o: CMakeFiles/Breakout_Game.dir/flags.make
CMakeFiles/Breakout_Game.dir/Client/main.cpp.o: ../Client/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/michael/Documentos/Breakout-Game/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Breakout_Game.dir/Client/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Breakout_Game.dir/Client/main.cpp.o -c /home/michael/Documentos/Breakout-Game/Client/main.cpp

CMakeFiles/Breakout_Game.dir/Client/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Breakout_Game.dir/Client/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/michael/Documentos/Breakout-Game/Client/main.cpp > CMakeFiles/Breakout_Game.dir/Client/main.cpp.i

CMakeFiles/Breakout_Game.dir/Client/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Breakout_Game.dir/Client/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/michael/Documentos/Breakout-Game/Client/main.cpp -o CMakeFiles/Breakout_Game.dir/Client/main.cpp.s

CMakeFiles/Breakout_Game.dir/Client/SocketClient.cpp.o: CMakeFiles/Breakout_Game.dir/flags.make
CMakeFiles/Breakout_Game.dir/Client/SocketClient.cpp.o: ../Client/SocketClient.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/michael/Documentos/Breakout-Game/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Breakout_Game.dir/Client/SocketClient.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Breakout_Game.dir/Client/SocketClient.cpp.o -c /home/michael/Documentos/Breakout-Game/Client/SocketClient.cpp

CMakeFiles/Breakout_Game.dir/Client/SocketClient.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Breakout_Game.dir/Client/SocketClient.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/michael/Documentos/Breakout-Game/Client/SocketClient.cpp > CMakeFiles/Breakout_Game.dir/Client/SocketClient.cpp.i

CMakeFiles/Breakout_Game.dir/Client/SocketClient.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Breakout_Game.dir/Client/SocketClient.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/michael/Documentos/Breakout-Game/Client/SocketClient.cpp -o CMakeFiles/Breakout_Game.dir/Client/SocketClient.cpp.s

# Object files for target Breakout_Game
Breakout_Game_OBJECTS = \
"CMakeFiles/Breakout_Game.dir/main.cpp.o" \
"CMakeFiles/Breakout_Game.dir/SocketServer/SocketServer.cpp.o" \
"CMakeFiles/Breakout_Game.dir/Client/main.cpp.o" \
"CMakeFiles/Breakout_Game.dir/Client/SocketClient.cpp.o"
=======
CMakeFiles/Breakout_Game.dir/Game_GUI/main.cpp.o: CMakeFiles/Breakout_Game.dir/flags.make
CMakeFiles/Breakout_Game.dir/Game_GUI/main.cpp.o: ../Game_GUI/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/maxgm/CLionProjects/Breakout-Game/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Breakout_Game.dir/Game_GUI/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Breakout_Game.dir/Game_GUI/main.cpp.o -c /home/maxgm/CLionProjects/Breakout-Game/Game_GUI/main.cpp

CMakeFiles/Breakout_Game.dir/Game_GUI/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Breakout_Game.dir/Game_GUI/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/maxgm/CLionProjects/Breakout-Game/Game_GUI/main.cpp > CMakeFiles/Breakout_Game.dir/Game_GUI/main.cpp.i

CMakeFiles/Breakout_Game.dir/Game_GUI/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Breakout_Game.dir/Game_GUI/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/maxgm/CLionProjects/Breakout-Game/Game_GUI/main.cpp -o CMakeFiles/Breakout_Game.dir/Game_GUI/main.cpp.s

CMakeFiles/Breakout_Game.dir/Game_GUI/Game.cpp.o: CMakeFiles/Breakout_Game.dir/flags.make
CMakeFiles/Breakout_Game.dir/Game_GUI/Game.cpp.o: ../Game_GUI/Game.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/maxgm/CLionProjects/Breakout-Game/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Breakout_Game.dir/Game_GUI/Game.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Breakout_Game.dir/Game_GUI/Game.cpp.o -c /home/maxgm/CLionProjects/Breakout-Game/Game_GUI/Game.cpp

CMakeFiles/Breakout_Game.dir/Game_GUI/Game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Breakout_Game.dir/Game_GUI/Game.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/maxgm/CLionProjects/Breakout-Game/Game_GUI/Game.cpp > CMakeFiles/Breakout_Game.dir/Game_GUI/Game.cpp.i

CMakeFiles/Breakout_Game.dir/Game_GUI/Game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Breakout_Game.dir/Game_GUI/Game.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/maxgm/CLionProjects/Breakout-Game/Game_GUI/Game.cpp -o CMakeFiles/Breakout_Game.dir/Game_GUI/Game.cpp.s

# Object files for target Breakout_Game
Breakout_Game_OBJECTS = \
"CMakeFiles/Breakout_Game.dir/Game_GUI/main.cpp.o" \
"CMakeFiles/Breakout_Game.dir/Game_GUI/Game.cpp.o"
>>>>>>> Stashed changes

# External object files for target Breakout_Game
Breakout_Game_EXTERNAL_OBJECTS =

<<<<<<< Updated upstream
Breakout_Game: CMakeFiles/Breakout_Game.dir/main.cpp.o
Breakout_Game: CMakeFiles/Breakout_Game.dir/SocketServer/SocketServer.cpp.o
Breakout_Game: CMakeFiles/Breakout_Game.dir/Client/main.cpp.o
Breakout_Game: CMakeFiles/Breakout_Game.dir/Client/SocketClient.cpp.o
=======
Breakout_Game: CMakeFiles/Breakout_Game.dir/Game_GUI/main.cpp.o
Breakout_Game: CMakeFiles/Breakout_Game.dir/Game_GUI/Game.cpp.o
>>>>>>> Stashed changes
Breakout_Game: CMakeFiles/Breakout_Game.dir/build.make
Breakout_Game: /usr/lib/x86_64-linux-gnu/libsfml-graphics.so.2.5.1
Breakout_Game: /usr/lib/x86_64-linux-gnu/libsfml-window.so.2.5.1
Breakout_Game: /usr/lib/x86_64-linux-gnu/libsfml-system.so.2.5.1
Breakout_Game: CMakeFiles/Breakout_Game.dir/link.txt
<<<<<<< Updated upstream
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/michael/Documentos/Breakout-Game/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable Breakout_Game"
=======
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/maxgm/CLionProjects/Breakout-Game/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Breakout_Game"
>>>>>>> Stashed changes
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Breakout_Game.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Breakout_Game.dir/build: Breakout_Game
.PHONY : CMakeFiles/Breakout_Game.dir/build

CMakeFiles/Breakout_Game.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Breakout_Game.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Breakout_Game.dir/clean

CMakeFiles/Breakout_Game.dir/depend:
	cd /home/michael/Documentos/Breakout-Game/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/michael/Documentos/Breakout-Game /home/michael/Documentos/Breakout-Game /home/michael/Documentos/Breakout-Game/cmake-build-debug /home/michael/Documentos/Breakout-Game/cmake-build-debug /home/michael/Documentos/Breakout-Game/cmake-build-debug/CMakeFiles/Breakout_Game.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Breakout_Game.dir/depend

