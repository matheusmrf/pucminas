/*
Exemplo11E2 - v0.0. - 10 / 06 / 2020
Author: Matheus Rangel de Figueiredo - 699742
*/
// dependencias
#include <iostream> // std::cin, std::cout, std:endl
#include <limits> // std::numeric_limits
#include <string> // para cadeias de caracteres
#include <bits/stdc++.h>


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
#include "myarray.hpp"
using namespace std;
using std::ifstream;
// ----------------------------------------------- metodos
/**
Method00 - nao faz nada.
*/
void method00 ( )
{
// nao faz nada
} // fim method00 ( )


void method22 ( )
{ 
   cout << "\nExemplo11E2 - Method22 - v0.0\n" << endl;
   
   int tamanho = 0;
   
   std::cout << endl << "Insira o tamanho do array: ";
   std::cin >> tamanho;
   
   int array[tamanho];
   int other[tamanho];
   int diferenca[tamanho];
   
   std::cout << endl << "Insira os elementos do array: " << endl;

   for(int i = 0; i < tamanho; i++)
   {
      std::cout << endl << "[ "<< i << " ] => ";
      std::cin >> array[i];
   }
   
   std::cout << endl << "Insira os elementos do other: " << endl;

   for(int i = 0; i < tamanho; i++)
   {
      std::cout << endl << "[ "<< i << " ] => ";
      std::cin >> other[i];
   }
   
   std::cout << endl << "ARRAY: " << endl;
   
   for(int i = 0; i < tamanho; i++)
   {
      std::cout << array[i] << "\t";
   }
   
   std::cout << endl << "OTHER: " << endl;
   
   for(int i = 0; i < tamanho; i++)
   {
      std::cout << other[i] << "\t";
   }
   
   int resposta = 0;
   
   std::cout << endl << endl << "1 - diferenca entre ARRAY e OTHER";
   std::cout << endl << endl << "2 - diferenca entre OTHER e ARRAY" << endl;  
   
   std::cin >> resposta;
   
   switch(resposta)
   {
      case 1:
         std::cout << endl << "DIFERENCA: " << endl;
      
         for(int i = 0; i < tamanho; i++)
         {
            diferenca[i] = array[i] - other[i];
            std::cout << diferenca[i] << "\t";
         }
      break;
      case 2:
         std::cout << endl << "DIFERENCA: " << endl;
      
         for(int i = 0; i < tamanho; i++)
         {
            diferenca[i] = other[i] - array[i];
            std::cout << diferenca[i] << "\t";
         }
         break;
      default:
         std::cout << endl << "Escolha entre 1 e 2 por gentileza" << endl;
   }
  
      
   pause ( "\nApertar ENTER para continuar" );   
}

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
      cout << "Exemplo11E2 - Programa - v0.0\n " << endl;
   // mostrar opcoes
      cout << "Opcoes " << endl;
      cout << " 0 - parar " << endl;
      cout << " 1 - diferenca das posicoes entre 2 arrays" << endl;
   
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
            method22 ( );
         
         default:
            cout << endl << "ERRO: Valor invalido." << endl;
      } // fim escolher
   }
   while ( x != 0 );
// encerrar
   pause ( "Apertar ENTER para terminar" );
   return ( 0 );
} // fim main( )
