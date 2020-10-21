CC=g++
CFLAGS=-Wall -Werror -pedantic -O1

helloWorld: helloWorld.cpp
	$(CC) $(CFLAGS) helloWorld.cpp -o helloWorld

clean: 
	rm *.o
