#include "stdio.h"
#include "string.h"


int main(){

char Palin[200];
char fim[]="FIM";
int i;
int tamanho;
int ao=0;



do{

tamanho=0;
i =0;
ao=0;

scanf("%s",&Palin);

tamanho=strlen(Palin);

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


}while (strcmp (fim,Palin) != 0);
return 0;

}
