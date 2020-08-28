/*
Exemplo1207 - v0.0. - 17 / 06 / 2020
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
Method07.
*/
void method07 ( )
{
// definir dados
   Matrix <int> int_matrix1 ( 1, 1 );
   Matrix <int> int_matrix2 ( 1, 1 );
// identificar
   cout << endl << "EXEMPLO1210 - Method07 - v0.0" << endl;
// ler dados
   int_matrix1.fread ( "MATRIX1.TXT" );
// mostrar dados
   cout << "\nMatrix_1\n";
   int_matrix1.print ( );
// copiar dados
   int_matrix2 = int_matrix1;
// mostrar dados
   cout << "\nMatrix_2\n";
   int_matrix2.print ( );
// testar condicao
   cout << "Diferentes = " << (int_matrix1!=int_matrix2) << endl;
// alterar dados
   int_matrix2.set ( 0, 0, (-1) );
// mostrar dados
   cout << "\nMatrix_1\n";
   int_matrix1.print ( );
// mostrar dados
   cout << "\nMatrix_2\n";
   int_matrix2.print ( );
// testar condicao
   cout << "Diferentes = " << (int_matrix1!=int_matrix2) << endl;
// encerrar
   pause ( "Apertar ENTER para continuar" );
} // fim method07 ( )

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
      cout << "EXEMPLO1207 - Programa - v0.0\n " << endl;
   // mostrar opcoes
      cout << "Opcoes " << endl;
      cout << " 0 - parar " << endl;
      cout << " 1 - Diferentes?" << endl;
   
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
            method07 ( );
         
         default:
            cout << endl << "ERRO: Valor invalido." << endl;
      } // fim escolher
   }
   while ( x != 0 );
// encerrar
   pause ( "Apertar ENTER para terminar" );
   return ( 0 );
} // fim main( )
