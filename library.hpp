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
	Book removeBook(int id);
	void listLibrary(void);
}