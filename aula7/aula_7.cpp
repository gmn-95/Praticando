#include "iostream"
#include "cstdlib"
#include "math.h"

using namespace std;

int main(int argc, char const *argv[]) {
      setlocale(LC_ALL, "Portuguese");

      char tecla = '0';
      int n;
      Menu:
      system("clear");

      cout <<"\n***MENU DE CONTROLE***";
      cout <<"\n1 Executar...";
      cout <<"\n2 Finalizar...";
      cout <<"\nItem: ";
      cin >> tecla;

      switch (tecla) {
        case '1':
          cout << "\nDigite um número inteiro positivo: ";
          cin >> n;

          if(n % 2 == 0 && n % 3 == 0){
            cout << "\nO número " << n << " é divisivel por 2 e por 3\n" << endl;
          }

          else{
            cout << "\nO número " << n << " não é divisil por 2 nem por 3\n" << endl;
          }

          system("sleep 4");
          break;

        case '2':
          cout << "\nPrograma finalizado!" << endl;
          system("sleep 5");
          exit(0);
      }

      goto Menu;


  return 0;
}
