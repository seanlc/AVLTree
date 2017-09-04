CC= g++
CFLAGS= -Wall -std=c++11 -ggdb

main: main.cpp AVLTree.h.gch
	$(CC) $(CFLAGS) -o main main.cpp
AVLTree.h.gch: AVLTree.h
	$(CC) $(CFLAGS) AVLTree.h
clean:
	rm -f main AVLTree.h.gch
valgrind:
	valgrind --tool=memcheck --leak-check=yes --show-reachable=yes --track-origins=yes ./main
