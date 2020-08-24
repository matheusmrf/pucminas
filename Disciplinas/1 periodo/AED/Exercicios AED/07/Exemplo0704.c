/*
Exemplo0704 - v0.0. - 30 / 05 / 2020
Author: Matheus Rangel de Figueiredo - 699742
*/
// dependencias
#include "io.h" // para definicoes proprias

void method00 ( )
{
// nao faz nada
} // fim method00 ( )

/**
writeInts - Gravar em arquivo texto certa quantidade de valores.
@param fileName - nome do arquivo
@param x - quantidade de valores
*/
void writeInts ( chars fileName, int x )
{
// definir dados
   FILE* arquivo = fopen ( fileName, "wt" );
   int y = 0;
// repetir para a quantidade de dados
   for ( y = 1; y <= x; y = y + 1 )
   {
   // gravar valor
      fprintf ( arquivo, "%d\n", y );
   } // fim repetir
// fechar arquivo (INDISPENSAVEL para gravacao)
   fclose ( arquivo );
} // fim writeInts ( )
/**
Method01 - Mostrar certa quantidade de valores.
*/
void method01 ( )
{
// identificar
   IO_id ( "EXEMPLO0702 - Method01 - v0.0" );
// executar o metodo auxiliar
   writeInts ( "DADOS1.TXT", 10 );
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method01 ( )

/**
readInts - Ler de arquivo texto certa quantidade de valores.
@param fileName - nome do arquivo
@param x - quantidade de valores
*/
void readInts ( chars fileName )
{
// definir dados
   FILE* arquivo = fopen ( fileName, "rt" );
   int x = 0;
// tentar ler o primeiro
   fscanf ( arquivo, "%d", &x );
// repetir enquanto houver dados
   while ( ! feof ( arquivo ) )
   {
   // mostrar valor
      printf ( "%d\n", x );
   // tentar ler o proximo
      fscanf ( arquivo, "%d", &x );
   } // fim repetir
// fechar arquivo (RECOMENDAVEL para leitura)
   fclose ( arquivo );
} // fim readInts ( )
/**
Method02.
*/
void method02 ( )
{
// identificar
   IO_id ( "EXEMPLO0702 - Method02 - v0.0" );
// executar o metodo auxiliar
   readInts ( "DADOS1.TXT" );
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method02 ( )

/**
writeDoubles - Gravar em arquivo texto certa quantidade de valores.
@param fileName - nome do arquivo
@param x - quantidade de valores
*/
void writeDoubles ( chars fileName, int x )
{
// definir dados
   FILE* arquivo = fopen ( fileName, "wt" );
   int y = 0;
// gravar quantidade de valores
   IO_fprintf ( arquivo, "%d\n", x );
// repetir para a quantidade de dados
   for ( y = 1; y <= x; y = y + 1 )
   {
   // gravar valor
      IO_fprintf ( arquivo, "%lf\n", (0.1*y) );
   } // fim repetir
// fechar arquivo (INDISPENSAVEL para gravacao)
   fclose ( arquivo );
} // fim writeDoubles ( )
/**
Method03.
*/
void method03 ( )
{
// identificar
   IO_id ( "EXEMPLO0703 - Method03 - v0.0" );
// executar o metodo auxiliar
   writeDoubles ( "DADOS2.TXT", 10 );
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method03 ( )

/**
readDoubles - Ler de arquivo texto certa quantidade de valores.
@param fileName - nome do arquivo
@param x - quantidade de valores
*/
void readDoubles ( chars fileName )
{
// definir dados
   FILE* arquivo = fopen ( fileName, "rt" );
   int x = 0 ;
   int y = 1 ;
   double z = 0.0;
// tentar ler a quantidade de dados
   fscanf ( arquivo, "%d", &x );
// repetir enquanto houver dados e
// quantidade nao tiver sido alcancada
   while ( ! feof ( arquivo ) && y <= x )
   {
   // tentar ler
      fscanf ( arquivo, "%lf", &z );
   // mostrar valor
      printf ( "%2d: %1.2lf\n", y, z );
   // passar ao proximo
      y = y + 1;
   } // fim repetir
// fechar arquivo (RECOMENDAVEL para leitura)
   fclose ( arquivo );
} // fim readDoubles ( )
/**
Method04.
*/
void method04 ( )
{
// identificar
   IO_id ( "EXEMPLO0704 - Method04 - v0.0" );
// executar o metodo auxiliar
   readDoubles ( "DADOS2.TXT" );
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method04 ( )


int main ( )
{
// definir dado
   int x = 0; // definir variavel com valor inicial
// repetir até desejar parar
   do
   {
   // identificar
      IO_id ( "Exemplo0704 - Programa - v0.0" );
   // ler do teclado
      IO_println ( "Opcoes" );
      IO_println ( " 0 - parar" );
      IO_println ( " 1 - Gravar em arquivo texto certa quantidade de valores." );
      IO_println ( " 2 - Ler de arquivo texto certa quantidade de valores." );
      IO_println ( " 3 - Gravar em arquivo texto certa quantidade de valores." );
      IO_println ( " 4 - Ler de arquivo texto certa quantidade de valores." );
      IO_println ( " 5 - method05" );
      IO_println ( " 6 - method06" );
      IO_println ( " 7 - method07" );
      IO_println ( " 8 - method08" );
      IO_println ( " 9 - method09" );
      IO_println ( "10 - method10" );
      IO_println ( "" );
      x = IO_readint ( "Entrar com uma opcao: " );
   // testar valor
      switch ( x )
      {
         case 0:
            method00 ( );
            break;
         case 1:
            method01 ( );
            break;
         case 2:
            method02 ( );
            break;
         case 3:
            method03 ( );
            break;
         case 4:
            method04 ( );
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
