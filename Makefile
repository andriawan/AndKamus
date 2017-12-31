compile:
	g++ -std=c++11 src/app.cpp -o build/AndKamus -lpthread

install:
	cp build/AndKamus /usr/bin
	mkdir /usr/share/AndKamus
	mkdir /usr/share/AndKamus/data
	install -m 755 -p assets/andkamus.csv /usr/share/AndKamus/data/andkamus.csv

uninstall:
	rm /usr/bin/AndKamus
	rm -r /usr/share/AndKamus

all:
	make compile install