main: *.o
	g++ -g -static *.o -o main

*.o: *.cpp
	g++ -c -static *.cpp

run:
	./main

clean:
	rm -f *.o main

tar:
	tar -cvz *.cpp *.h makefile -f uXXXXXXX.tar.gz