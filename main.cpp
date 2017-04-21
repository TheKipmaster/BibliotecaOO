#include <iostream>
#include <stdlib.h>
#include "book.hpp"
#include "library.hpp"

int drawMenu (int *n) {

  system("clear");
  cout << "\tOpa, tudo bom? Bem vindo à biblioteca do Vaticano" << endl << endl;
  cout << "1 - Fazer doação" << endl;
  cout << "2 - Tuor da biblioteca" << endl;
  cout << "3 - Você sabe quantos livros nós temos?" << endl;
  cout << "4 - *Roubar livro*" << endl;
  cout << "5 - A porta é ali, senhor" << endl;
	do {
		cin >> *n;
		if ( (*n > 5) || (*n < 1) )
			cout << "Tu é burro cara?" << endl;
	} while ( (*n > 5) || (*n < 1) );

	return *n;
}

using namespace std;
int main () {
  int n, size=0, id;
  string name, author;
  Book newBook;
  Library library;

  drawMenu(&n);
	while(n != 5) {
		if(n == 1) {
      cout << "Qual o nome do livro que você deseja doar? "; //refatorar
      getchar();
      getline(cin, name);
      cout << "Qual o autor do livro? ";
      getchar();
      getline(cin, author);
      newBook = Book(name, author);
      library.addBook(newBook, &size);
      cout << "\tDoação feita. Muito obrigada, senhor!\n";
      getchar();
      drawMenu(&n);
    }
		else if(n == 2) {
      library.list();
      getchar();
      getchar();
      drawMenu(&n);
    }
    else if(n == 3) {
      cout << "\tNós temos exatamente " << library.collection.size() 
           <<" livros. Muito boa nossa biblioteca, não?\n";
      getchar();
      getchar();
      drawMenu(&n);
    }
    else if(n == 4) {
      cout << "\tInforme o id do livro a ser roubado: ";
      cin >> id;
      library.removeBook(id);
      getchar();
      getchar();
      drawMenu(&n);
    }
    else if(n == 5) {
      cout << "\tTchau! Volte sempre!\n";
      drawMenu(&n);
    }
	}
}
