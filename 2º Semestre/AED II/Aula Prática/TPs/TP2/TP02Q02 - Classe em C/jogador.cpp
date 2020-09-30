#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 1000

struct Jogador {
    int id;
    char nome[100];
    int altura;
    int peso;
    char universidade[100];
    int anoNascimento;
    char cidadeNascimento[100];
    char estadoNascimento[100]; 
};

int fileSize() {
    FILE *arq = fopen("players.csv", "r");
    int i;
    char linha[MAX];
    i = 0;
    while (!feof(arq)) {
        fgets(linha, MAX, arq);
        i++;
    }
    fclose(arq);
    return i;
}

void removerQuebra(char line[]) {
    int tamanho = strlen(line);
    if (line[tamanho - 2] == '\r' && line[tamanho - 1] == '\n') {
        line[tamanho - 2] = '\0';
    } else if (line[tamanho - 1] == '\r' || line[tamanho - 1] == '\n') {
        line[tamanho - 1] = '\0';
    }
}

void separarNoVetor(char *str, char *infos[]) {
    char *prt;
    prt = strsep(&str, ",");
    for (int i = 0; i < 8; i++) {
        infos[i] = prt;
        prt = strsep(&str, ",");
    }
}

struct Jogador getJogadorByLine(char line[MAX]) {
    struct Jogador jogador;

    char *playerData[8];
    removerQuebra(line);
    separarNoVetor(line, playerData);
    jogador.id = atoi(playerData[0]);
    stpcpy(jogador.nome, (const char *) playerData[1]);
    jogador.altura = atoi(playerData[2]);
    jogador.peso = atoi(playerData[3]);

    if (*playerData[4] == '\0') {
        stpcpy(jogador.universidade, "nao informado");
    } else {
        stpcpy(jogador.universidade, (const char *) playerData[4]);
    }

    jogador.anoNascimento = atoi(playerData[5]);

    if (*playerData[6] == '\0') {
        stpcpy(jogador.cidadeNascimento, "nao informado");
    } else {
        stpcpy(jogador.cidadeNascimento, (const char *) playerData[6]);
    }
    if (*playerData[7] == '\0') {
        stpcpy(jogador.estadoNascimento, "nao informado");
    } else {
        stpcpy(jogador.estadoNascimento, (const char *) playerData[7]);
    }
    return jogador;
}

void imprimir(Jogador jogador) {
    printf("[ %d ## %s ## %d ## %d ## %s ## %d ## %s ## %s ]\n", jogador.id, jogador.nome, jogador.altura, jogador.peso,
           jogador.universidade, jogador.anoNascimento, jogador.cidadeNascimento, jogador.estadoNascimento);
}

int main() {
    int size = fileSize();
    Jogador jogadores[size];
    int position = 0;

    FILE *arq = fopen("players.csv", "r");
    char linha[MAX];
    fgets(linha, MAX, arq);

    while (position < (size - 1)) {
        fgets(linha, MAX, arq);
        jogadores[position] = getJogadorByLine(linha);
        position++;
    }
    fclose(arq);

    char id[10];
    scanf("%s",id);
    while(strcmp(id, "FIM") != 0){
        imprimir(jogadores[atoi(id)]);
        scanf("%s",id);
    }
    return 0;
}
