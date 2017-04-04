#include "book.hpp"

Book::Book (void) {}

void Book::setAuthor (string Author) {
  author = Author;
}
string Book::getAuthor (void) {
  return author;
}

void Book::setName (string Name) {
  name = Name;
}
string Book::getName (void) {
  return name;
}
