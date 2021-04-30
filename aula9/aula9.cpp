/*
Crie um programa estruturado para ler o
nome e o salário de uma pessoa.
Defina uma taxa de aumento inicial de 10%, ao
final exiba o nome, o salário e o novo salário
calculado com uma taxa de 10% de
aumento.

Quadro Resumo de variáveis
1) nome, salnovo, salatual, taxa = 0.1
2) nome, salatual
3) salnovo = salatual * taxa + salatual
4) nome, salatual, salnovo

Todo programa tem sub rotinas de leitura, calculo e exibição
*/

#include "iostream"
#include "cstdlib"
#include "string"
#include "iomanip"
using namespace std;

double const taxa = 0.1;

// Declarações/ Quadro resumo de sub rotinas
 string lerNome(); // função para ler e armazenar o nome
 double lerSal(); // função para ler e armazenar o salario
 double calNovoSal( double salatual );// calcular novo salario
 void mostrar(double salnovo, double salatual, string nome);// mostrar tudo
 void menu_controle(); // sub rotina de controle menu


int main ()
{
   setlocale(LC_ALL, "Portuguese") ;
   menu_controle();
   return 0;
}

// Código das sub rotinas
string lerNome()
{
   string nom_;
   cout << "\nDigite o nome:";
   cin.ignore();// ignora o enter do cin anterior
   getline(cin, nom_);
   return nom_;
}

double lerSal()
{
   double sal_;
   cout << "\nDigite o salário:";
   cin >> sal_;

   return sal_;
}

double calNovoSal( double salatual )
{
   double salnovo;

   salnovo = salatual * taxa + salatual;

   return salnovo;
}

void mostrar(double salnovo, double salatual, string nome)
{
   system("clear");
   cout << "\n*** Resultados ***";
   cout << "\nNome do cliente:" << nome;

   cout << fixed << setprecision(2);
   cout << "\nNovo salário:" << salnovo;
   cout << "\nSalário Anterior:" << salatual;
   cout << "\n*** Fim do relatório de saída ***" << endl;
   system("sleep 5");
}

void menu_controle()
{
   // criando as variaveis de funções
   string nome;
   double salatual, salnovo;

   int item = 0;
   Menu:
   system("clear");
   cout << "\n** Menu de Controle ***";
   cout << "\n1 ler dados...";
   cout << "\n2 Resultados...";
   cout << "\n3 Finalizar...";
   cout << "\nItem:";
   cin >> item;
   
   switch ( item )
   {
   case 1: nome = lerNome();
   salatual = lerSal();
   salnovo = calNovoSal ( salatual );
   break;

   case 2: mostrar(salnovo, salatual, nome);
   break;

   case 3: exit(0);
   break;
   }

   goto Menu; // Exibir o menu novamente
}
