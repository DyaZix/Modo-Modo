all: compile link

compile:
	g++ -Isrc/include -c main.cpp 
	g++ -Isrc/include -c "src/game/game.cpp"
	g++ -Isrc/include -c "src/game/UI/main_menu.cpp"
	g++ -Isrc/include -c "src/game/animation.cpp"
	g++ -Isrc/include -c "src/game/textures_manager.cpp"

link:
	g++ main.o game.o main_menu.o animation.o textures_manager.o -o main -Lsrc/lib -lsfml-graphics -lsfml-window -lsfml-system