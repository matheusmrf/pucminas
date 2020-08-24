/*
Exemplo1210 - v0.0. - 17 / 06 / 2020
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

/**
Method10.
*/
void method10 ( )
{
// definir dados
   Matrix <int> int_matrix ( 3, 3 );
   int x = 0;
   int y = 0;
// identificar
   cout << endl << "EXEMPLO1210 - Method10 - v0.0" << endl;
// ler dados
   int_matrix.fread ( "MATRIX1.TXT" );
// mostrar dados
   cout << "\nMatrix\n";
   int_matrix.print ( );
// operar dados
   for ( int x = 0; x < int_matrix.getRows ( ); x=x+1 )
   {
      for ( int y = 0; y < int_matrix.getColumns ( ); y=y+1 )
      {
         int_matrix.set ( x, y, int_matrix.get ( x, y ) * (-1) );
      } // end for
   } // end for
// mostrar dados
   cout << "\nMatrix\n";
   int_matrix.print ( );
// encerrar
   pause ( "Apertar ENTER para continuar" );
} // fim method10 ( )


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
      cout << "EXEMPLO1210 - Programa - v0.0\n " << endl;
   // mostrar opcoes
      cout << "Opcoes " << endl;
      cout << " 0 - parar " << endl;
      cout << " 1 - matriz 3 = matriz 1 * matriz 2" << endl;
   
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
            method10 ( );
         
         default:
            cout << endl << "ERRO: Valor invalido." << endl;
      } // fim escolher
   }
   while ( x != 0 );
// encerrar
   pause ( "Apertar ENTER para terminar" );
   return ( 0 );
} // fim main( )
