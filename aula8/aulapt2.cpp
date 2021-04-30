#include "iostream"
#include "cstdlib"
#include "string"
using namespace std;

#define txMulta 0.02

// Fazer as declarações das sub rotinas
//func leitura
   double lerValor();
   string lerNome();
//função de cálculo
   double vlMulta ( double vlDivida );
   double vlPagar (double multa, double divida );
//func resultado
   void mostrar ( string nom, double valor, double multa, double vlPagar );

int main()
{   int item;
    string nome;
    double valor, vlmulta, vlpagar ;

    setlocale(LC_ALL, "Portuguese");

    Menu:
    system("clear");
    cout << "\n1 ler o valor e nome do cliente...";
    cout << "\n2 Mostrar valor a pagar...";
    cout << "\n3 Finalizar...";
    cout << "\nitem:";
    cin >> item;

    switch (item)
    {
        case 1: valor = lerValor();
                nome = lerNome();
                vlmulta = vlMulta ( valor );
                vlpagar = vlPagar ( vlmulta, valor );
                break;

        case 2: mostrar ( nome,  valor,  vlmulta, vlpagar );
                break;

        case 3: exit(0); break;
    }
    goto Menu;

    return 0;
}
//func leitura
   double lerValor()
   {
       double x;
       cout << "\nDigite o valor da dívida:";
       cin >> x;
       return x;
   }


   string lerNome()
   {
       string n;
       cout << "\nNome do cliente:";
       cin.ignore(); // ignora o enter do cin anterior
       getline(cin, n);

       return n;
   }
//função de cálculo
   double vlMulta ( double vlDivida )
   {
       return ( txMulta * vlDivida );

   }
   double vlPagar (double multa, double divida )
   {
       return ( multa + divida );
   }

//func resultado
   void mostrar ( string nom, double valor, double multa, double vlPagar )
   {
       system("clear");
       cout << "\n Cliente:" << nom;
       cout << "\n Divida.:" << valor;
       cout << "\n Multa..:" << multa;
       cout << "\n Valor...:" << vlPagar << endl;
       system("sleep 5");
   }
