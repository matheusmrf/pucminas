// Verificacao de aprendizagem #02
// Matricula - Nome
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void metodo_01 ( void )
{
     printf ( "\nQuestao_01\n" );
     getchar( );
}

void metodo_02 ( void )
{
     printf ( "\nQuestao_02\n" );
     getchar( );
}

void metodo_03 ( void )
{
     printf ( "\nQuestao_03\n" );
     getchar( );
}

int main ( void )
{
    int option = 0;
    
    printf ( "\nA2020-1_02:\n"  );
//  colocar matricula e nome
    printf ( "\n999999 - xxx\n"  );
    do
    {
       printf ( "\nOption: "  );
       scanf  ( "%d", &option );
       switch ( option )
       {
         case 0:
           break;
         case 1:
            metodo_01( );
           break;
         case 2:
            metodo_02( );
           break;
         case 3:
            metodo_03( );
           break;
         default:
           break;
       }       
    }
    while ( option != 0 );
    return ( 0 );
}