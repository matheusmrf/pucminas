/*
 Exemplo1009 - v0.0. - 01 / 06 / 2020
 Author: Matheus Rangel de Figueiredo - 699742
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
freadintMatrix - Ler arranjo bidimensional com valores inteiros.
@return referencia para o grupo de valores inteiros
@param fileName - nome do arquivo
*/
ref_int_Matrix freadintMatrix ( chars fileName )
{
// definir dados locais
   ref_int_Matrix matrix = NULL;
   int lines = 0;
   int columns = 0;
   FILE* arquivo = fopen ( fileName, "rt" );
// ler a quantidade de dados
   fscanf ( arquivo, "%d", &lines );
   fscanf ( arquivo, "%d", &columns );
   if ( lines <= 0 || columns <= 0 )
   {
      IO_printf ( "\nERRO: Valor invalido.\n" );
   }
   else
   {
   // reservar espaco para armazenar
      matrix = new_int_Matrix ( lines, columns );
   // testar se ha' espaco
      if ( matrix->data == NULL )
      {
      // nao ha' espaco
         matrix->lines = 0;
         matrix->columns = 0;
         matrix->ix = 0;
         matrix->iy = 0;
      }
      else
      {
      // ler e guardar valores na matriz
         matrix->ix = 0;
         while ( ! feof ( arquivo ) && matrix->ix < matrix->lines )
         {
            matrix->iy = 0;
            while ( ! feof ( arquivo ) && matrix->iy < matrix->columns )
            {
            // guardar valor
               fscanf ( arquivo, "%d", &(matrix->data [ matrix->ix ][ matrix->iy ]) );
            // passar ao proximo
               matrix->iy = matrix->iy+1;
            } // fim repetir
         // passar ao proximo
            matrix->ix = matrix->ix+1;
         } // fim repetir
         matrix->ix = 0;
         matrix->iy = 0;
      } // fim se
   } // fim se
// retornar matriz lida
   return ( matrix );
} // fim freadintMatrix ( )

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
Method09.
*/
void method09 ( )
{
// identificar
   IO_id ( "EXEMPLO1010 - Method09 - v0.0" );
// ler dados
   ref_int_Matrix matrix = freadintMatrix ( "MATRIX1.TXT" );
// mostrar dados
   IO_printf ( "\n" );
   printIntMatrix ( matrix );
// reciclar espaco
   free_int_Matrix ( matrix );
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method09 ( )


int main ( )
{
// definir dado
   int x = 0; // definir variavel com valor inicial
// repetir até desejar parar
   do
   {
   // identificar
      IO_id ( "EXEMPLO1009 - Programa - v0.0" );

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
            method09( );
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
