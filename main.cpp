#include <iostream>
#include <stdlib.h>

using namespace std;
int main () {
  int n;
  system("clear");
  cout << "\tOpa, tudo bom? Bem vindo à biblioteca do Vaticano" << endl << endl;
  cout << "1 - Fazer doação" << endl;
  cout << "2 - Tuor da biblioteca" << endl;
  cout << "3 - Você sabe quantos livros nós temos?" << endl;
  cout << "4 - *Roubar livro*" << endl;
  cout << "5 - A porta é ali, senhor" << endl;

  cin >> n;
  system("clear");

  switch (n) {
    case 1:
      cout << "\tDoação feita. Muito obrigada, senhor!\n";
      break;
    case 2:
      cout << "\tDivirta-se no tuor!\n";
      break;
    case 3:
      cout << "\tNós temos exatamente 0 livros. Muito boa nossa biblioteca, não?\n";
      break;
    case 4:
      cout << "\tParabéns, você roubou um livro de onde não tinha livro nenhum\n";
      break;
    case 5:
      cout << "\tTchau! Volte sempre!\n";
      break;
    default:
      cout << "\tTu é burro, cara?\n";
  }
  if (n == 5)
    return 0;
  else {
    getchar();
    getchar();
    main();
  }
}