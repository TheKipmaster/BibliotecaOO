#ifndef _BOOK_HPP_
#define _BOOK_HPP_

#include <string>

using namespace std;

class Book {
private:
  string name;
  string author;
  int id;
public:
	Book();
  Book(string Name, string Author);
  void setAuthor(string Author);
  string getAuthor(void);
  void setName(string Name);
  string getName(void);
  void setId(int Id);
  int getId(void);
};

#endif