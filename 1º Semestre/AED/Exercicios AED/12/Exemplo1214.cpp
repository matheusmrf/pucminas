/*
Exemplo1214 - v0.0. - 17 / 06 / 2020
Author: Matheus Rangel de Figueiredo - 699742
*/
// dependencias
#include "mymatrix.hpp"
#include "myarray.hpp"
#include <iostream> // std::cin, std::cout, std:endl
#include <limits> // std::numeric_limits
#include <string> // para cadeias de caracteres
// ----------------------------------------------- definicoes globais
void pause ( std::string text )
{
   std::string dummy;
   std::cin.clear ( );
   std::cout << std::endl << text;
   std::cin.ignore( );
   std::getline(std::cin, dummy);
   std::cout << std::endl << std::endl;
} // end pause ( )
// ----------------------------------------------- classes / pacotes

using namespace std;
// ----------------------------------------------- metodos
/**
Method00 - nao faz nada.
*/
void method00 ( )
{
// nao faz nada
} // fim method00 ( )

void method14 ( )
{
   cout << "\nEXEMPLO1114 - Method14 - v0.0\n" << endl;
   FILE *arquivo1;
   FILE *arquivo2;
   arquivo1 = fopen("DADOS1.TXT","w");
   arquivo2 = fopen("DADOS2.TXT","w");
   
   cout << endl;
   
   cout <<"Matrix 1: " << endl;

   int linha1 = 0; 
   cout << "Insira a quantidade de linhas: ";
   std::cin >> linha1;
   
   int coluna1 = 0; 
   cout << "Insira a quantidade de colunas: ";
   std::cin >> coluna1;
   
   cout << endl;
   cout <<"Matrix 2: " << endl;
   
   int linha2 = 0; 
   cout << "Insira a quantidade de linhas: ";
   std::cin >> linha2;
   
   int coluna2 = 0; 
   cout << "Insira a quantidade de colunas: ";
   std::cin >> coluna2;
   
   int matrix1[linha1][coluna1];
   int matrix2[linha2][coluna2];
   
   fprintf(arquivo1, "%d\n", linha1);
   fprintf(arquivo1, "%d\n", coluna1);
   
   fprintf(arquivo2, "%d\n", linha2);
   fprintf(arquivo2, "%d\n", coluna2);
   
   cout << endl;
   cout <<"Matrix 1: " << endl;

   for ( int t = 0; t < linha1; t++)
   {
      for ( int s = 0; s < coluna1; s++)
      { 
        
         cout << "Valor na posicao " << t << " , " << s << " : ";
         std::cin >> matrix1 [t][s];
         fprintf(arquivo1, "%d\n", matrix1[t][s]);
      } 
     
   } 
   cout << endl;
   cout <<"Matrix 2: " << endl;


   for ( int e = 0; e < linha2; e++)
   {
      for ( int d = 0; d < coluna2; d++)
      { 
        
         cout << "Valor na posicao " << e << " , " << d << " : ";
         std::cin >> matrix2 [e][d];
         fprintf(arquivo2, "%d\n", matrix2[e][d]);
      } 
     
   } 
   
   bool result = false;
   int contador = 0;
   int tamanho1 = ( linha1 * coluna1);
   
   
   if ( linha1 == linha2 && coluna1 == coluna2)
   {
      for ( int t = 0; t < linha1; t++)
      {
         for (int s = 0; s < coluna1; s++)
         {
            if ( matrix1[t][s] == matrix2[t][s])
            {
               contador = contador + 1;
            }
         
         }
      
      }
   }
    cout << endl;
   cout << "Comparando as matrizes: " << endl;
   
   if ( contador == tamanho1)
   {
      cout << "Matrizes iguais" << endl;
   }
   else 
   {
      cout << "Matrizes nao sao iguais" << endl;
   
   }
   
   pause ( "Apertar ENTER para continuar" );
   fclose(arquivo1);
   fclose(arquivo2);
} // fim method14 ( )
// ----------------------------------------------- acao principal
/*
Funcao principal.
@return codigo de encerramento
*/
int main ( int argc, char** argv )
{
// definir dado
   int x = 0; // definir variavel com valor inicial
// repetir at� desejar parar
   do
   {
   // identificar
      cout << "EXEMPLO1214 - Programa - v0.0\n " << endl;
   // mostrar opcoes
      cout << "Opcoes " << endl;
      cout << " 0 - parar " << endl;
      cout << " 1 - matrizes iguais" << endl;
   
   // ler do teclado
      cout << endl << "Entrar com uma opcao: ";
      cin >> x;
   // escolher acao
      switch ( x )
      {
         case 0:
            method00 ( );
            break;
         case 1:
            method14 ( );
         
         default:
            cout << endl << "ERRO: Valor invalido." << endl;
      } // fim escolher
   }
   while ( x != 0 );
// encerrar
   pause ( "Apertar ENTER para terminar" );
   return ( 0 );
} // fim main( )
