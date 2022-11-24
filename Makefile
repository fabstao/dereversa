all:
	gcc -o dereversa main.c

install:
	sudo cp dereversa /usr/local/bin/
