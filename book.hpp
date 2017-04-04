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
