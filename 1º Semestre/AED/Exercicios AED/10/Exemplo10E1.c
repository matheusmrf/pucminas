/*
 Exemplo1021 - v0.0. - 01 / 06 / 2020
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

/**
freadArraySize - Ler tamanho do arranjo com valores inteiros.
@return quantidade de valores lidos
@param fileName - nome do arquivo
*/
int freadArraySize ( chars fileName )
{
// definir dados locais
   int n = 0;
   FILE* arquivo = fopen ( fileName, "rt" );
// ler a quantidade de dados
   fscanf ( arquivo, "%d", &n );
   if ( n <= 0 )
   {
      IO_printf ( "\nERRO: Valor invalido.\n" );
      n = 0;
   } // fim se
// retornar dados lidos
   return ( n );
} // freadArraySize ( )
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

bool decrescente ( int_Array array )
{
// definir dados locais
   bool result = true;
   for(int i = 0; i < array.length; i++)
   {
      if(array.data[i - 1] > array.data[i])
      {
         result = true;
      }
      else
      {
         result = false;
         i == array.length;
      }
   }

   return ( result );
} // isEqual ( )

void consertar_decrescente (int_Array array)
{
   int x = 0, menor, aux;
   for(int i = 0; i < array.length - 1; i++)
   {
      for(int j = i + 1; j < array.length; j++)
      {
         menor = array.data[i];
         if (array.data[i] > array.data[j])
         {
            int temp = array.data[i];
            array.data[i] = array.data[j];
            array.data[j] = temp;
         }
      }
   }
}


void method21 ()
{
   IO_id ( "EXEMPLO1021 - Method21 - v0.0" );

   int_Array array;
   IO_printf ( "DADOS 1:\n" );
   array = IO_readintArray ( );
   IO_printf ( "\n" );
   printIntArray ( array );
   IO_printf ( "\n" );
   printf("DECRESCENTE ? %s\n", decrescente( array ) ? "SIM" : "NAO");
   if(decrescente(array) == false)
   {
      consertar_decrescente( array );
      printf("\narray descrescente:\n");
      printIntArray ( array );
   }
   IO_printf ( "\n" );
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
      IO_id ( "EXEMPLO1021 - Programa - v0.0" );

   // ler do teclado
      IO_println ( "Opcoes" );
      IO_println ( " 0 - parar" );
      IO_println ( " 1 - decrescente?" );
      IO_println ( "" );
      x = IO_readint ( "Entrar com uma opcao: " );

   // testar valor
      switch ( x )
      {
         case 0:
            method00 ( );
            break;
         case 1:
            method21( );
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
