CC     = g++
OBJS   = book.o
STD    = -std=c++11
LFLAGS = $(STD) -Wall  #linking flags
CFLAGS = $(LFLAGS) -c  #object flags


a.out: main.cpp book.o
	$(CC) main.cpp $(LFLAGS) $(OBJS)

book.o: book.hpp book.cpp
	$(CC) book.cpp $(CFLAGS)

clean:
	\rm *.o* *~
