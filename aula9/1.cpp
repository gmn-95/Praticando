/*
1 - Digite no IDE, simplesmente execute o código fonte do programa modelo 3.

Quadro Resumo de variáveis
1 - a, b, c, delta, tecla, x1, x2, val_A, val_B, val_C
2 - tecla, a, b, c
3 - delta = b * b * 4 * a * c; x1 = -b + raiz(delta)/2*a; x2 = -b - raiz(delta)/2*a
4 - x1, x2
*/

#include "iostream"
#include "math.h"
#include "iomanip"
#include "cstdlib"

using namespace std;

//Quadro resumo das funções
double ler_A();//ler valor de A
double ler_B();//ler valor de b
double ler_C();//ler valor de c
double calcDelta(double a, double b, double c);//calcular o delta
double calcX1(double a, double b, double delta);//calcular x1
double calcX2(double a, double b, double delta);//calcular x2
void exibir(double x1, double x2, double delta);//mostrar o delta, x1 e x2
void menuControle();

int main() {

  setlocale(LC_ALL, "Portuguese");
  system("clear");

  menuControle();

  return 0;
}

double ler_A(){

  double a;
  cout << "Digite o valor de A: ";
  cin >> a;

  if(a == 0){
    cout << "A não poderá ser zero!\n";
    cout << "Programa finalizado!\n";
    exit(0);
  }
  else{
    return a;
  }
}

double ler_B(){

  double b;
  cout << "\nDigite o valor de B: ";
  cin >> b;

  return b;
}

double ler_C(){

  double c;
  cout << "\nDigite o valor de C: ";
  cin >> c;

  return c;
}

double calcDelta(double a, double b, double c){

  double delta;
  delta = pow(b, 2) - 4 * a * c;

  if(delta < 0){
    cout << "Delta não pode ser negativo!\n\n";
    cout << "Programa finalizado!\n";
    exit(0);
  }
  else{
    return delta;
  }
}

double calcX1(double a, double b, double delta){

  double x1;
  x1 = -b + sqrt(delta) / 2 * a;
  return x1;
}

double calcX2(double a, double b, double delta){

  double x2;
  x2 = -b - sqrt(delta) / 2 * a;
  return x2;
}

void exibir(double x1, double x2, double delta){

  cout << fixed << setprecision(0);
  cout << "O valor do Delta é: " << delta << "\n";
  cout << "O valor de x1 é: " << x1 << "\n";
  cout << "O valor de x2 é: " << x2 << endl;

}

void menuControle(){
  int tecla;
  double val_A, val_B, val_C, delta, x1, x2;

  Menu:
  cout << "*** MENU DE CONTROLE ***";
  cout << "\n1 - Ler dados..........";
  cout << "\n2 - Calcular...........";
  cout << "\n3 - Exibir Resultados..";
  cout << "\n4 - Sair...............";
  cout << "\n --> ";
  cin >> tecla;

  switch (tecla)
  {
    case 1:
      system("clear");
      val_A = ler_A();
      val_B = ler_B();
      val_C = ler_C();
      system("clear");
      goto Menu;

      break;

    case 2:
      system("clear");
      cout << "\nCalculando...\n";
      system("sleep 4");
      system("clear");
      
      delta = calcDelta(val_A, val_B, val_C);
      x1 = calcX1(val_A, val_B, delta);
      x2 = calcX2(val_A, val_B, delta);
      goto Menu;

      break;

    case 3:
      system("clear");
      exibir(x1, x2, delta);
      system("sleep 5");
      system("clear");
      goto Menu;

      break;

    default:
      cout << "\nPROGRAMA FINALIZADO!";
      exit(0);
      break;
  }
}
