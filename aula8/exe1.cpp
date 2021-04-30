#include "iostream"
#include "iomanip"
#include "math.h"
#include "cstdlib"

using namespace std;

double const txmulta = 0.02;

//---quadro resumo das funções---

//função de leitura
double lerValor();

//função para calcular a multa
double calcMulta(double valorPrestacao);

//tipo void para mostrar o valor final
void mostrar(double val, double multa);


int main(int argc, char const *argv[])
{
    double valorPrest, valorMulta;
    int tecla;

    Menu:
    system("clear");
    cout << "***Menu***";
    cout << "\n1 - Executar.";
    cout << "\n2 - Sair.....";
    cout << "\nitem -> ";
    cin >> tecla;

    switch (tecla)
    {
    case 1:
        system("clear");
        valorPrest = lerValor();
        valorMulta = calcMulta(valorPrest);
        mostrar(valorPrest, valorMulta);

        break;
    case 2:
        cout << "\nFim do programa!\n";
        exit(0);

        break;
    }
    goto Menu;

    return 0;
}

//função de leitura
double lerValor(){
    double val;
    cout << "Digite a Prestação: ";
    cin >> val;
    return val;
}

//função para calcular a multa
double calcMulta(double valorPrestacao){
    return(valorPrestacao * txmulta);
}

//tipo void para mostrar o valor final
void mostrar(double val, double multa){
    double valorFinal = val + multa;
    cout << "\nValor a pagar: " << valorFinal << endl;
    system("sleep 5");
}