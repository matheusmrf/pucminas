/*
 Exemplo1011 - v0.0. - 01 / 06 / 2020
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
fprintIntArray - Gravar arranjo com valores inteiros.
@param fileName - nome do arquivo
@param array - grupo de valores inteiros
*/
void fprintIntArray ( chars fileName, int array[], int quantidade)
{
// definir dados locais
   FILE* arquivo = fopen ( fileName, "wt" );
// gravar quantidade de dados
   fprintf ( arquivo, "%d\n", quantidade );
// gravar valores no arquivo
   for ( int i = 0; i < quantidade ; i++ )
   {
   // gravar valor
      fprintf ( arquivo, "%d\n", array[i] );
   } // fim repetir
// fechar arquivo
   fclose ( arquivo );
} // fprintIntArray ( )

void method11 ()
{
   IO_id ( "EXEMPLO1011 - Method11 - v0.0" );

   //inferior
   int inferior = 0;
   printf("\nInsira o valor inferior: ");
   scanf("%d", &inferior);

   //superior
   int superior = 0;
   printf("\nInsira o valor superior: ");
   scanf("%d", &superior);

   //quantidade de numeros random
   int quantidade = 0;
   printf("\nInsira a quantidade: ");
   scanf("%d", &quantidade);

   //array
   int array[quantidade];

   //numero que vai colocar na posicao do array
   int numero;
   //mostrando os valores
   for(int i = 0; i < quantidade; i++)
   {
      numero = ( rand() % superior + inferior );
      printf( "%d ", numero );
      array[i] = numero;
   }
   printf("\n");

   fprintIntArray("DADOS.TXT", array, quantidade);
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
      IO_id ( "EXEMPLO1011 - Programa - v0.0" );

   // ler do teclado
      IO_println ( "Opcoes" );
      IO_println ( " 0 - parar" );
      IO_println ( " 1 - random numbers no arrays." );
      IO_println ( "" );
      x = IO_readint ( "Entrar com uma opcao: " );

   // testar valor
      switch ( x )
      {
         case 0:
            method00 ( );
            break;
         case 1:
            method11( );
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
