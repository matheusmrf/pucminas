/*
Exemplo1215 - v0.0. - 17 / 06 / 2020
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

void method15 ( )
{
   cout << "\nEXEMPLO1115 - Method15 - v0.0\n" << endl;
   ifstream arquivo1;
   ifstream arquivo2;
   arquivo1.open ( "DADOS1.TXT" );
   arquivo2.open ( "DADOS2.TXT" );
   
   cout << endl;
   
   cout <<"Matrix 1: " << endl;

   int linha1 = 0; 
   arquivo1 >> linha1;
   
   int coluna1 = 0; 
   arquivo1 >> coluna1;
   
   cout << endl;
   cout <<"Matrix 2: " << endl;

   int linha2 = 0; 
   arquivo2 >> linha2;
   
   int coluna2 = 0; 
   arquivo2 >> coluna2;
   
   cout << endl;

   int matrix1[linha1][coluna1];
   int matrix2[linha2][coluna2];
   int soma[linha1][coluna1];
   
   cout << endl << "Matriz 1: ";
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
   cout << endl << "Matriz 2: ";
   cout << endl;
   for ( int t = 0; t < linha2; t++)
   {
      for ( int s = 0; s < coluna2; s++)
      { 
         arquivo2 >> matrix2[t][s];
         std::cout << matrix2[t][s] << "\t";
      }
      cout << endl;
   }
   cout << endl << "Soma: ";
   cout << endl; 
   if ( linha1 == linha2 && coluna1 == coluna2)
   {
      for ( int t = 0; t < linha1; t++)
      {
         for (int s = 0; s < coluna1; s++)
         {
            soma[t][s] = matrix1[t][s] + matrix2[t][s];
            std::cout << soma[t][s] << "\t";        
         }
         cout << endl;
      }
   }
   cout << endl;
     
   pause ( "Apertar ENTER para continuar" );
   arquivo1.close();
   arquivo2.close();
} // fim method15 ( )
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
      cout << "EXEMPLO1215 - Programa - v0.0\n " << endl;
   // mostrar opcoes
      cout << "Opcoes " << endl;
      cout << " 0 - parar " << endl;
      cout << " 1 - somar matrizes" << endl;
   
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
