#include "iostream"
#include "cstdlib"
#include "math.h"

using namespace std;

int main(int argc, char const *argv[]) {
  setlocale(LC_ALL, "Portuguese");

  int a, b, c, d, aux;

  cout << "Digite o 1º número:\n";
  cin >> a;

  cout << "Digite o 2º número:\n";
  cin >> b;

  cout << "Digite o 3º número:\n";
  cin >> c;

  cout << "Digite o 4º número:\n";
  cin >> d;

  cout << "a: " << a << "\n";
  cout << "b: " << b << "\n";
  cout << "c: " << c << "\n";
  cout << "d: " << d << "\n";

  if(a > b){
    aux = b; b = a; a = aux;
  }

  if(a > c){
    aux = c; c = a; a = aux;
  }

  if(a > d){
    aux = d; d = a; a = aux;
  }

  if(b > c){
    aux = c; c = b; b = aux;
  }

  if(b > d){
    aux = d; d = b; b = aux;
  }

  if( c > d){
    aux = d; d = c; c = aux;
  }


  cout << "------------------------------\n";
  cout << "Valores de a, b, c, d em ordem crescente:\n";
  cout << "a: " << a << "\n";
  cout << "b: " << b << "\n";
  cout << "c: " << c << "\n";
  cout << "d: " << d << "\n";

  return 0;
}
