#include <stdio.h>
#include "io.h"

void Ex1()
{


   int x=0;
   int y=0;
   int  numero =0;


   printf("Informe qual sera o inicio do seu intervalo:");
   scanf("%d",&x);
   printf("Informe qual sera o fim do seu intervalo:");
   scanf("%i",&y);

   if(x==y)
   {
      printf("Os numeros nao sao validos");
   }

   do
   {
      printf("\ndifite numeros para saber se estao dentro dos intervalos:" );
      scanf("%d", &numero);

      if((numero>=x)&&(numero<=y))
      {
         printf ("\n O numero (%d) digitado esta na faixa entre [%d] e [%i]",numero,x,y);
      }
      else
      {
         printf ("\n O numero (%d) digitado esta fora da faixa entre [%d] e [%i] ",numero,x,y);
      }

   }
      while(numero==numero);  // OBS.: ESSA CONDICAO NAO FAZ SENTIDO!
}

void Ex2()
{
   char x = '_';
   int contador = 0;
   printf("\nDigite numero para terminar ex 2\n");

   do
   {

      printf("Entrar com uma letra :");
      scanf("%s",&x);

      if ('A' <= x && x <= 'Z')
      {
         contador = contador + 1;
         printf("%d letras maiusculas (%c)\n", contador, x);
      }
   } while ('A' <= x && x <= 'Z' || 'a' <= x && x <= 'z');
}

bool A_Maiuscula1 (char x)
{

   bool result = false;

   if ('A' <= x && x <= 'Z')
   {
      result = true;
   }
   return (result);
}

void Ex3()
{

   chars palavra = IO_new_chars(STR_SIZE);
   int tamanho = 0;
   int posicao = 0;
   char simbolo = '_';
   int contador = 0;


   printf("Entrar com uma letra :");
   scanf("%c",&palavra);


   tamanho = strlen(palavra);

   for (posicao = 0; posicao < tamanho; posicao = posicao + 1)
   {

      simbolo = palavra[posicao];

      if (A_Maiuscula1(simbolo))
      {

         contador = contador + 1;
      }
   }

   IO_printf("\n%s%d\n", "Maiusculas = ", contador);


}

bool A_Maiuscula2(char x)
{

   bool result = false;

   if ('A' <= x && x <= 'Z')
   {
      result = true;
   }
   return (result);
}

void Ex4()
{
    // definir dado
   chars palavra = IO_new_chars(STR_SIZE);
   int tamanho = 0;
   int posicao = 0;
   char simbolo = '_';
   int contador = 0;


   printf ( "Entrar com palavras:");
   scanf  ( "%s", palavra );

   tamanho = strlen(palavra);

   for (posicao = 0; posicao < tamanho; posicao = posicao + 1)
   {

      simbolo = palavra[posicao];

      if (A_Maiuscula2(simbolo))
      {

         IO_printf("%c ", simbolo);
      }
   }


}

bool A_minuscula1(char x)
{

   bool result = false;

   if ('A' <= x && x <= 'Z')
   {
      result = true;
   }
   return (result);
}

bool A_Maiuscula3(char x)
{

   bool result = false;

   if ('a' <= x && x <= 'z')
   {
      result = true;
   }
   return (result);
}

void Ex5()
{

   chars palavra = IO_new_chars(STR_SIZE);
   int tamanho = 0;
   int posicao = 0;
   char simbolo = '_';
   int contador1 = 0;
   int contador2 = 0;

   printf ( "Entrar com palavras:");
   scanf  ( "%s", palavra );


   tamanho = strlen(palavra);

   for (posicao = 0; posicao < tamanho; posicao = posicao + 1)
   {

      simbolo = palavra[posicao];

      if (A_Maiuscula3(simbolo))
      {

         contador1 = contador1 + 1;
      }
   }
   for (posicao = 0; posicao < tamanho; posicao = posicao + 1)
   {

      simbolo = palavra[posicao];

      if (A_minuscula1(simbolo))
      {

         contador2 = contador2 + 1;
      }
   }

   IO_printf("\n%s%d\n", "Maiusculas = ", contador1);
   IO_printf("\n%s%d\n", "Minusculas = ", contador2);

}

bool A_Maiuscula4(char x)
{

   bool result = false;

   if ('A' <= x && x <= 'Z')
   {
      result = true;
   }
   return (result);
}

bool a_minuscula2(char x)
{

   bool result = false;

   if ('a' <= x && x <= 'z')
   {
      result = true;
   }
   return (result);
}

