/*
Exemplo1216 - v0.0. - 17 / 06 / 2020
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

void method16 ( )
{
   cout << "\nEXEMPLO1116 - Method16 - v0.0\n" << endl;
   ifstream arquivo1;
   arquivo1.open ( "DADOS1.TXT" );
   
   int linha1 = 0; 
   arquivo1 >> linha1;
   
   int coluna1 = 0; 
   arquivo1 >> coluna1;
   
   int constante = 0;
   cout << "Constante: ";
   cin >> constante;
   cout << endl;
   
   int resultado = 0;
   
   int matrix1[linha1][coluna1];

   cout << "Matriz 1: ";
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
   cout << endl << "Matriz Operada: ";
   cout << endl;
   
   for ( int t = 0; t < linha1; t++)
   {
      for ( int s = 0; s < coluna1; s++)
      { 
         if(t == 0)
         {
            resultado = matrix1[t][s] +  matrix1[ t + 1 ][s];
            std::cout << resultado << "\t";
         }
         else
         {
            std::cout << matrix1[t][s] << "\t";
         }
      }
      cout << endl;
   } 

   pause ( "Apertar ENTER para continuar" );
   arquivo1.close();
} // fim method16 ( )

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
      cout << "EXEMPLO1216 - Programa - v0.0\n " << endl;
   // mostrar opcoes
      cout << "Opcoes " << endl;
      cout << " 0 - parar " << endl;
      cout << " 1 - operar duas linhas da matriz" << endl;
   
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
            method16 ( );
         
         default:
            cout << endl << "ERRO: Valor invalido." << endl;
      } // fim escolher
   }
   while ( x != 0 );
// encerrar
   pause ( "Apertar ENTER para terminar" );
   return ( 0 );
} // fim main( )
