/*
 Exemplo1001 - v0.0. - 01 / 06 / 2020
 Author: Matheus Rangel de Figueiredo - 699742
*/
// dependencias
#include "io.h" // para definicoes proprias
// ----------------------------------------------- definicoes globais

/**
Definicao de tipo arranjo com inteiros
baseado em estrutura
*/
typedef
struct s_int_Array
{
   int length;
   ints data ;
   int ix ;
}
int_Array;
/**
Definicao de referencia para arranjo com inteiros
baseado em estrutura
*/
typedef int_Array* ref_int_Array;
/**
new_int_Array - Reservar espaco para arranjo com inteiros
@return referencia para arranjo com inteiros
@param n - quantidade de datos
*/
ref_int_Array new_int_Array ( int n )
{
// reserva de espaco
   ref_int_Array tmpArray = (ref_int_Array) malloc (sizeof(int_Array));
// estabelecer valores padroes
   if ( tmpArray == NULL )
   {
      IO_printf ( "\nERRO: Falta espaco.\n" );
   }
   else
   {
      tmpArray->length = 0;
      tmpArray->data = NULL;
      tmpArray->ix = -1;
      if ( n>0 )
      {
      // guardar a quantidade de dados
         tmpArray->length = n;
      // reservar espaco para os dados
         tmpArray->data = (ints) malloc (n * sizeof(int));
      // definir indicador do primeiro elemento
         tmpArray->ix = 0;
      } // fim se
   } // fim se
// retornar referencia para espaco reservado
   return ( tmpArray );
} // fim
/**
free_int_Array - Dispensar espaco para arranjo com inteiros
@param tmpArray - referencia para grupo de valores inteiros
*/
void free_int_Array ( ref_int_Array tmpArray )
{
// testar se ha' dados
   if ( tmpArray != NULL )
   {
      free ( tmpArray -> data );
      free ( tmpArray );
   } // fim se
} // fim free_int_Array ( )
// ----------------------------------------------- metodos
/**
Method00 - nao faz nada.
*/
void method00 ( )
{
// nao faz nada
} // fim method00 ( )
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
Method01 - Mostrar certa quantidade de valores.
*/
void method01 ( )
{
// definir dado
   int_Array array;
// montar arranjo em estrutura
   array. length = 5;
   array. data = (ints) malloc (array.length * sizeof(int));
   array. data [ 0 ] = 1;
   array. data [ 1 ] = 2;
   array. data [ 2 ] = 3;
   array. data [ 3 ] = 4;
   array. data [ 4 ] = 5;
// identificar
   IO_id ( "EXEMPLO1001 - Method01 - v0.0" );
// executar o metodo auxiliar
   printIntArray ( array );
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
      IO_id ( "EXEMPLO1001 - Programa - v0.0" );

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
            method01( );
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
