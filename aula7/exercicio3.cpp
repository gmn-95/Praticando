#include "iostream"
#include "cstdlib"
#include "math.h"

using namespace std;

int main(int argc, char const *argv[]) {
  setlocale(LC_ALL, "Portuguese");

  int ano, r;
  string status;

  Menu:

  cout << "°°° Ano Bissesxto °°°\n";
  cout << "\n1 - Verificar";
  cout << "\n2 - Sair";
  cout << "\n--> ";
  cin >> r;

  switch (r) {
    case 1:
        system("clear");
        cout << "Digite um Ano para verificar se ele é bissexto ou não: \n";
        cout << "--> ";
        cin >> ano;

        if(ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0){
          status = "Ano Bissexto.\n\n";
        }
        else{
          status = "Ano NÃO Bissexto\n\n";
        }

        cout << status << "\n";
        system("sleep 4");
        system ("clear");

        goto Menu;

    break;

    case 2:
        cout << "\nPrograma finalizado!";
    break;

    default:
        cout << "\nValor inválido. Tente novamente!\n";
        system("sleep 3");
        system("clear");
        goto Menu;

  }
  return 0;
}
