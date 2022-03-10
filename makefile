all: game


textures_manager.o: src/game/textures_manager.cpp
	g++ -c "src/game/textures_manager.cpp" -o textures_manager.o -Lsrc/lib -lsfml-graphics -lsfml-window -lsfml-system

game: textures_manager.o
	@echo "** Building the game"
	g++ -o game textures_manager.o -Lsrc/lib -lsfml-graphics -lsfml-window -lsfml-system
	

compile:
	g++ -Isrc/include -c main.cpp

link:
	g++ main.o -o main -Lsrc/lib -lsfml-graphics -lsfml-window -lsfml-system