#ifndef _LIBRARY_HPP_
#define _LIBRARY_HPP_

#include <iostream>
#include <string>
#include <vector>
#include "book.hpp"

using namespace std;

class Library {
private:
public:
	vector<Book> collection;
	Library();
	void addBook(Book book, int* size);
	void removeBook(int id);
	void list(void);
};

#endif
