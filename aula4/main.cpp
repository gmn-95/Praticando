#include <iostream> //cont�m os elementos necess�rios para a exe de opera��es de leitura e impress�o (I/O)
#include <math.h>
#include <iomanip> // maninpula��o de sa�da de dados
#include <string> //biblioteca de strings
#include <cstdlib>

using namespace std;
string nome, status;
double imc, peso, altura;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int item = 0;
    MENU://ponto de repeti��o
    system("cls");

    cout << "\n***MENU***";
    cout << "\n1 Ler";
    cout << "\n2 Calcular";
    cout << "\n3 Exibir";
    cout << "\n4 Sair" << endl;
    cout << "--> ";
    cin >> item;

    if(item == 1){
        system("cls");

        cout << "\nDigite seu nome: ";
        cin.ignore();// ignora o enter do cin anterior
        getline(cin, nome);


        cout << "\nDigite seu peso: ";
        cin >> peso;

        cout << "\nDigite sua altura: ";
        cin >> altura;
    }

    else if(item == 2){
        system("cls");

        imc = peso / pow(altura, 2);

        if(imc < 18.5){
            status = "Voc� est� abaixo do peso!";
        }

        else if (imc <= 24.9){
            status = "Voc� est� no peso ideal!";
        }

        else{
            status = "Voc� est� acima do peso!";
        }

        cout << "Calculando imc...";

        system("sleep 4");
    }

    else if(item == 3){
        cout << "\n*** Tela de Sa�da***";
        cout << "\nNome:" << nome;

        cout << fixed << setprecision (2) << "\nIMC.:" << imc;
        cout << "\nStatus:" << status << endl;
        system("sleep 5");

    }

    else if (item == 4){
        exit(0);
    }

    goto MENU;// Volta ao ponto de repeti��o


    return 0;
}
