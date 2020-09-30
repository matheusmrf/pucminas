#include <iostream>   
#include "io.h" // para entradas e saida

using namespace std;

void method00 ( )
{
// nao faz nada
} // fim method00 ( )

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



int main()
{
    int x = 0;
    int n, numero;
    cout<<"Input number of elements\n";
    cin >> n;
    int vector[n];
    for(int i = 0; i < n; i++)
    {
        cin >> numero;
        vector[i] = numero;
    }
    for(int i = 0; i< n; i++) {
        printf("%d", vector[i]);
    }

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
    return 0;
}