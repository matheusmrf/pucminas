/*
 Exemplo1005 - v0.0. - 01 / 06 / 2020
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
fIO_readintArray - Ler arranjo com valores inteiros.
@return arranjo com os valores lidos
@param fileName - nome do arquivo
@param array - grupo de valores inteiros
*/
int_Array fIO_readintArray ( chars fileName )
{
// definir dados locais
   int x = 0;
   int y = 0;
   FILE* arquivo = fopen ( fileName, "rt" );
   static int_Array array;
// ler a quantidade de dados
   fscanf ( arquivo, "%d", &array.length );
// testar se ha' dados
   if ( array.length <= 0 )
   {
      IO_printf ( "\nERRO: Valor invalido.\n" );
      array.length = 0; // nao ha' dados
   }
   else
   {
   // reservar espaco
      array.data = IO_new_ints ( array.length );
   // ler e guardar valores em arranjo
      array.ix = 0;
      while ( ! feof ( arquivo ) &&
      array.ix < array.length )
      {
      // ler valor
         fscanf ( arquivo, "%d", &(array.data [ array.ix ]) );
      // passar ao proximo
         array.ix = array.ix + 1;
      } // fim repetir
   } // fim se
// retornar dados lidos
   return ( array );
} // fIO_readintArray ( )

/**
copyIntArray - Copiar arranjo com valores inteiros.
@return oopia do arranjo
@param fileName - nome do arquivo
@param array - grupo de valores inteiros
*/
int_Array copyIntArray ( int_Array array )
{
// definir dados locais
   int x = 0;
   int y = 0;
   static int_Array copy;
   if ( array.length <= 0 )
   {
      IO_printf ( "\nERRO: Valor invalido.\n" );
      array.length = 0;
   }
   else
   {
   // reservar area
      copy.length = array.length;
      copy.data = IO_new_ints ( copy.length );
   // testar se ha' espaco e dados
      if ( copy.data == NULL || array.data == NULL )
      {
         printf ( "\nERRO: Falta espaco ou dados." );
      }
      else
      {
      // ler e copiar valores
         for ( array.ix=0; array.ix<array.length; array.ix=array.ix+1 )
         {
         // copiar valor
            copy.data [ array.ix ] = array.data [ array.ix ];
         } // fim repetir
      } // fim se
   } // fim se
// retornar dados lidos
   return ( copy );
} // copyIntArray ( )
/**
Method05.
*/
void method05 ( )
{
// definir dados
   int_Array array; // arranjo sem tamanho definido
   int_Array other; // arranjo sem tamanho definido
// identificar
   IO_id ( "EXEMPLO1010 - Method05 - v0.0" );
// ler dados
   array = fIO_readintArray ( "ARRAY1.TXT" );
// copiar dados
   other = copyIntArray ( array );
// mostrar dados
   IO_printf ( "\nOriginal\n" );
   printIntArray ( array );
// mostrar dados
   IO_printf ( "\nCopia\n" );
   printIntArray ( other );
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method05 ( )

int main ( )
{
// definir dado
   int x = 0; // definir variavel com valor inicial
// repetir até desejar parar
   do
   {
   // identificar
      IO_id ( "EXEMPLO1005 - Programa - v0.0" );

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
            method05( );
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
