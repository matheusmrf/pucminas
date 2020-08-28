#include "io.h"

//Author: Matheus Rangel de Figueiredo - 699742

void mostrar(int linhas, int colunas, int matriz[linhas][colunas])
{

    for (int i = 0; i < linhas; i++) // fazer dois for o primeiro para ler as linhas e o segundo para as colunas
    {
        for (int z = 0; z < colunas; z++)
        {
            // mostrar a matriz no motitor serial
            printf("%3d\t", matriz[i][z]);
        }
        IO_printf("\n");
    }
}

int lerDoTeclado(int linhas, int colunas, int matriz[linhas][colunas])
{

    int x = 0;
    chars text = IO_new_chars(STR_SIZE); // definir o tamanho
    // ler as linhas
    for (int i = 0; i < linhas; i++)
    {
        for (int z = 0; z < colunas; z++)
        {
            // ler do teclado

            strcpy(text, STR_EMPTY);
            x = IO_readint(IO_concat(
                IO_concat(IO_concat(text, IO_toString_d(i)), ", "),
                IO_concat(IO_concat(text, IO_toString_d(z)), " : ")));

            matriz[i][z] = x;
        }
    }
    // retornar para a int main a matriz modificada
    return matriz;
}

int ex1()
{
    // declarar as variaves
    int linhas = 0;
    int colunas = 0;

    // ler valores
    printf("Quantas linhas:");
    scanf("%d", &linhas);
    printf("Quantas colunas:");
    scanf("%d", &colunas);
    // testar para não ocorrer erros
    if (linhas <= 0 || colunas <= 0 || linhas > 10 || colunas > 10)
    {
        printf("\nErro");
    }
    else
    {

        //declarar a matriz
        int matriz[linhas][colunas];
        // mandar para a fução e receber o return
        matriz[linhas][colunas] = lerDoTeclado(linhas, colunas, matriz);
        // mandar o return para outra função
        mostrar(linhas, colunas, matriz);
        // gravar matriz
        arquivoG("matheus.txt", linhas, colunas, matriz);


    }
    return 0;
} // fim ex 1

