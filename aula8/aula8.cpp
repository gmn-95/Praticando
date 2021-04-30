#include "iostream"
#include "cstdlib"
#include "math.h"
#include "string"

using namespace std; //diretiva
/*
double const pi = 3.14;
double altura = 5.55;

//declaração de subrotinas
void verVolume(double raio);

int main()
{
    double raio = 10.5;

    verVolume(raio);//chamada por referência
    verVolume(13.4);//chamada por valor

    system("sleep 5");

    return 0;
}

void verVolume(double raio){
    double volume = raio * raio * pi * altura;
    cout << "\nVolume: " << volume << endl;

    return; //exit(0) - saindo/finalizando sub rotina voide
}*/

/*int lern1();

int modulo (int numero);

int main(int argc, char const *argv[])
{  
    int num, modul;

    num = lern1();

    modul = modulo(num);
    cout << modul << endl;
    
    return 0;
}


int lern1(){
    int n1;//variavel interna de saída ou de retorno
    cout << "Digite um número ";
    cin >> n1;

    return n1;//armazena o valor de retorno
}

int modulo (int numero){//apenas váriaveis de entrada
    int modu;//variavel de saida ou de retorno
    if(numero < 0)
        modu = numero * -1;
    else 
        modu = numero;

    return modu;
}   
*/

#define txMulta 0.02
//func leitura
double lerValor();
string lerNome();

//função de cálculo
double vlMulta(double vlDivida);
double vlPagar(double multa, double divida);

//func resultado
void mostrar(string nom, double valor, double multa, double vlPagar);


int main(int argc, char const *argv[])
{
    int item;
    double valor;
    string nome;
    double vlmulta, vlpagar;

    setlocale(LC_ALL, "Portuguese");
    
    Menu:
    system("clear");
    
    cout << "\n1 Informe o Valor Dívida e o nome do cliente: ";
    cout << "\n2 Mostrar valor a pagar: ";
    cout << "\n3 Finalizar:";
    cout << "\nitem:";

    switch (item)
    {
    case 1:
        valor = lerValor();
        nome = lerNome();
        vlmulta = vlMulta(valor);
        vlpagar = vlPagar(vlmulta, valor);

        break;
    
    case 2:
        mostrar(nome, valor, vlmulta, vlpagar);

        break;
    
    case 3:
        exit(0);
        break;
    }

    goto Menu;

    return 0;
}


//func leitura
double lerValor(){
    double x;
    cout << "Digite o valor da divida";
    cin >> x;

    return x;
}
string lerNome(){
    string n;
    cout << "\nNome do cliente:";
    cin.ignore();
    getline(cin,n);

    return n;
}

//função de cálculo
double vlMulta(double vlDivida){
    return (txMulta * vlDivida);
}

double vlPagar(double multa, double divida){
    return (multa + divida);
}

//func resultado
void mostrar(string nom, double valor, double multa, double vlPagar){
    system("clear");

    cout << "\n Cliente: " << nom;
    cout << "\n Divida: " << valor;
    cout << "\n Multa: " << multa;
    cout << "\n Valor: " << vlPagar << endl;
    
    system("sleep 5");


}