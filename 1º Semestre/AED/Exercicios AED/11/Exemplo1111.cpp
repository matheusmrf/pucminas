/*
Exemplo1111 - v0.0. - 10 / 06 / 2020
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
   cout << "Insira o inferior do intervalo: ";
   std::cin >> inferior;
   
   int superior = 0; 
   cout << "Insira o superior do intervalo: ";
   std::cin >> superior;
   
   int tamanho = 0; 
   cout << "Qual o tamanho do array? ";
   std::cin >> tamanho;
   
   int array[tamanho];
   fprintf(arquivo, "%d\n", tamanho);
   cout << endl << "ARRAY ALEATORIO: " << endl;
   for ( int i = 0; i < tamanho; i++)
   {
      array[i] = rand() % superior + inferior;
      cout << array[i] << endl;
      fprintf(arquivo, "%d\n", array[i]);
   }
   pause ( "Apertar ENTER para continuar" );
   fclose(arquivo);
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
      cout << "EXEMPLO1111 - Programa - v0.0\n " << endl;
   // mostrar opcoes
      cout << "Opcoes " << endl;
      cout << " 0 - parar " << endl;
      cout << " 1 - numeros aleatorios em um array no arquivo" << endl;

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
