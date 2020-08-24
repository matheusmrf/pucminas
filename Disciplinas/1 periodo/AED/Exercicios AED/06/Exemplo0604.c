/*
Exemplo0604 - v0.0. - 29 / 05 / 2020
Author: Matheus Rangel de Figueiredo - 699742
*/
// dependencias
#include "io.h" // para definicoes proprias

void method00 ( )
{
// nao faz nada
} // fim method00 ( )
/**
Method01a - Mostrar certa quantidade de valores recursivamente.
@param x - quantidade de valores a serem mostrados
*/
void method01a ( int x )
{
// repetir enquanto valor maior que zero
   if ( x > 0 )
   {
   // mostrar valor
      IO_printf ( "%s%d\n", "Valor = ", x );
   // passar ao proximo
      method01a ( x - 1 ); // motor da recursividade
   } // fim se
} // fim method01a( )
/**
Method01 - Mostrar certa quantidade de valores.
*/
void method01 ( )
{
// definir dado
   int quantidade = 0;
   int valor = 0;
   int controle = 0;
// identificar
   IO_id ( "EXEMPLO0601 - Method01 - v0.0" );
// executar o metodo auxiliar
   method01a ( 5 ); // motor da recursividade
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method01 ( )

/**
Method02a - Mostrar certa quantidade de valores recursivamente.
@param x - quantidade de valores a serem mostrados
*/
void method02a ( int x ) //metodo não faz sentido, ele deveria apresentar 5, 4, 3, 2, 1 (ao contrario, apresentou 1,2,3,4,5)
{
// repetir enquanto valor maior que zero
   if ( x > 0 )
   {
   // passar ao proximo
      method02a ( x - 1 ); // motor da recursividade
   // mostrar valor
      IO_printf ( "%s%d\n", "Valor = ", x );
   } // fim se
} // fim method02a( )
/**
Method02.
*/
void method02 ( )
{
// identificar
   IO_id ( "EXEMPLO0602 - Method02 - v0.0" );
// executar o metodo auxiliar
   method02a ( 5 ); // motor da recursividade
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method02 ( )

/**
Method03a - Mostrar certa quantidade de valores recursivamente.
@param x - quantidade de valores a serem mostrados
*/
void method03a ( int x )
{
// repetir enquanto valor maior que zero
   if ( x > 1 )
   {
   // passar ao proximo
      method03a ( x - 1 ); // motor da recursividade
   // mostrar valor
      IO_printf ( "%s%d\n", "Valor = ", x );

   }
   else
   { // base da recursividade
   // mostrar o ultimo
      IO_printf ( "%s\n", "Valor = 1" );
   } // fim se
} // fim method03a( )
/**
Method03.
*/
void method03 ( )
{
// identificar
   IO_id ( "EXEMPLO0603 - Method03 - v0.0" );
// executar o metodo auxiliar
   method03a ( 5 ); // motor da recursividade
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method03 ( )

/**
Method04a - Mostrar certa quantidade de valores recursivamente.
@param x - quantidade de valores a serem mostrados
*/
void method04a ( int x )
{
// repetir enquanto valor maior que zero
   if ( x > 1 )
   {
   // passar ao proximo
      method04a ( x - 1 ); // motor da recursividade //se eu fizer antes o x - 1 (mostra crescente)
   // mostrar valor
      IO_printf ( "%s%d\n", "Valor = ", 2*(x-1) );
   }
   else
   { // base da recursividade
   // mostrar o ultimo
      IO_printf ( "%s\n", "Valor = 1" );
   } // fim se
} // fim method04a( )
/**
Method04.
*/
void method04 ( )
{
// identificar
   IO_id ( "EXEMPLO0604 - Method04 - v0.0" );
// executar o metodo auxiliar
   method04a ( 5 ); // motor da recursividade
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method04 ( )

int main ( )
{
// definir dado
   int x = 0; // definir variavel com valor inicial
// repetir até desejar parar
   do
   {
   // identificar
      IO_id ( "Exemplo0604 - Programa - v0.0" );
   // ler do teclado
      IO_println ( "Opcoes" );
      IO_println ( " 0 - parar" );
      IO_println ( " 1 - method01" );
      IO_println ( " 2 - method02" );
      IO_println ( " 3 - method03" );
      IO_println ( " 4 - method04" );
      IO_println ( " 5 - " );
      IO_println ( " 6 - " );
      IO_println ( " 7 - " );
      IO_println ( " 8 - " );
      IO_println ( " 9 - " );
      IO_println ( "10 - " );
      IO_println ( "" );
      x = IO_readint ( "Entrar com uma opcao: " );
   // testar valor
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


         default:
            IO_println ( "ERRO: Valor invalido." );
      } // fim escolher
   }
   while ( x != 0 );
// encerrar
   IO_pause ( "Apertar ENTER para terminar" );
   return ( 0 );
} // fim main( )
