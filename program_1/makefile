CXX=g++ -std=c++0x -g

OBJ=main.o utilities.o


build: main

test: main
	./main

main: $(OBJ)
	$(CXX) -o $@ $(OBJ)

main.o: main.cpp utilities.h
	$(CXX) -c main.cpp

utilities.o: utilities.cpp utilities.h
	$(CXX) -c utilities.cpp

clean:
	rm -f main *.o

