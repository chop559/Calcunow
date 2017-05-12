a.out: main.cc calc.h
	g++ -g -std=c++11 main.cc
clean:
	rm -f *.o core a.out






