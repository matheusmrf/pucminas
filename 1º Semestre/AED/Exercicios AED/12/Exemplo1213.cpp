/*
Exemplo1213 - v0.0. - 17 / 06 / 2020
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

bool comparador(int matrix[linha][coluna], int identidade[linha][coluna], int linha, int coluna)
{
   bool result = false;
   
   for ( int t = 0; t < linha; t++)
   {
      for ( int s = 0; s < coluna; s++)
      { 
         if(matrix[t][s] != identidade[t][s])
         {
            result = true;
            s = coluna;
            t = linha;
         }
      }
      cout << endl;
   }
   
   return result;
}


void method13 ( )
{
   cout << "\nEXEMPLO1113 - Method13 - v0.0\n" << endl;
   ifstream arquivo; // input file
   arquivo.open ( "DADOS.TXT" );
   
   int linha = 0; 
   arquivo >> linha;
   
   int coluna = 0; 
   arquivo >> coluna;
   
   int matrix[linha][coluna];
   cout << endl << "Matriz Selecionada: ";
   cout << endl;
   for ( int t = 0; t < linha; t++)
   {
      for ( int s = 0; s < coluna; s++)
      { 
         arquivo >> matrix[t][s];
         std::cout << matrix[t][s] << "\t";
      }
      cout << endl;
   } 
   cout << endl;
   
   cout << endl << "Matriz a ser comparada: ";
   cout << endl;
   int identidade[linha][coluna];
   for ( int t = 0; t < linha; t++)
   {
      for ( int s = 0; s < coluna; s++)
      { 
         if(t == s)
         {
            identidade[t][s] = 1;
            std::cout << identidade[t][s] << "\t";
         }
         else
         {
            identidade[t][s] = 0;
            std::cout << identidade[t][s] << "\t";
         }
      }
      cout << endl;
   }
   cout << endl;
   bool result = false;
   result = comparador(matrix[linha][coluna], identidade[linha][coluna, linha, coluna);
   
   if(result == true)
   {
      cout << "Matrix igual identidade" << endl;
   }
   else
   {
      cout << "Matrix diferente de identidade" << endl;
   }
   pause ( "Apertar ENTER para continuar" );
   arquivo.close();
} // fim method13 ( )

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
      cout << "EXEMPLO1213 - Programa - v0.0\n " << endl;
   // mostrar opcoes
      cout << "Opcoes " << endl;
      cout << " 0 - parar " << endl;
      cout << " 1 - matrix identidade" << endl;
   
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
            method13 ( );
         
         default:
            cout << endl << "ERRO: Valor invalido." << endl;
      } // fim escolher
   }
   while ( x != 0 );
// encerrar
   pause ( "Apertar ENTER para terminar" );
   return ( 0 );
} // fim main( )
