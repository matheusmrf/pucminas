/*
Exemplo1115 - v0.0. - 11 / 06 / 2020
Author: Matheus Rangel de Figueiredo - 699742
*/
// dependencias
#include <iostream> // std::cin, std::cout, std:endl
#include <limits> // std::numeric_limits
#include <string> // para cadeias de caracteres
// ----------------------------------------------- definicoes globais
void pause ( std::string text )
{
   std::string dummy;
   std::cin.clear ( );
   std::cout << std::endl << text;
   std::cin.ignore( );
   std::getline(std::cin, dummy);
   std::cout << std::endl << std::endl;
} // end pause ( )
// ----------------------------------------------- classes / pacotes
#include "myarray.hpp"
using namespace std;
using std::ifstream;
// ----------------------------------------------- metodos
/**
Method00 - nao faz nada.
*/
void method00 ( )
{
// nao faz nada
} // fim method00 ( )

void method15 ( )
{ 
   double soma = 0;
   cout << "\nEXEMPLO1115 - Method15 - v0.0\n" << endl;
   ifstream arquivo; // input file
   int n = 0;
   arquivo.open ( "DADOS.TXT" );
   double tamanho;
   arquivo >> tamanho;
   int array[(int)tamanho];
   for ( int i = 0; i < tamanho; i++)
   {
      arquivo >> array[i];
   }
   std::cout << endl;
   std::cout << endl;
   for ( int i = 0; i < tamanho; i++)
   {
      std::cout << array[i] << "\t";
   }
   for ( int t = 0; t < tamanho ; t++)
   {
      soma = soma + array[t];
   }
   double media = 0;
   media = ( soma / tamanho ) ;
   cout << "\nMedia do array: ";
   cout << media << endl;
   pause ( "Apertar ENTER para continuar" );
   arquivo.close();
}

// ----------------------------------------------- acao principal
/*
Funcao principal.
@return codigo de encerramento
*/
int main ( int argc, char** argv )
{
// definir dado
   int x = 0; // definir variavel com valor inicial
// repetir at� desejar parar
   do
   {
   // identificar
      cout << "EXEMPLO1115 - Programa - v0.0\n " << endl;
   // mostrar opcoes
      cout << "Opcoes " << endl;
      cout << " 0 - parar " << endl;
      cout << " 1 - media do array" << endl;
   
   // ler do teclado
      cout << endl << "Entrar com uma opcao: ";
      cin >> x;
   // escolher acao
      switch ( x )
      {
         case 0:
            method00 ( );
            break;
         case 1:
            method15 ( );
         
         default:
            cout << endl << "ERRO: Valor invalido." << endl;
      } // fim escolher
   }
   while ( x != 0 );
// encerrar
   pause ( "Apertar ENTER para terminar" );
   return ( 0 );
} // fim main( )
