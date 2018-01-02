compile:
	g++ -std=c++11 src/app.cpp -o build/AndKamus -lpthread

install:
	cp -u build/AndKamus /usr/bin
	mkdir -p /usr/share/AndKamus
	mkdir -p /usr/share/AndKamus/data
	install -m 755 -p assets/andkamus.csv /usr/share/AndKamus/data/andkamus.csv

uninstall:
	rm /usr/bin/AndKamus
	rm -r /usr/share/AndKamus

all: compile install