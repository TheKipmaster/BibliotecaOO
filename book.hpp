#include <string>

using namespace std;

class Book {
private:
  string name;
  string author;
  int id;
public:
  Book();
  void setAuthor(string Author);
  string getAuthor(void);
  void setName(string Name);
  string getName(void);
};

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
