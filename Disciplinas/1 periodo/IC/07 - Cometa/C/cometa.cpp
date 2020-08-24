#include <stdio.h>
#include <stdlib.h>

int anoCometa(int ano_atual){
    int tempo_restante = 76 - ((ano_atual - 1986) % 76);
    if(tempo_restante == 0)
        return ano_atual + 76;
    else
        return (ano_atual + tempo_restante);
}

int main(){
    int ano;
    while(1){
        scanf("%i", &ano);
        if(ano == 0)
            break;
        else{
            printf("%i\n", anoCometa(ano));
        }
    }
}