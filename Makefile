Tic_Tac_Toe: main.o
	g++ main.o -o Tic_Tac_Toe
main.o: main.cpp
	g++ -c main.cpp -o main.o

clean:
	rm -f main.o Tic_Tac_Toe
