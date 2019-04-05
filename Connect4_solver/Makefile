.PHONY: clean, mrproper

CC = g++
CFLAGS = -W -Wall -std=c++14 -pthread
 

all: main.o game.o alpha-beta.o gameEngine.o
	$(CC) main.o game.o alpha-beta.o gameEngine.o -o Puissance4

main.o: main.cpp
	$(CC) -c main.cpp -o main.o $(CFLAGS)

gameEngine.o: gameEngine.cpp gameEngine.hpp
	$(CC) -c gameEngine.cpp -o gameEngine.o $(CFLAGS)

game.o: game.cpp game.hpp
	$(CC) -c game.cpp -o game.o $(CFLAGS)

alpha-beta.o: alpha-beta.cpp alpha-beta.hpp
	$(CC) -c alpha-beta.cpp -o alpha-beta.o $(CFLAGS)

clean:
	rm -rf *.o