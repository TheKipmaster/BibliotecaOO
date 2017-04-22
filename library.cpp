#include "library.hpp"

Library::Library(void) {}

void Library::addBook(Book book, int* size) {
	book.setId(*size);
	(*size)++;
	collection.push_back(book);
}

void Library::removeBook(int id) {
	Book book = collection.at(id);
	collection.erase(collection.begin()+id);
	std::cout << book.getName() << " removido com sucesso" << std::endl;
}

void Library::list(void) {
	unsigned i;
	for(i=0; i<collection.size(); i++) {
		std::cout << "id: " << collection[i].getId()
				  << " nome: " << collection.at(i).getName()
				  << " Author: "<< collection.at(i).getAuthor()
				  << std::endl;
	}
}
