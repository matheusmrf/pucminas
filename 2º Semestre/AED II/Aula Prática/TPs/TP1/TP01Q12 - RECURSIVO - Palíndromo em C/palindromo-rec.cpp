#include <stdio.h>

int falso=0, verdadeiro=1, tamanho=1000;

// Método que retorna o tamanho de uma string
int length(char str[]){
        int cont = 0;
        while(str[cont] != '\0'){
                cont++;
        }
        return cont;
}

int igualRecursivo(char palavraA[], char palavraB[], int i){
	int ehIgual;
	if(i >= length(palavraA)){
		ehIgual = verdadeiro;
	} else if(palavraA[i] != palavraB[i]){
		ehIgual = falso;
	} else{
		ehIgual = igualRecursivo(palavraA, palavraB, i+1);
	}
	return ehIgual;
}

int igual(char palavraA[], char palavraB[]){
	int ehIgual = verdadeiro;
	if(length(palavraA) != length(palavraB)){
                ehIgual = falso;
	} else {
		ehIgual = igualRecursivo(palavraA, palavraB, 0);
	}
        return ehIgual;
}

char *trim(char *string) {
	int i = length(string)-1;
	if ((i > 0) && (string[i] == '\n')){
		string[i] = '\0';
	}
	return string;
}

// Método que retorna verdadeiro se for um palíndromo
int ehPalindromoRecursivo(char palavra[], int i){
	int ehPalindromo,
	    ultimoChar = length(palavra)-1;

	if(i>=(float)ultimoChar/2){
		ehPalindromo = verdadeiro;
	} else if(palavra[i] != palavra[ultimoChar-i]){
		ehPalindromo = falso;
	} else{
		ehPalindromo = ehPalindromoRecursivo(palavra, i+1);
	}
	return ehPalindromo;
}

int ehPalindromo(char palavra[]){
	return ehPalindromoRecursivo(palavra, 0);
}

int main(){
	int i=0;
	char entrada[tamanho];
	char fim[] = "FIM";

	fgets(entrada, tamanho, stdin);
	while(igual(trim(entrada), fim) == falso){
		//Verifica se a palavra é um palíndromo
		if(ehPalindromo(entrada) == verdadeiro){
			printf("%s", "SIM\n");
		} else{
			printf("%s", "NAO\n");
		}
		fgets(entrada, tamanho, stdin);
	}

	return 0;
}
