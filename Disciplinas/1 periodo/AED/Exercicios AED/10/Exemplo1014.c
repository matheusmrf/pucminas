/*
 Exemplo1014 - v0.0. - 01 / 06 / 2020
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

double somarArray ( int_Array other, int_Array array )
{
   double soma = 0;
   for(int i = 0; i < array.length; i++)
   {
      soma = soma + ( array.data[i] + other.data[i]);
   }
   return ( soma );
} // isEqual ( )

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


void method14 ()
{
   IO_id ( "EXEMPLO1014 - Method14 - v0.0" );

   int_Array array;
   IO_printf ( "DADOS 1:\n" );
   array = fIO_readintArray ( "DADOS1.TXT" );

   int_Array other;
   IO_printf ( "DADOS 2:\n" );
   other = fIO_readintArray ( "DADOS2.TXT" );

   IO_printf ( "\n" );

   if( array.length == other.length )
   {
      IO_printf ( "\nDADOS 1\n" );
      printIntArray ( array );
      IO_printf ( "\n" );
      IO_printf ( "DADOS 2\n" );
      printIntArray ( other );

      printf("\nSoma = %.1lf\n", somarArray(other, array) );

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
      IO_id ( "EXEMPLO1014 - Programa - v0.0" );

   // ler do teclado
      IO_println ( "Opcoes" );
      IO_println ( " 0 - parar" );
      IO_println ( " 1 - soma dos arranjos." );
      IO_println ( "" );
      x = IO_readint ( "Entrar com uma opcao: " );

   // testar valor
      switch ( x )
      {
         case 0:
            method00 ( );
            break;
         case 1:
            method14( );
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
