/*
Exemplo0601 - v0.0. - 29 / 05 / 2020
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

int main ( )
{
// definir dado
   int x = 0; // definir variavel com valor inicial
// repetir até desejar parar
   do
   {
   // identificar
      IO_id ( "Exemplo0601 - Programa - v0.0" );
   // ler do teclado
      IO_println ( "Opcoes" );
      IO_println ( " 0 - parar" );
      IO_println ( " 1 - Mostrar certa quantidade de valores recursivamente" );
      IO_println ( " 2 - " );
      IO_println ( " 3 - " );
      IO_println ( " 4 - " );
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

         default:
            IO_println ( "ERRO: Valor invalido." );
      } // fim escolher
   }
   while ( x != 0 );
// encerrar
   IO_pause ( "Apertar ENTER para terminar" );
   return ( 0 );
} // fim main( )
