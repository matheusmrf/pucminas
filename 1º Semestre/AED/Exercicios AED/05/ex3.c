#include <stdio.h>


//Matheus Rangel de Figueiredo

int mutiplo(int x)
{
   int y =0;
   y=3*x;
   return(y);
}

void main()
{
   int x= 0;
   int z=0;
   int c=0;
   int h = 1;

   printf("Quantos mutiplos quer?: ");
   scanf("%i",&x);

   while (c<=x)
   {
      z = mutiplo (c);
      if(z%2==0)
      {
         printf("\nPar[%i*] %i ",h,z);


      }

       h = h+1;

         c=c+1;




   }
}
