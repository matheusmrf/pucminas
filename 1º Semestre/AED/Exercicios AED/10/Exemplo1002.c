/*
 Exemplo1002 - v0.0. - 01 / 06 / 2020
 Author: Matheus Rangel de Figueiredo - 699742
*/
// dependencias
#include "io.h" // para definicoes proprias
// ----------------------------------------------- definicoes globais

typedef
struct s_int_Array
{
   int length;
   ints data ;
   int ix ;
}
int_Array;

/**
IO_readintArray - Ler arranjo com valores inteiros.
@return arranjo com valores lidos
*/
int_Array IO_readintArray ( )
{
// definir dados locais
   chars text = IO_new_chars ( STR_SIZE );
   static int_Array array;
// ler a quantidade de dados
   do
   {
      array.length = IO_readint ( "\nlength = " );
   }
   while ( array.length <= 0 );
// reservar espaco para armazenar
   array.data = IO_new_ints ( array.length );
// testar se ha' espaco
   if ( array.data == NULL )
   {
      array.length = 0; // nao ha' espaco
   }
   else
   {
   // ler e guardar valores em arranjo
      for ( array.ix=0; array.ix<array.length; array.ix=array.ix+1 )
      {
      // ler valor
         strcpy ( text, STR_EMPTY );
         array.data [ array.ix ]
            = IO_readint ( IO_concat (
            IO_concat ( text, IO_toString_d ( array.ix ) ), " : " ) );
      } // fim repetir
   } // fim se
// retornar arranjo
   return ( array );
} // IO_readintArray ( )

/**
printIntArray - Mostrar arranjo com valores inteiros.
@param array - grupo de valores inteiros
*/
void printIntArray ( int_Array array )
{
// mostrar valores no arranjo
   for ( array.ix=0; array.ix < array.length; array.ix++ )
   {
   // mostrar valor
      printf ( "%2d: %d\n", array.ix, array.data [ array.ix ] );
   } // fim repetir
} // printIntArray ( )

/**
Method00 - nao faz nada.
*/
void method00 ( )
{
// nao faz nada
} // fim method00 ( )

/**
Method02.
*/
void method02 ( )
{
// definir dados
   int_Array array;
// identificar
   IO_id ( "EXEMPLO1002 - Method02 - v0.0" );
// ler dados
   array = IO_readintArray ( );
// mostrar dados
   IO_printf ( "\n" );
   printIntArray ( array );
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method02 ( )

int main ( )
{
// definir dado
   int x = 0; // definir variavel com valor inicial
// repetir até desejar parar
   do
   {
   // identificar
      IO_id ( "EXEMPLO1002 - Programa - v0.0" );

   // ler do teclado
      IO_println ( "Opcoes" );
      IO_println ( " 0 - parar" );
      IO_println ( " 1 - print array." );
      IO_println ( "" );
      x = IO_readint ( "Entrar com uma opcao: " );

   // testar valor
      switch ( x )
      {
         case 0:
            method00 ( );
            break;
         case 1:
            method02( );
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
