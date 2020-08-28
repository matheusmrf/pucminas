/*
Exemplo1107 - v0.0. - 10 / 06 / 2020
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
/**
Method01 - Mostrar certa quantidade de valores.
*/
void method01 ( )
{
// definir dados
   Array <int> int_array ( 5 );
   int_array.set ( 0, 1 );
   int_array.set ( 1, 2 );
   int_array.set ( 2, 3 );
   int_array.set ( 3, 4 );
   int_array.set ( 4, 5 );
// identificar
   cout << "\nEXEMPLO1101 - Method01 - v0.0\n" << endl;
// mostrar dados
   int_array.print ( );
// reciclar espaco
   int_array.free ( );
// encerrar
   pause ( "Apertar ENTER para continuar" );
} // fim method01 ( )
/**
Method02.
*/
void method02 ( )
{
// definir dados
   Array <int> int_array ( 5 );
// identificar
   cout << endl << "EXEMPLO1110 - Method02 - v0.0" << endl;
// ler dados
   int_array.read ( );
// mostrar dados
   int_array.print ( );
// reciclar espaco
   int_array.free ( );
// encerrar
   pause ( "Apertar ENTER para continuar" );
} // fim method02 ( )
/**
Method03.
*/
void method03 ( )
{
// definir dados
   Array <int> int_array ( 5 );
// identificar
   cout << endl << "EXEMPLO1110 - Method03 - v0.0" << endl;
// ler dados
   int_array.read ( );
// mostrar dados
   int_array.fprint ( "INT_ARRAY1.TXT" );
// reciclar espaco
   int_array.free ( );
// encerrar
   pause ( "Apertar ENTER para continuar" );
} // fim method03 ( )
/**
Method04.
*/
void method04 ( )
{
// definir dados
   Array <int> int_array ( 5 );
// identificar
   cout << endl << "EXEMPLO1110 - Method04 - v0.0" << endl;
// ler dados
   int_array.fread ( "INT_ARRAY1.TXT" );
// mostrar dados
   int_array.print ( );
// reciclar espaco
   int_array.free ( );
// encerrar
   pause ( "Apertar ENTER para continuar" );
} // fim method04 ( )
/**
Method05.
*/
void method05 ( )
{
// definir dados
   int other [ ] = { 1, 2, 3, 4, 5 };
   Array <int> int_array ( 5, other );
// identificar
   cout << endl << "EXEMPLO1110 - Method05 - v0.0" << endl;
// mostrar dados
   cout << "\nCopia\n" << endl;
   int_array.print ( );
// reciclar espaco
   int_array.free ( );
// encerrar
   pause ( "Apertar ENTER para continuar" );
} // fim method05 ( )
/**
Method06.
*/
void method06 ( )
{
// definir dados
   Array <int> int_array1 ( 1 );
// identificar
   cout << endl << "EXEMPLO1110 - Method06 - v0.0" << endl;
// ler dados
   int_array1.fread ( "INT_ARRAY1.TXT" );
// mostrar dados
   cout << "\nOriginal\n" << endl;
   int_array1.print ( );
// criar copia
   Array <int> int_array2 ( int_array1 );
// mostrar dados
   cout << "\nCopia\n" << endl;
   int_array2.print ( );
// reciclar espaco
   int_array1.free ( );
   int_array2.free ( );
// encerrar
   pause ( "Apertar ENTER para continuar" );
} // fim method06 ( )
/**
Method07.
*/
void method07 ( )
{
// definir dados
   Array <int> int_array1 ( 1 );
   Array <int> int_array2 ( 1 );
// identificar
   cout << endl << "EXEMPLO1110 - Method07 - v0.0" << endl;
// ler dados
   int_array1.fread ( "INT_ARRAY1.TXT" );
// mostrar dados
   cout << "\nOriginal\n" << endl;
   int_array1.print ( );
// copiar dados
   int_array2 = int_array1;
// mostrar dados
   cout << "\nCopia\n" << endl;
   int_array2.print ( );
// reciclar espaco
   int_array1.free ( );
   int_array2.free ( );
// encerrar
   pause ( "Apertar ENTER para continuar" );
} // fim method07 ( )
/**
Method08.
*/
void method08 ( )
{
// identificar
   cout << endl << "EXEMPLO1101 - Method08 - v0.0" << endl;
// encerrar
   pause ( "Apertar ENTER para continuar" );
} // fim method08 ( )
/**
Method09.
*/
void method09 ( )
{
// identificar
   cout << endl << "EXEMPLO1101 - Method09 - v0.0" << endl;
// encerrar
   pause ( "Apertar ENTER para continuar" );
} // fim method09 ( )
/**
Method10.
*/
void method10 ( )
{
// identificar
   cout << endl << "EXEMPLO1101 - Method10 - v0.0" << endl;
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
      cout << "EXEMPLO1101 - Programa - v0.0\n " << endl;
   // mostrar opcoes
      cout << "Opcoes " << endl;
      cout << " 0 - parar " << endl;
      cout << " 1 - mostrar dados inteiros em arranjo " << endl;
      cout << " 2 - leitura do array + mostrar array" << endl;
      cout << " 3 - leitura do array + print no arquivo" << endl;
      cout << " 4 - recebe o array do arquivo + print na tela" << endl;
      cout << " 5 - copia do array + print na tela" << endl;
      cout << " 6 - copia do array1 e cola no array2" << endl;
      cout << " 7 - copia e cola igual o de cima de outra forma" << endl;
      cout << " 8 - " << endl;
      cout << " 9 - " << endl;
      cout << "10 - " << endl;
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
            method01 ( );
            break;
         case 2:
            method02 ( );
            break;
         case 3:
            method03 ( );
            break;
         case 4:
            method04 ( );
            break;
         case 5:
            method05 ( );
            break;
         case 6:
            method06 ( );
            break;
         case 7:
            method07 ( );
            break;
         case 8:
            method08 ( );
            break;
         case 9:
            method09 ( );
            break;
         case 10:
            method10 ( );
            break;
         default:
            cout << endl << "ERRO: Valor invalido." << endl;
      } // fim escolher
   }
   while ( x != 0 );
// encerrar
   pause ( "Apertar ENTER para terminar" );
   return ( 0 );
} // fim main( )
