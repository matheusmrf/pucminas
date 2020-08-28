/*
Exemplo1118 - v0.0. - 11 / 06 / 2020
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

bool achar (int array[], int tamanho, int procurar)
{
   bool result = false;
   for(int i = 0; i < tamanho; i++)
   {
      if(procurar == array[i])
      {
         result = true;
         std::cout << endl << "encontrado na posicao [ " << i << " ]";
         i == tamanho;
      }
   }
   return ( result );
}

void method18 ( )
{ 
   cout << "\nEXEMPLO1118 - Method18 - v0.0\n" << endl;
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
   cout << "Array selecionado: ";
   std::cout << endl;
   std::cout << endl;
   for ( int i = 0; i < tamanho; i++)
   {
      std::cout << array[i] << "\t";
   }
   std::cout << endl;
   std::cout << endl;
   
   int procurar = 0;
   std::cout << "Insira o valor a ser buscado no array: ";
   std::cin >> procurar;
   bool result = achar(array, tamanho, procurar);;
   result = achar(array, tamanho, procurar);
   if(result == false)
   {
      std::cout << endl << endl << "valor nao encontrado no array" << endl;
   }
   else
   {
      std::cout << endl;
      std::cout << endl << "valor encontrado!";
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
      cout << "EXEMPLO1118 - Programa - v0.0\n " << endl;
   // mostrar opcoes
      cout << "Opcoes " << endl;
      cout << " 0 - parar " << endl;
      cout << " 1 - procurar valor em array" << endl;
   
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
            method18 ( );
         
         default:
            cout << endl << "ERRO: Valor invalido." << endl;
      } // fim escolher
   }
   while ( x != 0 );
// encerrar
   pause ( "Apertar ENTER para terminar" );
   return ( 0 );
} // fim main( )

// OBS.: FUNCOES PRECISAM SER EXERCITADAS.
//       OBSERVAR OS EXEMPLOS. RESPEITAR OS REQUISITOS.

