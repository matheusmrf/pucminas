/*
Exemplo1218 - v0.0. - 17 / 06 / 2020
Author: Matheus Rangel de Figueiredo - 699742
*/
// dependencias
#include "mymatrix.hpp"
#include "myarray.hpp"
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

using namespace std;
// ----------------------------------------------- metodos
/**
Method00 - nao faz nada.
*/
void method00 ( )
{
// nao faz nada
} // fim method00 ( )


void method18 ( )
{
   cout << "\nEXEMPLO1118 - Method18 - v0.0\n" << endl;
   ifstream arquivo1;
   arquivo1.open ( "DADOS1.TXT" );
   
   int linha1 = 0; 
   arquivo1 >> linha1;
   
   int coluna1 = 0; 
   arquivo1 >> coluna1;
   
   int procurar = 0;
   cout << "Qual valor a ser encontrado: ";
   cin >> procurar;
   cout << endl;
   
   int matrix1[linha1][coluna1];

   cout << "Matriz: ";
   cout << endl;
   for ( int t = 0; t < linha1; t++)
   {
      for ( int s = 0; s < coluna1; s++)
      { 
         arquivo1 >> matrix1[t][s];
         std::cout << matrix1[t][s] << "\t";
      }
      cout << endl;
   } 
   
   int contador = 0;
   for ( int t = 0; t < linha1 ; t++)
   {
      for ( int s = 0; s < coluna1; s++)
      {
         if ( matrix1[t][s] == procurar)
         {
            contador++; 
         }
      }
   }
   cout << "\nNumero [ " << procurar << " ] aparece na matrix [ " << contador << " ] vezes." << endl;
   
   cout << endl;
   
   pause ( "Apertar ENTER para continuar" );
   arquivo1.close();
} // fim method18 ( )

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
      cout << "EXEMPLO1218 - Programa - v0.0\n " << endl;
   // mostrar opcoes
      cout << "Opcoes " << endl;
      cout << " 0 - parar " << endl;
      cout << " 1 - em qual linha da matriz se encontra certo valor" << endl;
   
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
            method18 ( );
         
         default:
            cout << endl << "ERRO: Valor invalido." << endl;
      } // fim escolher
   }
   while ( x != 0 );
// encerrar
   pause ( "Apertar ENTER para terminar" );
   return ( 0 );
} // fim main( )
