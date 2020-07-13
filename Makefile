# all configuration file

# compailer
CC = g++
# flags
CFLAGS = -c -std=c++11
# special flags
SFLAGS = -lpthread -o
# install dir
MKDIR  = mkdir -p
# install file
INSTALL_FILE  = install -m 644 -p
# install binary
INSTALL_PROGRAM = install -m 755 -p
# bin directory
BIN = /usr/local/bin
# destination folder
DEST_DIR = /usr/local/share/AndKamus

compile: app.o andkamus.o
	$(MKDIR) build
	$(CC) *.o $(SFLAGS) build/AndKamus

app.o: src/app.cpp
	$(CC) $(CFLAGS) src/app.cpp

andkamus.o: src/AndKamus.cpp
	$(CC) $(CFLAGS) src/AndKamus.cpp

install:
	$(INSTALL_PROGRAM) build/AndKamus $(BIN)
	$(MKDIR) $(DEST_DIR)
	$(MKDIR) $(DEST_DIR)/data
	$(INSTALL_FILE) assets/andkamus.csv $(DEST_DIR)/data/andkamus.csv

uninstall:
	rm $(BIN)/AndKamus
	rm -r $(DEST_DIR)

clean:
	rm -f *.o build/AndKamus

all: compile install
