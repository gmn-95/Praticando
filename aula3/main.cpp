//aula 3.
//questão D
//aluno: Gustavo
#include <iostream> //contêm os elementos necessários para a exe de operações de leitura e impressão (I/O)
#include <math.h>
#include <iomanip> // maninpulação de saída de dados
#include <string.h> //biblioteca de strings
#include <cstdlib>
#define pi 3.14

using namespace std;

int main(int argc, char** argv) {

    system("cls");
    setlocale(LC_ALL, "Portuguese");

    double diametro, perimetro, raio, area;

    cout << "Digite o perimetro: ";
    cin >> perimetro;

    diametro = perimetro / pi;
    raio = diametro / 2;
    area = pow(raio, 2) * pi;

    cout << "A área é: " << area << endl;

    return 0;
}