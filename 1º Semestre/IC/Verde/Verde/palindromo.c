#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

bool palindromo(char frase[]);

int main ()
{
    char frase[100];
    int numero = 0;

    while(numero != 1){
        printf("Digite uma frase para verificar se e um palindromo ('FIM' para sair): ");
        gets(frase);

        if(frase[0] == 'F' && frase[1] == 'I' && frase[2] == 'M' && frase[3] == '\0'){
            numero = 1;
            puts(frase);
        }
        else{
            if(palindromo(frase) == true){
                printf("SIM\n");
            }
            else{
                printf("NAO\n");
            }
        }
    }

    return 0;
}

bool palindromo(char frase[]){
    int t = strlen(frase);
    char inv[t-1];
    inv[t-1] = '\0';

    for(int i = 0; i < t-1; i++){
        inv[i] = frase[(t-1)-i];
    }

    for(int i = 0; i < t-1; i++){
        if(frase[i] != inv[i]){
            return false;
        }
    }

    return true;
}
