CC     = g++
OBJS   = book.o library.o
STD    = -std=c++11
LFLAGS = $(STD) -Wall  #linking flags
CFLAGS = $(LFLAGS) -c  #object flags


a.out: main.cpp book.o library.o
	$(CC) main.cpp $(LFLAGS) $(OBJS)

book.o: book.hpp book.cpp
	$(CC) book.cpp $(CFLAGS)

library.o: library.hpp book.hpp library.cpp
	$(CC) library.cpp $(CFLAGS)

clean:
	\rm *.o* *~