void Ex6()
{
   chars palavra = IO_new_chars(STR_SIZE);
   int tamanho = 0;
   int posicao = 0;
   char simbolo = '_';
   int contador = 0;

   printf ( "Entrar com palavras:");
   scanf  ( "%s", palavra );

   tamanho = strlen(palavra);
   printf("\nMaiusculas :");
   for (posicao = 0; posicao < tamanho; posicao = posicao + 1)
   {

      simbolo = palavra[posicao];

      if (a_minuscula2(simbolo))
      {
         IO_printf("%c ", simbolo);
      }
   }
   printf("\n");

   printf("\nMinusculas :");
   for (posicao = 0; posicao < tamanho; posicao = posicao + 1)
   {

      simbolo = palavra[posicao];

      if (A_Maiuscula4(simbolo))
      {
         IO_printf("%c ", simbolo);
      }
   }


}

bool A_par ( char x )
{

   bool result = false;

   if ( ((int) x) % 2 == 0 )
   {
      result = true;
   }
   return ( result );
}

void Ex7()
{
   chars palavra = IO_new_chars(STR_SIZE);
   int tamanho = 0;
   int posicao = 0;
   char simbolo = '_';
   int contador = 0;

   printf ( "Entrar com numero:");
   scanf  ( "%s", palavra );

   tamanho = strlen(palavra);
   for (posicao = 0; posicao < tamanho; posicao = posicao + 1)
   {

      simbolo = palavra[posicao];
      if (A_par(simbolo))
      {

         contador = contador + 1;
      }
   }

   IO_printf("\n%s%d\n", "Numero par  = ", contador);


}

void Ex8()
{
   int x = 0;
   int y = 0;
   chars palavra = IO_new_chars(STR_SIZE);
   int tamanho = 0;
   int n = tamanho;
  printf ( "Entrar com palavras:");
   scanf  ( "%s", palavra );

   tamanho = strlen(palavra) - 1;
   for (y = tamanho; y >= 0; y = y - 1)
   {
      if (('A' <= palavra[y] && palavra[y] <= 'Z') &&
          ('a' <= palavra[y] && palavra[y] <= 'z') &&   // OBS.: MELHOR ASSIM
          ('0' <= palavra[y] && palavra[y] <= '9'))
      {
         n++;
         printf("[%c] \n", palavra[y]);
      }
   }
}

void Ex9()
{


   int x = 0;
   int y = 0;
   chars palavra = IO_new_chars(STR_SIZE);
   int tamanho = 0;
   int n = tamanho;


   printf ( "Entrar com sequencia:");
   scanf  ( "%s", palavra );


   tamanho = strlen(palavra) - 1;

   for (y = tamanho; y >= 0; y = y - 1)
   {
      if (('A' <= palavra[y] && palavra[y] <= 'Z') &&
          ('a' <= palavra[y] && palavra[y] <= 'z') &&     // OBS.: MELHOR ASSIM
          ('0' <= palavra[y] && palavra[y] <= '9'))
      {
         n++;
         printf("[%c] \n", palavra[y]);
      }
   }
}

void Ex10()
{
   int x = 0;
   int y = 0;
   chars palavra = IO_new_chars(STR_SIZE);
   int tamanho = 0;
   int n = tamanho;
   int contador = 0;
   printf("coloque um numero negativo para acabar  ");
   do
   {

      printf ( "Entrar com sequencia:");
        scanf  ( "%s", palavra );

      tamanho = strlen(palavra) - 1;
      for (y = tamanho; y >= 0; y = y - 1)
      {
         if (('A' <= palavra[y] && palavra[y] <= 'Z') &&
             ('a' <= palavra[y] && palavra[y] <= 'z') &&  // OBS.: MELHOR ASSIM
             ('0' <= palavra[y] && palavra[y] <= '9'))
         {
            n++;
            contador = contador + 1;
            printf("%d: [%c]\n", n, palavra[y]);
         }
      }
   } while (palavra[0] < '0' && palavra[1] < '\0');
   printf("\n tem  %d símbolos alfanumericos no total .", contador);
}

int main()
{
   int x = 0;
   printf("Matheus Figueiredo");

   printf ( "\nQual exercicio de 1 a 10 vc quer ver :");
   scanf  ( "%s", palavra );

   switch (x)
   {
      case 1:
         Ex1();
         break;
      case 2:
         Ex2();
         break;
      case 3:
         Ex3();
         break;
      case 4:
         Ex4();
         break;
      case 5:
         Ex5();
         break;
      case 6:
         Ex6();
         break;
      case 7:
         Ex7();
         break;
      case 8:
         Ex8();
         break;
      case 9:
         Ex9();
         break;
      case 10:
         Ex10();
         break;
      case 11:
         break;
      default:
         printf("Nunero incorreto");
   }

    // encerrar
   printf("\n\nApertar ENTER para terminar.");
   getchar();
   return (0);
    // fim main( )
}
