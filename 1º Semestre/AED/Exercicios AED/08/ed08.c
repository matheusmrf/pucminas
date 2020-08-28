#include "io.h"
#include "stdio.h"
#include "math.h"
/*
Author: Matheus Rangel de Figueiredo - 699742
*/
int i = 0;
int k = 0;
int elemento = 0 ;
void method00(){}


void printEvenIntArray ( int n, int array [ ] )
{
    
    // definir dado local
    int x = 0;
    // mostrar valores no arranjo
    for ( x=0; x<n; x=x+1 )
    {
        elemento = IO_readint("Digite um valor para a array: ");
        // mostrar valor
        if (elemento <= 0 )
        {
            IO_printf("Valor Invalido ");
        }
        else
        {
            array[x] = elemento ;
            
        }
        
    } // fim repetir
    for ( x=0; x<n; x=x+1 )
    {
        // mostrar valor
        if(array[x] % 2 != 0)
        {
            IO_printf ( "%2d: %d\n", x, array [ x ] );
        }
    } // fim repetir
        
    
} // printIntArray ( )
void method01 ()
{
    int array[50] = {0} ;
    int quantidade = IO_readint("Digite a quantidade de numeros na array :") ;
    printEvenIntArray(quantidade,array) ;
}
//ENTREGAREI O RESTANTE ASSIM QUE POSSIVEL
void method02()
{

}
int main( )
{
    int x = 0; // definir variavel com valor inicial
    // repetir até desejar parar
    do
    {
        // identificar
        IO_id ( "EXEMPLO0711 - 720 - Programa - v1.0" );
        // ler do teclado
        IO_println ( "Opcoes" );
        IO_println ( " 0 - parar" );
        IO_println ( " 1 - gravar essa quantidade em múltiplos de 5, ímpares" );
        IO_println ( " 2  - gravar essa quantidade em múltiplos de 5, pares " );
        IO_println ( " 3 - gravar essa quantidade em valores multiplicando o anterior por 4 " );
        IO_println ( " 4 -gravar essa quantidade em valores decrescentes multiplicando o anterior por 3 apartir de 1" );
        IO_println ( " 5 - gravar essa quantidade em valores inversos potencias multiplas de 2" );
        IO_println ( " 6 - calcular a soma dessa quantidade dentre os primeiros valores gravados no exercício anterior" );
        IO_println ( " 7 - calcular a soma dessa quantidade dentre os inversos das potências de 3 do exercício 04" );
        IO_println ( " 8 - gravar o valor correspondente aos primeiros termos ímpares da série de Fibonacci." );
        IO_println ( " 9 - para calcular a quantidade de minúsculas em cadeia de caracteres de um arquivo texto." );
        IO_println ( "10 -para contar dígitos em uma cadeia de caracteres." ); 
        IO_println ( "" );
        x = IO_readint ( "Entrar com uma opcao: " );
    switch (x)
    {   
        case 0:
            method00 ( );
            break;
        case 1:
            method01();
            break;
        


            
            default:
            IO_println ( "ERRO: Valor invalido." );
    }
}
    while ( x != 0 );
    IO_pause ( "Apertar ENTER para terminar" );
    return 0;
}