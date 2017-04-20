#include "book.hpp"

Book::Book(void) {}

Book::Book(string Name, string Author) {
	name = Name;
	author = Author;
}

void Book::setAuthor(string Author) {
  author = Author;
}
string Book::getAuthor(void) {
  return author;
}

void Book::setName(string Name) {
  name = Name;
}

string Book::getName(void) {
  return name;
}

int Book::getId(void) {
	return id;
}

void Book::setId(int Id) {
	id = Id;
}