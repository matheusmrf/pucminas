/*
 Exemplo1006 - v0.0. - 25 / 05 / 2020
 Autor: Eric Rodrigues Diniz - 707760
*/
// dependencias
#include "io.h" // para definicoes proprias

/**
Method00 - nao faz nada.
*/
void method00 ( )
{
// nao faz nada
} // fim method00 ( )

/**
Definicao de tipo arranjo bidimensional com inteiros baseado em estrutura
*/
typedef
struct s_int_Matrix
{
   int lines ;
   int columns;
   ints* data ;
   int ix, iy ;
}
int_Matrix;
/**
Definicao de referencia para arranjo bidimensional com inteiros baseado em estrutura
*/
typedef int_Matrix* ref_int_Matrix;
/**
new_int_Matrix - Reservar espaco para arranjo bidimensional com inteiros
@return referencia para arranjo com inteiros
@param lines - quantidade de dados
@param columns - quantidade de dados
*/
ref_int_Matrix new_int_Matrix ( int lines, int columns )
{
// reserva de espaco
   ref_int_Matrix tmpMatrix = (ref_int_Matrix) malloc (sizeof(int_Matrix));
// estabelecer valores padroes
   if ( tmpMatrix != NULL )
   {
      tmpMatrix->lines = 0;
      tmpMatrix->columns = 0;
      tmpMatrix->data = NULL;
   // reservar espaco
      if ( lines>0 && columns>0 )
      {
         tmpMatrix->lines = lines;
         tmpMatrix->columns = columns;
         tmpMatrix->data = malloc (lines * sizeof(ints));
         for ( tmpMatrix->ix=0;
         tmpMatrix->ix<tmpMatrix->lines;
         tmpMatrix->ix=tmpMatrix->ix+1 )
         {
            tmpMatrix->data [ tmpMatrix->ix ] = (ints) malloc (columns * sizeof(int));
         } // fim repetir
      } // fim se
      tmpMatrix->ix = 0;
      tmpMatrix->iy = 0;
   } // fim se
   return ( tmpMatrix );
} // fim new_int_Matrix ( )
/**
free_int_Matrix - Dispensar espaco para arranjo com inteiros
@param tmpMatrix - referencia para grupo de valores inteiros
*/
void free_int_Matrix ( ref_int_Matrix tmpMatrix )
{
// testar se ha' dados
   if ( tmpMatrix != NULL )
   {
      for ( tmpMatrix->ix=0;
      tmpMatrix->ix<tmpMatrix->lines;
      tmpMatrix->ix=tmpMatrix->ix+1 )
      {
         free ( tmpMatrix->data [ tmpMatrix->ix ] );
      } // fim repetir
      free ( tmpMatrix->data );
      free ( tmpMatrix );
   } // fim se
} // fim free_int_Matrix ( )
// ----------------------------------------------- metodos
/**
printIntMatrix - Mostrar matrix com valores inteiros.
@param array - grupo de valores inteiros
*/
void printIntMatrix ( ref_int_Matrix matrix )
{
// mostrar valores na matriz
   for ( matrix->ix=0; matrix->ix<matrix->lines; matrix->ix=matrix->ix+1 )
   {
      for ( matrix->iy=0; matrix->iy<matrix->columns; matrix->iy=matrix->iy+1 )
      {
      // mostrar valor
         printf ( "%3d\t", matrix->data [ matrix->ix ][ matrix->iy ] );
      } // fim repetir
      printf ( "\n" );
   } // fim repetir
} // printIntArray ( )
/**
Method06.
*/
void method06 ( )
{
// definir dado
   ref_int_Matrix matrix = new_int_Matrix ( 3, 3 );
   matrix->data [0][0] = 1; matrix->data [0][1] = 2; matrix->data [0][2] = 3;
   matrix->data [1][0] = 3; matrix->data [1][1] = 4; matrix->data [1][2] = 5;
   matrix->data [2][0] = 6; matrix->data [2][1] = 7; matrix->data [2][2] = 8;
// identificar
   IO_id ( "EXEMPLO1010 - Method06 - v0.0" );
// executar o metodo auxiliar
   printIntMatrix ( matrix );
// reciclar espaco
   free_int_Matrix ( matrix );
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method06 ( )

int main ( )
{
// definir dado
   int x = 0; // definir variavel com valor inicial
// repetir até desejar parar
   do
   {
   // identificar
      IO_id ( "EXEMPLO1006 - Programa - v0.0" );
   
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
            method06( );
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