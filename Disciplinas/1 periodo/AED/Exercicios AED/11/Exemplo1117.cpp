/*
Exemplo1117 - v0.0. - 11 / 06 / 2020
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

bool crescente (int array[], int tamanho)
{
   bool result = true;
   for ( int i = 0; i < tamanho; i++)
   {
      if(array[i] > array[i + 1])
      {
         result = false; 
         break;
      }
      else
      {
         result = true;
      }
   }
   return result;
}

void method17 ( )
{ 
   int soma = 0;
   cout << "\nEXEMPLO1117 - Method17 - v0.0\n" << endl;
   ifstream arquivo; // input file
   int n = 0;
   arquivo.open ( "DADOS.TXT" );
   int tamanho;
   arquivo >> tamanho;
   int array[tamanho];
   for ( int i = 0; i < tamanho; i++)
   {
      arquivo >> array[i];
   }
   std::sort(array, array + tamanho);
   cout << "Array selecionado: ";
   std::cout << endl;
   std::cout << endl;
   for ( int i = 0; i < tamanho; i++)
   {
      std::cout << array[i] << "\t";
   }
   crescente(array, tamanho);
   bool result;
   result = crescente(array, tamanho);
   if(result == false)
   {
      std::cout << endl << endl << "Array DESORDENADO" << endl;
   }
   else
   {
      std::cout << endl;
      std::cout << endl << "Array ORDENADO";
   }
   pause ( "\nApertar ENTER para continuar" );
   arquivo.close();
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
      cout << "EXEMPLO1117 - Programa - v0.0\n " << endl;
   // mostrar opcoes
      cout << "Opcoes " << endl;
      cout << " 0 - parar " << endl;
      cout << " 1 - array ordenado?" << endl;
   
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
            method17 ( );
         
         default:
            cout << endl << "ERRO: Valor invalido." << endl;
      } // fim escolher
   }
   while ( x != 0 );
// encerrar
   pause ( "Apertar ENTER para terminar" );
   return ( 0 );
} // fim main( )
