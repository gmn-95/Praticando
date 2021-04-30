#include "iostream"
#include "cstdlib"
#include "math.h"
#include "string"
#include "iomanip"

using namespace std; //diretiva

#define pi 3.14

//quadro resumo das sub rotinas
double comprimento(); //ler o comprimento do circulo
double calcRaio(double comprimento); //calcular o raio do circulo
double CalcDiametro(double r);// calcular o diametro do circulo
double areaCirc(double area); //calcular a area do circulo
void mostrar(double comp, double dia, double rai, double area);//mostrar a area, diametro, raio, area

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");
    system("clear");

    int item;
    double valorComprimento, valorRaio, valorDiametro, valorArea;

    Menu:
    system("clear");
    cout << "\n1 - Ler o comprimento do Circulo..................";
    cout << "\n2 - Calcular o raio, diametro e área do circulo...";
    cout << "\n3 - Mostrar resultado.............................";
    cout << "\n4 - Finalizar Programa............................";
    cout << "\n--> ";
    cin >> item;

    switch (item)
    {
    case 1:
        system("clear");
        valorComprimento = comprimento();
        goto Menu;
        break;
    
    case 2:

        valorRaio = calcRaio(valorComprimento);
        valorDiametro = CalcDiametro(valorRaio);
        valorArea = areaCirc(valorRaio);

        system("clear");
        cout << "\nCalculando..." << endl;
        system("sleep 5");
        system("clear");
        cout << "\nCalculado com Sucesso!" << endl;
        system("sleep 3");

        goto Menu;
        break;
    
    case 3: 
        system("clear");
        mostrar(valorComprimento, valorRaio, valorDiametro, valorArea);
        system("sleep 5");
        goto Menu;
        break;

    case 4:
        cout << "\nPrograma finalizado!\n\n" << endl;
        exit(0);

    default:
        cout << "\nValor inválido! Tente novamente!\n";
        system("sleep 5");
        system("clear");
        goto Menu;

        break;
    }
    
    return 0;
}

//ler o comprimento do circulo
double comprimento(){

    double x;
    cout << "\nDigite o comprimento do Circulo: ";
    cin >> x;

    return x;
}

//calcular o raio do circulo
double calcRaio(double varComprimento){
    double raio;
    raio = varComprimento / (2 * pi);

    return raio;
}

// calcular o diametro do circulo
double CalcDiametro(double varRaio){
    return (2 * varRaio);
}

//calcular a area do circulo
double areaCirc(double varRaio){
    double area;

    area = pi * pow(varRaio, 2);

    return area;
}

//mostrar a area, diametro, raio, area
void mostrar(double comp, double rai, double dia,  double area){
    cout << "\nComprimento: " << setprecision(2) << comp << fixed;
    cout << "\nRaio: " << setprecision(2) << rai << fixed;
    cout << "\nDiametro: " << setprecision(2) << dia << fixed;
    cout << "\nArea: " <<setprecision(2) << area << fixed << endl;   
}
