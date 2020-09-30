/*
Exemplo0719 - v0.0. - 30 / 05 / 2020
Author: Matheus Rangel de Figueiredo - 699742
*/
// dependencias
#include "io.h" // para definicoes proprias
#include <stdio.h>
#include <math.h>

void method00 ( )
{
// nao faz nada
} // fim method00 ( )

/**
writeInts - Gravar em arquivo texto certa quantidade de valores.
@param fileName - nome do arquivo
@param x - quantidade de valores
*/
void writeInts ( chars fileName, int x )
{
// definir dados
   FILE* arquivo = fopen ( fileName, "wt" );
   int y = 0;
// repetir para a quantidade de dados
   for ( y = 1; y <= x; y = y + 1 )
   {
   // gravar valor
      fprintf ( arquivo, "%d\n", y );
   } // fim repetir
// fechar arquivo (INDISPENSAVEL para gravacao)
   fclose ( arquivo );
} // fim writeInts ( )
/**
Method01 - Mostrar certa quantidade de valores.
*/
void method01 ( )
{
// identificar
   IO_id ( "EXEMPLO0702 - Method01 - v0.0" );
// executar o metodo auxiliar
   writeInts ( "DADOS1.TXT", 10 );
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method01 ( )

/**
readInts - Ler de arquivo texto certa quantidade de valores.
@param fileName - nome do arquivo
@param x - quantidade de valores
*/
void readInts ( chars fileName )
{
// definir dados
   FILE* arquivo = fopen ( fileName, "rt" );
   int x = 0;
// tentar ler o primeiro
   fscanf ( arquivo, "%d", &x );
// repetir enquanto houver dados
   while ( ! feof ( arquivo ) )
   {
   // mostrar valor
      printf ( "%d\n", x );
   // tentar ler o proximo
      fscanf ( arquivo, "%d", &x );
   } // fim repetir
// fechar arquivo (RECOMENDAVEL para leitura)
   fclose ( arquivo );
} // fim readInts ( )
/**
Method02.
*/
void method02 ( )
{
// identificar
   IO_id ( "EXEMPLO0702 - Method02 - v0.0" );
// executar o metodo auxiliar
   readInts ( "DADOS1.TXT" );
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method02 ( )

/**
writeDoubles - Gravar em arquivo texto certa quantidade de valores.
@param fileName - nome do arquivo
@param x - quantidade de valores
*/
void writeDoubles ( chars fileName, int x )
{
// definir dados
   FILE* arquivo = fopen ( fileName, "wt" );
   int y = 0;
// gravar quantidade de valores
   IO_fprintf ( arquivo, "%d\n", x );
// repetir para a quantidade de dados
   for ( y = 1; y <= x; y = y + 1 )
   {
   // gravar valor
      IO_fprintf ( arquivo, "%lf\n", (0.1*y) );
   } // fim repetir
// fechar arquivo (INDISPENSAVEL para gravacao)
   fclose ( arquivo );
} // fim writeDoubles ( )
/**
Method03.
*/
void method03 ( )
{
// identificar
   IO_id ( "EXEMPLO0703 - Method03 - v0.0" );
// executar o metodo auxiliar
   writeDoubles ( "DADOS2.TXT", 10 );
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method03 ( )

/**
readDoubles - Ler de arquivo texto certa quantidade de valores.
@param fileName - nome do arquivo
@param x - quantidade de valores
*/
void readDoubles ( chars fileName )
{
// definir dados
   FILE* arquivo = fopen ( fileName, "rt" );
   int x = 0 ;
   int y = 1 ;
   double z = 0.0;
// tentar ler a quantidade de dados
   fscanf ( arquivo, "%d", &x );
// repetir enquanto houver dados e
// quantidade nao tiver sido alcancada
   while ( ! feof ( arquivo ) && y <= x )
   {
   // tentar ler
      fscanf ( arquivo, "%lf", &z );
   // mostrar valor
      printf ( "%2d: %1.2lf\n", y, z );
   // passar ao proximo
      y = y + 1;
   } // fim repetir
// fechar arquivo (RECOMENDAVEL para leitura)
   fclose ( arquivo );
} // fim readDoubles ( )
/**
Method04.
*/
void method04 ( )
{
// identificar
   IO_id ( "EXEMPLO0704 - Method04 - v0.0" );
// executar o metodo auxiliar
   readDoubles ( "DADOS2.TXT" );
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method04 ( )

/**
writeText - Gravar em arquivo texto certa quantidade de valores.
@param fileName - nome do arquivo
@param x - quantidade de valores
*/
void writeText ( chars fileName )
{
// definir dados
   FILE* arquivo = fopen ( fileName, "wt" );
   chars linha = IO_new_chars ( STR_SIZE );
// repetir ate' desejar parar
   IO_println ( "Gravar linhas (para terminar, entrar com \"PARAR\"):\n" );
   do
   {
   // ler do teclado
      strcpy ( linha, IO_readln ( "" ) );
   // gravar valor
      IO_fprintf ( arquivo, "%s\n", linha );
   }
   while ( strcmp ( "PARAR", linha ) != 0 );
// fechar arquivo (INDISPENSAVEL para gravacao)
   fclose ( arquivo );
} // fim writeText ( )
/**
Method05.
*/
void method05 ( )
{
// identificar
   IO_id ( "EXEMPLO0705 - Method05 - v0.0" );
// executar o metodo auxiliar
   writeText ( "DADOS3.TXT" );
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method05 ( )

/**
readText - Ler de arquivo texto certa quantidade de valores.
@param fileName - nome do arquivo
*/
void readText ( chars fileName )
{
// definir dados
   FILE* arquivo = fopen ( fileName, "rt" );
   chars linha = IO_new_chars ( STR_SIZE );
// tentar ler o primeiro
   strcpy ( linha, IO_freadln ( arquivo ) );
// repetir enquanto houver dados
   while ( ! feof (arquivo) &&
   strcmp ( "PARAR", linha ) != 0 )
   {
   // mostrar valor
      printf ( "%s\n", linha );
   // tentar ler o proximo
      strcpy ( linha, IO_freadln ( arquivo ) );
   } // fim repetir
// fechar arquivo (RECOMENDAVEL para leitura)
   fclose ( arquivo );
} // fim readText ( )
/**
Method06.
*/
void method06 ( )
{
// identificar
   IO_id ( "EXEMPLO0706 - Method06 - v0.0" );
// executar o metodo auxiliar
   readText ( "DADOS3.TXT" );
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method06 ( )

/**
copyText - Copiar arquivo texto.
@param fileOut - nome do arquivo de saida (destino)
@param fileIn - nome do arquivo de entrada (origem )
*/
void copyText ( chars fileOut, chars fileIn )
{
// definir dados
   FILE* saida = fopen ( fileOut, "wt" );
   FILE* entrada = fopen ( fileIn , "rt" );
   chars linha = IO_new_chars ( STR_SIZE );
   int contador = 0;
// ler da origem
   strcpy ( linha, IO_freadln ( entrada ) );
// repetir enquanto houver dados
   while ( ! feof ( entrada ) )
   {
   // contar linha lida
      contador = contador + 1;
   // gravar no destino,
   // EXCEPCIONALMENTE sem a ultima linha, nesse caso
      if ( strcmp ( "PARAR", linha ) != 0 )
      {
         IO_fprintln ( saida, linha );
      } // fim se
   // ler da origem
      strcpy ( linha, IO_freadln ( entrada ) );
   } // fim repetir
// informar total de linhas copiadas
   IO_printf ( "Lines read = %d\n", contador );
// fechar arquivos
   fclose ( saida );
   fclose ( entrada );
} // fim copyText ( )
/**
Method07.
*/
void method07 ( )
{
// identificar
   IO_id ( "EXEMPLO0707 - Method07 - v0.0" );
// executar o metodo auxiliar
   copyText ( "DADOS4.TXT", "DADOS3.TXT" );
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method07 ( )

/**
appendText - Gravar em arquivo texto certa quantidade de valores.
@param fileName - nome do arquivo
@param x - quantidade de valores
*/
void appendText ( chars fileName )
{
// definir dados
   FILE* arquivo = fopen ( fileName, "at" );
   chars linha = IO_new_chars ( STR_SIZE );
// repetir ate' desejar parar
   IO_println ( "Gravar linhas (para terminar, entrar com \"PARAR\"):\n" );
   do
   {
   // ler do teclado
      strcpy ( linha, IO_readln ( "" ) );
   // gravar valor
      IO_fprintln ( arquivo, linha );
   }
   while ( strcmp ( "PARAR", linha ) != 0 );
// fechar arquivo (INDISPENSAVEL para gravacao)
   fclose ( arquivo );
} // fim appendText ( )
/**
Method08.
*/
void method08 ( )
{
// identificar
   IO_id ( "EXEMPLO0708 - Method08 - v0.0" );
// executar o metodo auxiliar
   appendText ( "DADOS4.TXT" );
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method08 ( )

/**
readWords - Ler palavras de arquivo.
@param fileName - nome do arquivo
*/
void readWords ( chars fileName )
{
// definir dados
   FILE* arquivo = fopen ( fileName, "rt" );
   chars linha = IO_new_chars ( STR_SIZE );
// tentar ler a primeira
   strcpy ( linha, IO_fread ( arquivo ) );
// repetir enquanto houver dados
   while ( ! feof (arquivo) && strcmp ( "PARAR", linha ) != 0 )
   {
   // mostrar valor
      printf ( "%s ", linha );
   // tentar ler o proximo
      strcpy ( linha, IO_fread ( arquivo ) );
   } // fim repetir
// fechar arquivo (RECOMENDAVEL para leitura)
   fclose ( arquivo );
} // fim readWords ( )
/**
Method09.
*/
void method09 ( )
{
// identificar
   IO_id ( "EXEMPLO0709 - Method09 - v0.0" );
// executar o metodo auxiliar
   readWords ( "DADOS4.TXT" );
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method09 ( )

/**
searchWord - Procurar palavra em arquivo.
@return true, se encontrar; false, caso contrario
@param fileName - nome do arquivo
@param word - palavra a procurar
*/
bool searchWord ( chars fileName, chars word )
{
// definir dados
   FILE* arquivo = fopen ( fileName, "rt" );
   chars linha = IO_new_chars ( STR_SIZE );
// tentar ler a primeira
   strcpy ( linha, IO_fread ( arquivo ) );
// repetir enquanto houver dados
   while ( ! feof (arquivo) && strcmp ( word, linha ) != 0 )
   {
   // tentar ler o proximo
      strcpy ( linha, IO_fread ( arquivo ) );
   } // fim repetir
// fechar arquivo (RECOMENDAVEL para leitura)
   fclose ( arquivo );
// retornar resultado
   return ( strcmp ( word, linha ) == 0 );
} // fim searchdWord ( )
/**
Method10.
*/
void method10 ( )
{
// identificar
   IO_id ( "EXEMPLO0710 - Method10 - v0.0" );
// procurar palavra
   IO_printf ( "Procurar (\"%s\") = %d\n", "bola", searchWord ( "DADOS4.TXT", "bola" ) );
   IO_printf ( "Procurar (\"%s\") = %d\n", "mafe", searchWord ( "DADOS4.TXT", "mafe" ) );
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method10 ( )

void multiplo5 ( chars fileName, int x )
{
   FILE* arquivo = fopen ( fileName, "wt" );
   int y = 0;
   int contador = 0;
   IO_fprintf ( arquivo, "NUMERO DIGITADO FOI -> [%d]\n", x );
   IO_fprintf ( arquivo, "múltiplos de 5, ímpares, em ordem crescente, começando em 5\n");
   for ( y = 5; y <= x; y = y + 1 )
   {
      if(y % 5 == 0 && y % 2 != 0)
      {
         contador = contador + 1;
         IO_fprintf ( arquivo, "%i\n", y );
      }
   }
   fclose ( arquivo );
}

void method11 ( )
{
// identificar
   IO_id ( "EXEMPLO0711 - Method11 - v0.0" );
// executar o metodo auxiliar
   int quantidade = 0;
   printf("Insira um numero para ser a quantidade:\n");
   scanf("%i", &quantidade);
   multiplo5 ( "EXEMPLO0711.TXT", quantidade );
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
}

void multiplo5par ( chars fileName, int x )
{
   FILE* arquivo = fopen ( fileName, "wt" );
   int y = 0;
   int contador = 0;
   IO_fprintf ( arquivo, "NUMERO DIGITADO FOI -> [%d]\n", x );
   IO_fprintf ( arquivo, "múltiplos de 5, pares , em ordem decrescente encerrando em 10\n");
   for ( y = x; y >= 10; y-- )
   {
      if(y % 5 == 0 && y % 2 == 0)
      {
         IO_fprintf ( arquivo, "%i\n", y );
      }
   }
   fclose ( arquivo );
}

void method12 ( )
{
// identificar
   IO_id ( "EXEMPLO0712 - Method12 - v0.0" );
// executar o metodo auxiliar
   int quantidade = 0;
   printf("Insira um numero para ser a quantidade:\n");
   scanf("%i", &quantidade);
   multiplo5par ( "EXEMPLO0712.TXT", quantidade );
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
}

void sequencia ( chars fileName, int x )
{
   FILE* arquivo = fopen ( fileName, "wt" );
   double y = 0;
   int contador = 0;
   double result = 0;
   IO_fprintf ( arquivo, "EXEMPLO0713\n");
   IO_fprintf ( arquivo, "NUMERO DIGITADO -> [ %d ]\n", x );
   for ( y = 0; y <= x; y++ )
   {
      result = pow( 4 , y );
      IO_fprintf ( arquivo, "%1.2lf\n", result );

   }
   fclose ( arquivo );
}

void method13 ( )
{
// identificar
   IO_id ( "EXEMPLO0713 - Method13 - v0.0" );
// executar o metodo auxiliar
   int quantidade = 0;
   printf("Insira um numero para ser a quantidade:\n");
   scanf("%i", &quantidade);
   sequencia ( "EXEMPLO0713.TXT", quantidade );
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
}

void quatorze ( chars fileName, int x )
{
   FILE* arquivo = fopen ( fileName, "wt" );
   double y = 0;
   int contador = 0;
   int result = 0;
   int numerador = 1;
   double soma = 0;
   for ( y = x; y >= 1; y-- )
   {
      result = pow( 3 , y );
      IO_fprintf ( arquivo, "%i/%i\n",numerador ,result );
      soma = soma + (numerador/result);
   }
   fclose ( arquivo );
}

void method14 ( )
{
// identificar
   IO_id ( "EXEMPLO0714 - Method14 - v0.0" );
// executar o metodo auxiliar
   int quantidade = 0;
   printf("Insira um numero para ser a quantidade:\n");
   scanf("%i", &quantidade);
   quatorze ( "EXEMPLO0714.TXT", quantidade );
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
}

void quinze ( chars fileName, int n, double x )
{
   FILE* arquivo = fopen ( fileName, "wt" );
   double y = 0;
   int contador = 0;
   double result = 0.0;
   double numerador = 1.0;
   double soma = 0;
   for ( int expoente = 0; expoente <= n; expoente++ )
   {
      result = pow( x , expoente );
      IO_fprintf ( arquivo, "%1.1lf/%1.2lf\n",numerador ,result );
      soma = soma + (numerador/result);
   }
   fclose ( arquivo );
}

void method15 ( )
{
// identificar
   IO_id ( "EXEMPLO0715 - Method15 - v0.0" );
// executar o metodo auxiliar
   int n = 0;
   double x = 0;
   printf("Insira um numero para ser a quantidade:\n");
   scanf("%i", &n);
   printf("Insira um numero para ser a base:\n");
   scanf("%lf", &x);
   quinze ( "EXEMPLO0715.TXT", n, x );
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
}

void copycopy ( chars fileOut, chars fileIn )
{
// definir dados
   FILE* saida = fopen ( fileOut, "wt" );
   FILE* entrada = fopen ( fileIn , "rt" );
   chars linha = IO_new_chars ( STR_SIZE );
   double soma = 0;
   int contador = 0;
// ler da origem
   strcpy ( linha, IO_freadln ( entrada ) );
// repetir enquanto houver dados
   while ( ! feof ( entrada ) )
   {
   // contar linha lida
      contador = contador + 1;

   // gravar no destino,
   // EXCEPCIONALMENTE sem a ultima linha, nesse caso
      if ( strcmp ( "PARAR", linha ) != 0 )
      {
         IO_fprintln ( saida, linha );
      } // fim se
   // ler da origem
      strcpy ( linha, IO_freadln ( entrada ) );
      soma = soma + atof(linha);
   } // fim repetir
// informar total de linhas copiadas
   IO_printf ( "Lines read = %d\n", contador );
   IO_printf ( "soma = %1.2lf\n", soma);
// fechar arquivos
   fclose ( saida );
   fclose ( entrada );
} // fim copyText ( )
void method16 ( )
{
// identificar
   IO_id ( "EXEMPLO0716 - Method16 - v0.0" );
// executar o metodo auxiliar
   copycopy ( "RESULTADO06.TXT", "EXEMPLO0715.TXT" );
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
}

void method17 ( )
{
// identificar
   IO_id ( "EXEMPLO0717 - Method17 - v0.0" );
// executar o metodo auxiliar
   copycopy ( "RESULTADO07.TXT", "EXEMPLO0714.TXT" );
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );
}

void fibonacci ( chars fileName, int x )
{
   FILE* arquivo = fopen ( fileName, "wt" );
   int quantidade = x;
   int f1 = 0;
   int f2 = 1;
   int f3 = 0;

   while(f2 < quantidade)
   {
      f3 = (f2 + f1);
      if(f3 % 2 != 0)
      {
         IO_fprintf ( arquivo, "%i\n",f3 );
      }
      f1 = f2;
      f2 = f3;
   }
   fclose ( arquivo );
}
void method18 ( )
{
// identificar
   IO_id ( "EXEMPLO0718 - Method18 - v0.0" );
   int quantidade = 0;
   printf("Insira um numero para ser a quantidade:\n");
   scanf("%i", &quantidade);
   fibonacci ( "RESULTADO08.TXT", quantidade );
// encerrar
   IO_pause ( "Apertar ENTER para continuar" );

}
void letrasminusculas ( chars fileName )
{
// definir dados
   FILE* arquivo = fopen ( fileName, "wt" );
   chars linha = IO_new_chars ( STR_SIZE );
// repetir ate' desejar parar
   IO_println ( "Gravar linhas (para terminar, entrar com \"PARAR\"):\n" );
   do
   {
   // ler do teclado
      strcpy ( linha, IO_readln ( "" ) );
   // gravar valor
      IO_fprintln ( arquivo, linha );
   }
   while ( strcmp ( "PARAR", linha ) != 0 );
// fechar arquivo (INDISPENSAVEL para gravacao)
   fclose ( arquivo );
} // fim appendText ( )
void copyLetrasMinusculas ( chars fileOut, chars fileIn )
{
// definir dados
   FILE* saida = fopen ( fileOut, "wt" );
   FILE* entrada = fopen ( fileIn , "rt" );
   chars linha = IO_new_chars ( STR_SIZE );
   int contador = 0;
// ler da origem
   strcpy ( linha, IO_freadln ( entrada ) );
   int tamanho = 0;
   char simbolo = '_';
   tamanho = strlen ( linha );
// repetir enquanto houver dados
   while ( ! feof ( entrada ) )
   {
   // contar linha lida
      contador = contador + 1;
   // gravar no destino,
   // EXCEPCIONALMENTE sem a ultima linha, nesse caso
      if ( strcmp ( "PARAR", linha ) != 0 )
      {
         for ( int posicao = 0; posicao < tamanho; posicao = posicao + 1 )
         {
            simbolo = linha [ posicao ];
            if ( 'a' <= simbolo && simbolo <= 'z' )
            {
               contador = contador + 1;
            }
         }
         IO_fprintln ( saida, linha );
      } // fim se
   // ler da origem
      strcpy ( linha, IO_freadln ( entrada ) );
   } // fim repetir
// informar total de linhas copiadas
   IO_printf ( "Lines read = %d\n", contador );
// fechar arquivos
   fclose ( saida );
   fclose ( entrada );
} // fim copyText ( )
void method19 ( )
{
// identificar
   IO_id ( "EXEMPLO0719 - Method19 - v0.0" );
// procurar palavra
   letrasminusculas ( "EXEMPLO0719.TXT" );
   copyLetrasMinusculas ( "RESULTADO09.TXT", "EXEMPLO0719.TXT" );
 // encerrar
   IO_pause ( "Apertar ENTER para continuar" );
} // fim method10 ( )

int main ( )
{
// definir dado
   int x = 0; // definir variavel com valor inicial
// repetir até desejar parar
   do
   {
   // identificar
      IO_id ( "Exemplo0719 - Programa - v0.0" );
   // ler do teclado
      IO_println ( "Opcoes" );
      IO_println ( " 0 - parar" );
      IO_println ( " 1 - Gravar em arquivo texto certa quantidade de valores." );
      IO_println ( " 2 - Ler de arquivo texto certa quantidade de valores." );
      IO_println ( " 3 - Gravar em arquivo texto certa quantidade de valores." );
      IO_println ( " 4 - Ler de arquivo texto certa quantidade de valores." );
      IO_println ( " 5 - Gravar em arquivo texto certa quantidade de valores" );
      IO_println ( " 6 - Ler de arquivo texto certa quantidade de valores." );
      IO_println ( " 7 - Copiar arquivo texto." );
      IO_println ( " 8 - Gravar em arquivo texto certa quantidade de valores." );
      IO_println ( " 9 - Ler palavras de arquivo." );
      IO_println ( "10 - Procurar palavra em arquivo." );
      IO_println ( "11 - multiplos de 5, impares, em ordem crescente, começando em 5." );
      IO_println ( "12 - múltiplos de 5, pares , em ordem decrescente encerrando em 10." );
      IO_println ( "13 - valores da sequência: 1 4 16 64 256 ..." );
      IO_println ( "14 - valores decrescentes da sequência: ... 1/81 1/27 1/9 1/3 1." );
      IO_println ( "15 - valores reais da sequência: 1 1/x 1/x2 1/x4 ..." );
      IO_println ( "16 - soma dessa quantidade dentre os primeiros valores gravados no exercício anterior." );
      IO_println ( "17 - soma dessa quantidade dentre os inversos das potências de 3 do exercício 04." );
      IO_println ( "18 - valor correspondente aos primeiros termos ímpares da série de Fibonacci." );
      IO_println ( "19 - quantidade de minúsculas em cadeia de caracteres de um arquivo texto." );
      IO_println ( "20 - ." );
      IO_println ( "" );
      x = IO_readint ( "Entrar com uma opcao: " );
   // testar valor
      switch ( x )
      {
         case 0:
            method00 ( );
            break;
         case 1:
            method01 ( );
            break;
         case 2:
            method02 ( );
            break;
         case 3:
            method03 ( );
            break;
         case 4:
            method04 ( );
            break;
         case 5:
            method05 ( );
            break;
         case 6:
            method06 ( );
            break;
         case 7:
            method07 ( );
            break;
         case 8:
            method08 ( );
            break;
         case 9:
            method09 ( );
            break;
         case 10:
            method10 ( );
            break;
         case 11:
            method11 ( );
            break;
         case 12:
            method12 ( );
            break;
         case 13:
            method13 ( );
            break;
         case 14:
            method14 ( );
            break;
         case 15:
            method15 ( );
            break;
         case 16:
            method16 ( );
            break;
         case 17:
            method17 ( );
            break;
         case 18:
            method18 ( );
            break;
         case 19:
            method19 ( );
            break;


         default:
            IO_println ( "ERRO: Valor invalido." );
      } // fim escolher
   }
   while ( x != 0 );
// encerrar
   IO_pause ( "Apertar ENTER para terminar" );
   return ( 0 );
} // fim main( )
