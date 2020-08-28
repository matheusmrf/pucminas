/*
 Exemplo1016 - v0.0. - 01 / 06 / 2020
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
IO_readintMatrix - Ler arranjo bidimensional com valores inteiros.
@return referencia para o grupo de valores inteiros
*/
ref_int_Matrix IO_readintMatrix ( )
{
// definir dados locais
   int lines = 0;
   int columns = 0;
   int z = 0;
   chars text = IO_new_chars ( STR_SIZE );
// ler a quantidade de dados
   do
   { lines = IO_readint ( "\nlines = " ); }
   while ( lines <= 0 );
   do
   { columns = IO_readint ( "\ncolumns = " ); }
   while ( columns <= 0 );
// reservar espaco para armazenar valores
   ref_int_Matrix matrix = new_int_Matrix ( lines, columns );
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
      for ( matrix->ix=0; matrix->ix<matrix->lines; matrix->ix=matrix->ix+1 )
      {
         for ( matrix->iy=0; matrix->iy<matrix->columns; matrix->iy=matrix->iy+1 )
         {
         // ler e guardar valor
            strcpy ( text, STR_EMPTY );
            matrix->data [ matrix->ix ][ matrix->iy ] = IO_readint ( IO_concat (
               IO_concat ( IO_concat ( text, IO_toString_d ( matrix->ix ) ), ", " ),
               IO_concat ( IO_concat ( text, IO_toString_d ( matrix->iy ) ), " : " ) ) );
         } // fim repetir
      } // fim repetir
   } // fim se
// retornar dados lidos
   return ( matrix );
} // IO_readintMatrix ( )

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
fprintIntMatrix - Gravar arranjo bidimensional com valores inteiros.
@param fileName - nome do arquivo
@param matrix - grupo de valores inteiros
*/
void fprintIntMatrix ( chars fileName, ref_int_Matrix matrix )
{
// definir dados locais
   FILE* arquivo = fopen ( fileName, "wt" );
// testar se ha' dados
   if ( matrix == NULL )
   {
      printf ( "\nERRO: Nao ha' dados." );
   }
   else
   {
   // gravar quantidade de dados
      fprintf ( arquivo, "%d\n", matrix->lines );
      fprintf ( arquivo, "%d\n", matrix->columns );
   // gravar valores no arquivo
      for ( matrix->ix=0; matrix->ix<matrix->lines; matrix->ix=matrix->ix+1 )
      {
         for ( matrix->iy=0; matrix->iy<matrix->columns; matrix->iy=matrix->iy+1 )
         {
         // gravar valor
            fprintf ( arquivo, "%d ", matrix->data [ matrix->iy ][ matrix->ix ] );
         } // fim repetir
         fprintf(arquivo, "\n");
      } // fim repetir
   // fechar arquivo
      fclose ( arquivo );
   } // fim se
} // fprintIntMatrix ( )


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

void method16 ()
{
// definir dados
   ref_int_Matrix matrix = NULL;
// identificar
   IO_id ( "EXEMPLO1016 - Method16 - v0.0" );
// ler dados
   matrix = IO_readintMatrix ( );
// mostrar dados
   IO_printf ( "\n" );
   printIntMatrix ( matrix );
   fprintIntMatrix( "RESULTADO16.TXT", matrix );
// reciclar espaco
   free_int_Matrix ( matrix );
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );

}

int main ( )
{
// definir dado
   int x = 0; // definir variavel com valor inicial
// repetir até desejar parar
   do
   {
   // identificar
      IO_id ( "EXEMPLO1016 - Programa - v0.0" );

   // ler do teclado
      IO_println ( "Opcoes" );
      IO_println ( " 0 - parar" );
      IO_println ( " 1 - transposta de matriz." );
      IO_println ( "" );
      x = IO_readint ( "Entrar com uma opcao: " );

   // testar valor
      switch ( x )
      {
         case 0:
            method00 ( );
            break;
         case 1:
            method16( );
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