int ex2()
{

    int linhas = 0, colunas = 0;
    int matriz[linhas][colunas];
    arquivoL("matheus.txt", linhas, colunas, matriz);
}
int ex3()
{
    // declarar as variaves
    int linhas = 0;
    int colunas = 0;
    int k;

    // ler valores
    printf("Quantas linhas:");
    scanf("%d", &linhas);
    printf("Quantas colunas:");
    scanf("%d", &colunas);
    // testar para não ocorrer erros
    if (linhas <= 0 || colunas <= 0 || linhas > 10 || colunas > 10)
    {
        printf("\nErro");
    }
    else
    {

        //declarar a matriz
        int matriz[linhas][colunas];
        // mandar para a fução e receber o return
        matriz[linhas][colunas] = lerDoTeclado(linhas, colunas, matriz);
        // mandar o return para outra função
        mostrar(linhas, colunas, matriz);
        Dp(linhas, colunas, matriz); // diagonal principal
    }
}
int ex4()
{
    // declarar as variaves
    int linhas = 0;
    int colunas = 0;
    int k;

    // ler valores
    printf("Quantas linhas:");
    scanf("%d", &linhas);
    printf("Quantas colunas:");
    scanf("%d", &colunas);
    // testar para não ocorrer erros
    if (linhas <= 0 || colunas <= 0 || linhas > 10 || colunas > 10)
    {
        printf("\nErro");
    }
    else
    {

        //declarar a matriz
        int matriz[linhas][colunas];
        // mandar para a fução e receber o return
        matriz[linhas][colunas] = lerDoTeclado(linhas, colunas, matriz);
        // mandar o return para outra função
        mostrar(linhas, colunas, matriz);
        Ds(linhas, colunas, matriz); // diagonal secundaria
    }
}
int ex5()
{
    // declarar as variaves
    int linhas = 0;
    int colunas = 0;
    int k;

    // ler valores
    printf("Quantas linhas:");
    scanf("%d", &linhas);
    printf("Quantas colunas:");
    scanf("%d", &colunas);
    // testar para não ocorrer erros
    if (linhas <= 0 || colunas <= 0 || linhas > 10 || colunas > 10)
    {
        printf("\nErro");
    }
    else
    {

        //declarar a matriz
        int matriz[linhas][colunas];
        // mandar para a fução e receber o return
        matriz[linhas][colunas] = lerDoTeclado(linhas, colunas, matriz);
        // mandar o return para outra função
        mostrar(linhas, colunas, matriz);
        numeorAdp(linhas, colunas, matriz); // numeros abaixo da diagonal principal
    }
}
int ex6()
{
    // declarar as variaves
    int linhas = 0;
    int colunas = 0;
    int k;

    // ler valores
    printf("Quantas linhas:");
    scanf("%d", &linhas);
    printf("Quantas colunas:");
    scanf("%d", &colunas);
    // testar para não ocorrer erros
    if (linhas <= 0 || colunas <= 0 || linhas > 10 || colunas > 10)
    {
        printf("\nErro");
    }
    else
    {

        //declarar a matriz
        int matriz[linhas][colunas];
        // mandar para a fução e receber o return
        matriz[linhas][colunas] = lerDoTeclado(linhas, colunas, matriz);
        // mandar o return para outra função
        mostrar(linhas, colunas, matriz);
        numeroCdp(linhas, colunas, matriz); // numeroa acima da diagonal principal
    }
}
int ex7()
{
    // declarar as variaves
    int linhas = 0;
    int colunas = 0;
    int k;

    // ler valores
    printf("Quantas linhas:");
    scanf("%d", &linhas);
    printf("Quantas colunas:");
    scanf("%d", &colunas);
    // testar para não ocorrer erros
    if (linhas <= 0 || colunas <= 0 || linhas > 10 || colunas > 10)
    {
        printf("\nErro");
    }
    else
    {

        //declarar a matriz
        int matriz[linhas][colunas];
        // mandar para a fução e receber o return
        matriz[linhas][colunas] = lerDoTeclado(linhas, colunas, matriz);
        // mandar o return para outra função
        mostrar(linhas, colunas, matriz);
        numerosAds(linhas, colunas, matriz); // numeros acima da diagonal secundaria
    }
}
int ex8()
{
    // declarar as variaves
    int linhas = 0;
    int colunas = 0;
    int k;

    // ler valores
    printf("Quantas linhas:");
    scanf("%d", &linhas);
    printf("Quantas colunas:");
    scanf("%d", &colunas);
    // testar para não ocorrer erros
    if (linhas <= 0 || colunas <= 0 || linhas > 10 || colunas > 10)
    {
        printf("\nErro");
    }
    else
    {

        //declarar a matriz
        int matriz[linhas][colunas];
        // mandar para a fução e receber o return
        matriz[linhas][colunas] = lerDoTeclado(linhas, colunas, matriz);
        // mandar o return para outra função
        mostrar(linhas, colunas, matriz);
        numerosAds(linhas, colunas, matriz); // numeros acima da diagonal secundaria
    }
}
int ex9()
{
    // declarar as variaves
    int linhas = 0;
    int colunas = 0;
    int k;

    // ler valores
    printf("Quantas linhas:");
    scanf("%d", &linhas);
    printf("Quantas colunas:");
    scanf("%d", &colunas);
    // testar para não ocorrer erros
    if (linhas <= 0 || colunas <= 0 || linhas > 10 || colunas > 10)
    {
        printf("\nErro");
    }
    else
    {

        //declarar a matriz
        int matriz[linhas][colunas];
        // mandar para a fução e receber o return
        matriz[linhas][colunas] = lerDoTeclado(linhas, colunas, matriz);
        // mandar o return para outra função
        mostrar(linhas, colunas, matriz);
        numerosCds(linhas, colunas, matriz); // numeros abaixo da diagonal secundaria
    }
}
int ex10()
{
    // declarar as variaves
    int linhas = 0;
    int colunas = 0;
    int k;

    // ler valores
    printf("Quantas linhas:");
    scanf("%d", &linhas);
    printf("Quantas colunas:");
    scanf("%d", &colunas);
    // testar para não ocorrer erros
    if (linhas <= 0 || colunas <= 0 || linhas > 10 || colunas > 10)
    {
        printf("\nErro");
    }
    else
    {

        //declarar a matriz
        int matriz[linhas][colunas];
        // mandar para a fução e receber o return
        matriz[linhas][colunas] = lerDoTeclado(linhas, colunas, matriz);
        // mandar o return para outra função
        mostrar(linhas, colunas, matriz);
        ChecarN(linhas, colunas, matriz); // checar numeros null
    }
}
void arquivoG(chars fileName, int linhas, int colunas, int matriz[linhas][colunas])
{

    // abrir o arquivo

    FILE *arquivo = fopen(fileName, "a");

    IO_fprintf(arquivo, " %d\n %d\n", linhas, colunas);

    for (int i = 0; i < linhas; i++)
    {
        for (int z = 0; z < colunas; z++)
        {

            IO_fprintf(arquivo, "%3d\t", matriz[i][z]);
        }
        IO_printf("\n");
    }

    fclose(arquivo);
}

