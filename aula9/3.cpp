/*
3 - Faça um programa estruturado com menu e sub rotinas, para o seguinte
caso: Um capital (ValorCapital) aplicado a juros (JUROS) simples durante 2
anos (Periodo), sob taxa de juros de 5% ao mês, gerou um montante
(Montante) de R$ 26.950,00. Determine o valor do capital aplicado. (Verifique
na internet a fórmula do juros simples, sugestão site Brasil Escola)

Quadro resumo das variáveis
1 - j, c, i, t, m, parte1, taxaDec, meses, anos
2 - tecla
3 - taxa = taxaDec / 100; meses =  t * 12;  part1 = (1 + (taxa * meses)); c = m / part1;
4 - c, m, i, t, j, anos
*/

#include "iostream"
#include "math.h"
#include "iomanip"
#include "cstdlib"

using namespace std;


//Quadro resumo das sub-rotinas
double receber_montante();// receber o montante pelo usuário
double receber_tempo();// receber o tempo pelo usuário
double receber_taxa();// receber a taxa pelo usuário
double transf_anos_em_meses(double t);//transformar os anos informados em meses para realizar o calculo
double trasnf_taxa_em_decimal(double taxaDec);//trasnformar a porcentagem informada em decimal
double calc_capital(double m, double meses, double taxa);// calcular o capital aplicado
void exibir(double m, double t, double i, double c, double anos);// exibir montante, tempo em meses e em anos...
//...taxa, e o capital na tela
void menu();//reune todas as sub-rotinas, organiza e cria um menu de controle para o usuário

int main() {
  menu();
  return 0;
}

double receber_montante(){
 
  double m;
  cout << "Digite o valor do montante: R$";
  cin >> m;

  return m;
}

double receber_tempo(){
 
  double t;
  cout << "Digite o tempo em ano(s): ";
  cin >> t;

  return t;
}

double receber_taxa(){
  
  double i;
  cout << "Digite a taxa em porcentagem %: ";
  cin >>  i;

  return i;
}

double transf_anos_em_meses(double t){
  
  double meses;
  meses =  t * 12;

  return meses;
}

double trasnf_taxa_em_decimal(double taxaDec){
  double taxa;
  taxa = taxaDec / 100; 
  return taxa;
}

double calc_capital(double m, double meses, double taxa){
  double part1, c;
  part1 = (1 + (taxa * meses));
  c = m / part1;

  return c;
}

void exibir(double m, double t, double i, double c, double anos){
  
  cout << "O montante é: R$" << m << "\n";
  cout << "O tempo é: " << t << " meses ou " << anos << " ano(s)" << "\n";
  cout << "A taxa é: " << i << "%" <<  "\n";
  cout << "O capital aplicado foi de: R$" << c << "\n";
}

void menu(){
  
  double montante, capital, taxa, anos, meses, taxaDec;
  int tecla;

  menu:
  system("clear");
  cout << "*** Menu de Controle ***";
  cout << "\n1 - Inserir informações...";
  cout << "\n2 - Calcular..............";
  cout << "\n3 - Exibir................";
  cout << "\n4 - Sair..................";
  cout << "\n --> ";
  cin >> tecla;

  switch (tecla)
  {
  case 1:
    system("clear");
    
    montante = receber_montante();
    anos = receber_tempo();
    taxa = receber_taxa();
    goto menu;
    break;
  
  case 2:
    system("clear");
    cout << "\nCalculando..." << endl;

    meses = transf_anos_em_meses(anos);
    taxaDec = trasnf_taxa_em_decimal(taxa);
    capital = calc_capital(montante, meses, taxaDec);

    system("sleep 5");
    goto menu;

    break;

  case 3:
    system("clear");
    exibir(montante, meses, taxa, capital, anos);

    cin.ignore();
    cout << "\n\nPressione qualquer tecla para voltar ao menu..." << endl;
    getchar();
    
    goto menu;

  default:

    cout << "\nPrograma finalizado!" << endl;
    exit(0);
    break;
  }

}