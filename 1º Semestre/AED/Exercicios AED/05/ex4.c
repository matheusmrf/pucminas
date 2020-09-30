#include <stdio.h>
#include "io.h"


//Matheus Rangel de Figueiredo

int mutiplo(int x)
{
   int y =0;
   int z = 0.1;

   y=3*x*z;

   return(y);
}

void main()
{
   int x= 0;
   int z=0;
   int c=0;

   printf("Quantos mutiplos quer?: ");
   scanf("%d",&x);

   {
      c=1;
   }
   while (c<=x)
   {
      z = mutiplo (c);
      printf("\n%d",z);
      c=c+1;
   }
}
