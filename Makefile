compile:
	g++ -std=c++11 src/app.cpp -o build/AndKamus

install:
	cp build/AndKamus /usr/bin

all:
	make compile install
