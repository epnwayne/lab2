main: Elo.o main.o
	g++ -o main main.o Elo.o
Elo.o: Elo.cpp Elo.h
	g++ -c Elo.cpp
main.o: main.cpp Elo.h
	g++ -c main.cpp
clean:
	rm main *.o
