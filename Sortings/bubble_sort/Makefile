all: bubble_sort

bubble_sort: main.o sort.o
	g++ main.o sort.o -o bubble_sort

main.o: main.cpp
	g++ -c main.cpp

sort.o: sort.cpp
	g++ -c sort.cpp

clean:
	rm -rf *.o bubble_sort