void arquivoL(chars fileName, int linhas, int colunas, int matriz[linhas][colunas])
{

    FILE *arquivo = fopen(fileName, "r");

    int i, z, x = 0, y = 0;
    IO_fscanf(arquivo, "%d\n%d", &linhas, &colunas);
    if (linhas <= 0 || colunas <= 0)
    {

        printf("Arquivo apresenta Erros:");
    }
    else
    {
        for (i = 0; i < linhas && (!feof(arquivo)); i++)
        {
            for (z = 0; z < colunas && (!feof(arquivo)); z++)
            {
                IO_fscanf(arquivo, "%d\n", &y);
                matriz[i][z] = y;
            }
        }

        mostrar(linhas, colunas, matriz);
    }
}
// void diagonal principal
void Dp(int linhas, int colunas, int matriz[linhas][colunas])
{

    if (linhas == colunas)
    { // inicia num certo lugar
        for (int i = 0; i < linhas; i++)
        { // como na diagonal principal colunas e linhas aumemtam 1 é so colocar o mesmo valor varial nelas que ira funcinar
            printf("\nSua diagonal principal eh %i ", matriz[i][i]);
        }
    }
    else
    {
        printf("nao eh uma matriz quadrada");
    }
}
//  void da diagonal segundaria
void Ds(int linhas, int colunas, int matriz[linhas][colunas])
{ // variaveos
    int e = 0;

    int p = colunas - 1;
    // testar se sao quadradas
    if (linhas == colunas)
    {
        // pegar o lugar onde vamos iniciar
        for (int i = p; i >= 0; --i)
        { // jogar na tela                          // o i como numa diagonal segundaria ele vai diminuir e o e vai aumentar e por isso utilizamos isso
            printf("\nSua diagonal secundaria eh %i ", matriz[e][i]);
            ++e;
        }
    }
    else
    {
        printf("nao eh uma matriz quadrada");
    }
}
// esse void mostra os numeros abaixo da diagonal principal
void numeorAdp(int linhas, int colunas, int matriz[linhas][colunas])
{
    // variaveis
    int e = 0, d = 0, j = 0;
    // verificarse é quadrada
    if (linhas == colunas)
    { // ler as linhas
        for (int i = 1; i < linhas; i++)
        { // mostrar no monitor
            printf("\nOs numeros abaixo da Diagona principal sao %i ", matriz[i][e]);

            ++j;
        }
        if (linhas >= 3)
        {
            for (int z = 1; z < colunas - 1; z++)
            {
                int i = linhas - 1;
                printf("\nOs numeros abaixo da Diagona principal sao %i ", matriz[i][z]);
            }
            if (linhas > 3)
            {
                int i = linhas - 1;
                int t = linhas - i;

                --i;
                printf("\nOs numeros abaixo da Diagona principal sao %i ", matriz[i][t]);
            }
        }
    }
}
// mostrar os numeros acima da diagona pricipal
void numeroCdp(int linhas, int colunas, int matriz[linhas][colunas])
{ // variaveis
    int e = 0, d = 0, j = 0, p = colunas - 1;
    // verificarse é quadrada
    if (linhas == colunas)
    { // ler as linhas
        for (int i = 1; i < linhas; i++)
        { // como tem que ser acima da diagona principal devemos colocar as linhas como 0 no incio pois so as colunas vao variar e quando for a hora colocarmos valor a linhas
            printf("\nOs numeros acima da Diagona principal sao %i ", matriz[e][i]);

            ++j;
        }
        if (linhas >= 3)
        {
            for (int z = 1; z < linhas - 1; z++)
            {
                // mostrar os numeros da ultima coluna na vertical
                printf("\nOs numeros acima da Diagona principal sao %i ", matriz[z][p]);
            }
            if (linhas > 3)
            {
                int i = linhas - 1;
                int t = linhas - i;

                --i;
                // mostar numeros no meio da matriz
                printf("\nOs numeros acima da Diagona principal sao %i ", matriz[t][i]);
            }
        }
    }
}

