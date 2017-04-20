#include <string>
#include "library.hpp"
#include "book.hpp"

Library::Library(void) {}

void Library::addBook(Book book) {
	book.id = self.size();
	self.push_back(book);
}

Book Library::removeBook(int id) {
	Book book = self.at(id);
	self.erase(id);
	cout << book.name << "removido com sucesso" << endl;
}

void Library::listLibrary(void) {
	int i;
	for(i=0; i<self.size(); i++) {
		cout << "id: " << i << " nome: " << self.at(i).name endl;
	}
}