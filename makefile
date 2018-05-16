#PROJETO LP
PROG = executavel
CC = g++
CPPFLAGS = -O0 -g -std=c++11 -Wall -pedantic
OBJS = main.o
HEADER1 = ./include/acervo.hpp
SRC_DIR     = ./src/
BIN_DIR     = ./bin/
$(PROG): $(OBJS)
	$(CC) $(OBJS) -o $(PROG)
	mv *.o $(PROG) $(BIN_DIR)
main.o: $(HEADER1 )
	$(CC) $(CPPFLAGS) -c $(SRC_DIR)main.cpp
clean:
	rm -f $(BIN_DIR)*.o $(PROG)