void numerosCds(int linhas, int colunas, int matriz[linhas][colunas])
{

    int e = 0, d = 0, j = 0;
    // verificarse é quadrada
    if (linhas == colunas)
    { // ler as linhas
        for (int i = 0; i < linhas - 1; i++)
        { // como tem que ser acima da diagona principal devemos colocar as linhas como 0 no incio pois so as colunas vao variar e quando for a hora colocarmos valor a linhas
            printf("\nOs numeros acima da Diagona secundaria sao %i ", matriz[e][i]);
        }
        if (linhas >= 3)
        {
            for (int z = 1; z < colunas - 1; z++)
            {
                // mostrar os numeros da ultima coluna na vertical
                printf("\nOs numeros acima da Diagona secundaria sao %i ", matriz[z][j]);
            }
            if (linhas > 3)
            {
                int i = linhas - 1;
                int t = linhas - i;
                for (int l = 1; l <= t; l++)
                { // pegar os numeros do meio
                    printf("\nOs numeros acima da Diagona secundaria sao %i ", matriz[l][l]);
                }
            }
        }
    }
}
void numerosAds(int linhas, int colunas, int matriz[linhas][colunas])
{

    int e = colunas - 1, d = 0, j = 0;
    // verificarse é quadrada
    if (linhas == colunas)
    { // ler as linhas
        for (int i = 1; i <= linhas - 1; i++)
        { // como tem que ser acima da diagona principal devemos colocar as linhas como 0 no incio pois so as colunas vao variar e quando for a hora colocarmos valor a linhas
            printf("\nOs numeros abaixo da Diagona secundaria sao %i ", matriz[i][e]);
        }
        if (linhas >= 3)
        {
            for (int z = 1; z < e; z++)
            {
                // mostrar os numeros da ultima coluna na vertical
                printf("\nOs numeros abaixo da Diagona secundaria sao %i ", matriz[e][z]);
            }
            if (linhas > 3)
            {
                int i = linhas - 1;
                int t = linhas - i;
                for (int l = e - 1; l > t; l--)
                { // pegar os numeros do meio
                    printf("\nOs numeros abaixo da Diagona secundaria sao %i ", matriz[l][l]);
                }
            }
        }
    }
}
void ChecarN(int linhas, int colunas, int matriz[linhas][colunas])
{

    int null = 0;                   // OBS.: MELHOR ESCOLHER OUTRO NOME. PODERA' CONFUNDIR.
    int e = 0, d = 0;

    if (linhas == colunas)
    {
        for (int i = 1; i < linhas; i++)
        {
            if (matriz[i][e] == 0)
            {
                ++null;
            }
            else
            {

                ++d;

                if (d >= linhas - 1)
                {
                    e = d - 1;
                    if (matriz[i][e] == 0)
                    {
                        ++null;
                    }
                }
            }
        }

        printf("\nExtistem %d de numeros null", null);
    }
}
int main()
{

    int x;
    printf("ex");
    scanf("%i", &x);

    switch (x)
    {
    case 0:

        break;
    case 1:
        ex1();
        break;
    case 2:
        ex2();
        break;
    case 3:
        ex3();
        break;
    case 4:
        ex4();
        break;
    case 5:
        ex5();
        break;
    case 6:
        ex6();
        break;
    case 7:
        ex7();
        break;
    case 8:
        ex8();
        break;
    case 9:
        ex9();
        break;
    case 10:
        ex10();
        break;
    }
    IO_pause("Apertar ENTER para terminar");
    return (0);
}
