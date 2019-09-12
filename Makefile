a.out: main.o Queue.o
	g++ -Wall -Wextra -Weffc++ -g main.o Queue.o

main.o: main.cc Queue.h
	g++ -Wall -Wextra -Weffc++ -c -g main.cc

Queue.o: Queue.cc Queue.h
	g++ -Wall -Wextra -Weffc++ -c -g Queue.cc

clean:
	rm -f *.o core a.out


