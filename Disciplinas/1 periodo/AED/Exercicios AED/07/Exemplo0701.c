
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

int main ( )
{
// definir dado
   int x = 0; // definir variavel com valor inicial
// repetir at� desejar parar
   do
   {
   // identificar
      IO_id ( "Exemplo0701 - Programa - v0.0" );
   // ler do teclado
      IO_println ( "Opcoes" );
      IO_println ( " 0 - parar" );
      IO_println ( " 1 - Gravar em arquivo texto certa quantidade de valores." );
      IO_println ( " 2 - method02" );
      IO_println ( " 3 - method03" );
      IO_println ( " 4 - method04" );
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

         default:
            IO_println ( "ERRO: Valor invalido." );
      } // fim escolher
   }
   while ( x != 0 );
// encerrar
   IO_pause ( "Apertar ENTER para terminar" );
   return ( 0 );
} // fim main( )
