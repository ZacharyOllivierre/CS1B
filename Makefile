CC = g++

all: ex

clean:
	rm ex

ex: Prob1.cpp
	g++ Prob1.cpp -o ex