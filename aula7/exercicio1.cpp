#include "iostream"
#include "cstdlib"
#include "math.h"

using namespace std;

int main(int argc, char const *argv[]) {
    system("clear");
    setlocale(LC_ALL, "Portuguese");

    int g[4], r, i;
    bool confirmado = false;

    int h[5], maior = 0, menor;

    Menu:
    cout << "**** MENU INICIAL **** \n";
    cout << "\n1 - Executar o exercício G";
    cout << "\n2 - Executar o exercício H";
    cout << "\n3 - Sair";
    cout << "\n--> ";
    cin >> r;
    cout << "\n";

      switch (r) {
        case 1:
            system("clear");
            cout << "-=-=-=- EXERCÍCIO G -=-=-=-\n";
            for(i = 0; i < sizeof(g)/4; i++){
                cout << "Digite o " << i + 1 << "º número\n";
                cin >> g[i];
            }
            for(i = 0; i < sizeof(g)/4; i++){
              if(g[i] % 2 == 0 && g[i] % 3 == 0) {
                    cout << g[i]<< " - ";
                    confirmado = true;
              }
              else{
                confirmado = false;
              }
            }

            if(confirmado == true){
              cout << "Estes números são divisíveis por 3 e por 2\n";
            }
            else{
              cout << "Estes números NÃO são divisíveis nem por 3 e nem por 2\n";
            }
            cout << "\nAguarde, voltando ao menu...\n\n";
            system("sleep 5");
            system("clear");

            goto Menu;

        break;

        case 2:
              system("clear");
              cout << "-=-=-=- EXERCÍCIO H -=-=-=-\n";
              for (i = 0; i < sizeof(h)/4; i++){
                cout << "Digite o " << i + 1 << "º número inteiro: \n";
                cin >> h[i];
                menor = h[i];
              }

              for (i = 0; i < sizeof(h)/4; i++){

                  if (h[i] > maior){
                    maior = h[i];
                  }

                  if (h[i] < menor){
                    menor = h[i];
                  }
              }
              cout << "\nO maior número é: " << maior;
              cout << "\nO menor número é: " << menor;

              cout << "\nAguarde, voltando ao menu...\n\n";
              system("sleep 5");
              system("clear");
              goto Menu;

        break;

        case 3:
            system("clear");
            cout << "Obrigado por utilizar o nosso programa!\n";
            cout << "Programa finalizado com sucesso...\n\n";
            exit(0);

        break;

        default:
            cout << "Valor inválido! Tente novamente!\n";
            system("sleep 5");
            system("clear");
            goto Menu;
        break;

      }
  return 0;
}
