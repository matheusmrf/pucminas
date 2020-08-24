/*
Exemplo11E1 - v0.0. - 11 / 06 / 2020
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

bool arraysIguais (int array[], int other[], int tamanho)
{
   bool result = false;
   for ( int i = 0; i < tamanho; i++)
   {
      if(array[i] != other[i])
      {
         result = true;
         i == tamanho;
      }
   }
   return result;
}

void method21 ( )
{ 
   cout << "\nExemplo11E1 - Method21 - v0.0\n" << endl;
   
   int tamanho = 0;
   
   std::cout << endl << "Insira o tamanho do array: ";
   std::cin >> tamanho;
   
   int array[tamanho];
   int other[tamanho];
   
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
   
   bool result = false;
   result = arraysIguais(array, other, tamanho);
   if(result == true)
   {
      std::cout << endl << endl << " arrays diferentes" << endl;
   }
   else
   {
      std::cout << endl << endl << "arrays iguais" << endl;
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
      cout << "Exemplo11E1 - Programa - v0.0\n " << endl;
   // mostrar opcoes
      cout << "Opcoes " << endl;
      cout << " 0 - parar " << endl;
      cout << " 1 - verificar igualdade entre 2 arrays" << endl;
   
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
            method21 ( );
         
         default:
            cout << endl << "ERRO: Valor invalido." << endl;
      } // fim escolher
   }
   while ( x != 0 );
// encerrar
   pause ( "Apertar ENTER para terminar" );
   return ( 0 );
} // fim main( )
