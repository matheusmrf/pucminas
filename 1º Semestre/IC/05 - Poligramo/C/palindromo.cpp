#include "stdio.h"
#include "string.h"

int main(){

char Palin[1024];
char fim[]="FIM\n";
int i;
int tamanho;
int ao=0;

do{

tamanho=0;
i=0;
ao=0;

//scanf("%s",&Palin);
fgets(Palin, sizeof(Palin), stdin);

if(strcmp (fim,Palin) == 0){
    break;
}

tamanho=strlen(Palin) - 1;

for(i=0;i<tamanho;i++){
    if(Palin[i]!=Palin[tamanho-i-1]){
        ao=1;
    }
}
 if (ao) {
        printf("NAO\n", Palin);
    }
    else {
        printf("SIM\n", Palin);
    }


}while (1);
return 0;

}