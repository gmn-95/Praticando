/*
2 - A partir da leitura dos diagramas do programa 4 faça o código fonte
estruturado completo.

Quadro resumo das Variáveis
1 - tecla, a, b, c, s, ah
2 - tecla, a, b, c
3 - s = (a + b + c) / 2; ah = raiz(s * (s - a) * (s - b) * (s - c) )
4 - a, b, c, s, ah

*/

#include "iostream"
#include "math.h"
#include "iomanip"
#include "cstdlib"

using namespace std;

//Quadro resumo das Sub-rotinas
double ler_a();// ler o valor de A
double ler_b();// ler o valor de b
double ler_c();// ler o valor de c
double cal_s(double a, double b, double c);// calcular o valor de S
double cal_ah(double a, double b, double c, double s);// calcular o valor de ah
void exibir(double a, double b, double c, double s, double ah);// exibir os resultados na tela

int main() {
  int tecla;
  double a, b, c, s, ah;

  Menu:
  system("clear");
  cout << "*** MENU INICIAL ***";
  cout << "\n1 - Ler..........";
  cout << "\n2 - Calcular.....";
  cout << "\n3 - Exibir.......";
  cout << "\n4 - Sair.........";
  cout << "\n --> ";
  cin >> tecla;

  switch (tecla)
  {
  case 1:
    system("clear");
    a = ler_a();
    b = ler_b();
    c = ler_c();
    goto Menu;
    break;
  
  case 2:
    system("clear");
    cout << "\nCalculando...\n";
    s = cal_s(a, b, c);
    ah = cal_ah(a, b, c, s);
    system("sleep 5");
    goto Menu;
    break;

  case 3:
    system("clear");
    exibir(a, b, c, s, ah);
    system("sleep 5");
    goto Menu;
    break;

  default:
    system("clear");
    cout << "Programa finalizado!\n";
    exit(0);
    break;
  } 

  return 0;
}

double ler_a(){
  double va;
  cout << "Digite um valor para A: ";
  cin >> va;

  return va;
}

double ler_b(){
  double vb;
  cout << "Digite um valor para B: ";
  cin >> vb;

  return vb;
}

double ler_c(){
  double vc;
  cout << "Digite um valor para B: ";
  cin >> vc;

  return vc; 
}

double cal_s(double a, double b, double c){
  double s;
  s = (a + b + c) / 2;

  return s;
}

double cal_ah(double a, double b, double c, double s){
  double ah;
  ah = sqrt(s * (s - a) * (s - b) * (s - c));

  return ah;
}

void exibir(double a, double b, double c, double s, double ah){
  cout << fixed << setprecision(1);
  cout << "a: " << a << "\n";
  cout << "b: " << b << "\n";
  cout << "c: " << c << "\n";
  cout << "s: " << s << "\n";
  cout << "ah: " << ah << endl;

}