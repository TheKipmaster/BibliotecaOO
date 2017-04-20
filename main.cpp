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
			cout << "Tu é burro cara?" << endl;  	/*'n' eh passado a td funcao do menu para que*/
	} while ( (*n > 5) || (*n < 1) );           /*este possa ser desenhado a qualquer momento*/

	return *n;
}

using namespace std;
int main () {
  int n;
  string name, author;
  Book newBook;
  Library library;

  drawMenu(&n);
	while(n != 5) {
		if(n == 1) {
      cout << "Qual o nome do livro que você deseja doar? "; //refatorar
      cin >> name;
      cout << "Qual o autor do livro? ";
      cin >> author;
      newBook = Book(name, author);
      library.addBook(newBook);
      cout << "\tDoação feita. Muito obrigada, senhor!\n";
      getchar();
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
      cout << "\tNós temos exatamente 0 livros. Muito boa nossa biblioteca, não?\n";
      drawMenu(&n);
    }
    else if(n == 4) {
      cout << "\tParabéns, você roubou "<< endl;
      drawMenu(&n);
    }
    else if(n == 5) {
      cout << "\tTchau! Volte sempre!\n";
      drawMenu(&n);
    }
	}
}
