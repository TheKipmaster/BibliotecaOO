#include <iostream>
#include <string>
#include <vector>
#include "library.hpp"
#include "book.hpp"

Library::Library(void) {}

void Library::addBook(Book book) {
	book.setId(0);
	push_back(book);
}

void Library::removeBook(int id) {
	Book book = at(id);
	erase(id);
	std::cout << book.getName() << "removido com sucesso" << std::endl;
}

void Library::list(void) {
	int i;
	for(i=0; i<size(); i++) {
		std::cout << "id: " << i << " nome: " << at(i).getName() << std::endl;
	}
}