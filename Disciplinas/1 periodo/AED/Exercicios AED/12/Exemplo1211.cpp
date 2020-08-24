/*
Exemplo1211 - v0.0. - 17 / 06 / 2020
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

void method11 ( )
{
   cout << "\nEXEMPLO1111 - Method11 - v0.0\n" << endl;
   FILE *arquivo;
   arquivo = fopen("DADOS.TXT","w");
   
   int inferior = 0;
   cout << "Inferior: ";
   std::cin >> inferior;
   
   int superior = 0; 
   cout << "Superior: ";
   std::cin >> superior;
   
   int linha = 0; 
   cout << "Linhas: ";
   std::cin >> linha;
   
   int coluna = 0; 
   cout << "Colunas: ";
   std::cin >> coluna;
   
   int matrix[linha][coluna];
   
   fprintf(arquivo, "%d\n", linha);
   fprintf(arquivo, "%d\n", coluna);

   for ( int t = 0; t < linha; t++)
   {
      for ( int s = 0; s < coluna; s++)
      { 
         matrix[t][s] = rand() % superior + inferior;
         cout << matrix[t][s] << "\t";
         fprintf(arquivo, "%d\n", matrix[t][s]);
      }
      cout << endl;
   } 
   
   pause ( "Apertar ENTER para continuar" );
   fclose(arquivo);
} // fim method11 ( )

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
      cout << "EXEMPLO1211 - Programa - v0.0\n " << endl;
   // mostrar opcoes
      cout << "Opcoes " << endl;
      cout << " 0 - parar " << endl;
      cout << " 1 - rand() com matrix" << endl;
   
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
            method11 ( );
         
         default:
            cout << endl << "ERRO: Valor invalido." << endl;
      } // fim escolher
   }
   while ( x != 0 );
// encerrar
   pause ( "Apertar ENTER para terminar" );
   return ( 0 );
} // fim main( )
