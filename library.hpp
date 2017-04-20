#ifndef _LIBRARY_HPP_
#define _LIBRARY_HPP_

#include <string>
#include <vector>
#include "book.hpp"

using namespace std;

class Library {
private:
	vector<Book> library;
public:
	Library();
	void addBook(Book book);
	void removeBook(int id);
	void list(void);
};

#endif																