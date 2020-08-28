/*
 Exemplo1013 - v0.0. - 01 / 06 / 2020
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

typedef
struct s_int_Array
{
   int length;
   ints data ;
   int ix ;
}
int_Array;

bool isEqual ( int_Array other, int_Array array )
{
// definir dados locais
   bool result = false;
   for(int i = 0; i < array.length; i++)
   {
      if(other.data[i] != array.data[i])
      {
         result = true;
         i == array.length;
      }
   }
   return ( result );
} // isEqual ( )

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
fprintIntArray - Gravar arranjo com valores inteiros.
@param fileName - nome do arquivo
@param array - grupo de valores inteiros
*/
void fprintIntArray ( chars fileName, int_Array array )
{
// definir dados locais
   FILE* arquivo = fopen ( fileName, "wt" );
// gravar quantidade de dados
   fprintf ( arquivo, "%d\n", array.length );
// gravar valores no arquivo
   for ( array.ix=0; array.ix<array.length; array.ix=array.ix+1 )
   {
   // gravar valor
      fprintf ( arquivo, "%d\n", array.data [ array.ix ] );
   } // fim repetir
// fechar arquivo
   fclose ( arquivo );
} // fprintIntArray ( )

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


void method13 ()
{
   IO_id ( "EXEMPLO1013 - Method13 - v0.0" );

   int_Array array;
   IO_printf ( "DADOS 1:\n" );
   array = IO_readintArray ( );
   fprintIntArray ( "DADOS1.TXT", array );

   int_Array other;
   IO_printf ( "DADOS 2:\n" );
   other = IO_readintArray ( );
   fprintIntArray ( "DADOS2.TXT", other );

   IO_printf ( "\n" );

   if( array.length == other.length )
   {
      IO_printf ( "\nDADOS 1\n" );
      printIntArray ( array );
      IO_printf ( "\n" );
      IO_printf ( "DADOS 2\n" );
      printIntArray ( other );

      printf("\nARRAYS IGUAIS? %s", isEqual(other, array) ? "NAO" : "SIM");

   }
   else
   {
      printf("TAMANHOS DIFERENTES\n");
   }

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
      IO_id ( "EXEMPLO1013 - Programa - v0.0" );

   // ler do teclado
      IO_println ( "Opcoes" );
      IO_println ( " 0 - parar" );
      IO_println ( " 1 - ver se arrays sao iguais." );
      IO_println ( "" );
      x = IO_readint ( "Entrar com uma opcao: " );

   // testar valor
      switch ( x )
      {
         case 0:
            method00 ( );
            break;
         case 1:
            method13( );
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
