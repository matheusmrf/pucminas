/*
Guia_0201 - v0.0. - __ / __ / _____
Author: _____________________
Para compilar em uma janela de comandos (terminal):
No Linux : gcc -o Guia0201 ./Guia0201.c
No Windows: gcc -o Guia0201.exe Guia0201.c
Para executar em uma janela de comandos (terminal):
No Linux : ./Guia0201.c
No Windows: Guia0201
*/
// lista de dependencias
#include "karel.h" // na pasta do programa
// --------------------------- definicoes de metodos
/**
decorateWorld - Metodo para preparar o cenario.
@param fileName - nome do arquivo para guardar a descricao.
*/
void decorateWorld ( char* fileName )
{
// definir o contexto
ref_world v_world = world_now;
// colocar um marcador no mundo
set_World ( 4, 4, BEEPER );
// salvar a configuracao atual do mundo
save_World( fileName );
} // decorateWorld ( )/**
/* turnRight - Metodo para virar a direita.
*/
void turnRight( )
{
// definir dado local
int step = 0;
// o executor deste metodo
// deve virar tres vezes 'a esquerda
for ( step = 1; step <= 3; step = step + 1 )
{
turnLeft( );
} // end for
} // end turnRight( )
/**
* moveN - Metodo para mover certa quantidade de passos.
* @param steps - passos a serem dados.
*/
void moveN( int steps )
{
// testar se a quantidade de passos e' maior que zero
if ( steps > 0 )
{
// dar um passo
move( );
// tentar dar mais um passo
moveN( steps-1 );
} // end if
} // end moveN( )
/**
* doPartialTask - Metodo para especificar parte de uma tarefa.
*/
void doPartialTask( )
{
// especificar acoes dessa parte da tarefa
moveN( 3 );
turnLeft( );
} // end doPartialTask( )
/**
* doTask - Metodo para especificar toda a tarefa.
*/
void doTask( )
{
// definir dado local
int step = 4;
// especificar acoes da tarefa
while ( step > 0 )
{
// realizar uma parte da tarefa
doPartialTask( );
// tentar passar 'a proxima
step = step - 1;
} // end while
turnOff ( );
} // end doTask( )// --------------------------- acao principal
/**
* Acao principal: executar a tarefa descrita acima.
*/
int main ( )
{
// definir o contexto
world v_world; ref_world ref_v_world = ref v_world; world_now = ref_v_world;
robot v_robot; ref_robot ref_v_robot = ref v_robot; robot_now = ref_v_robot;
box v_box ; ref_box ref_v_box = ref v_box ; box_now = ref_v_box ;
// criar o mundo
create_World ( "Guia_02_01_v01" );
// decorar o ambiente com um marcador
decorateWorld( "Guia0201.txt" );
// comandos para tornar o mundo visivel
reset_World( );
set_Speed ( 1 );
read_World( "Guia0201.txt" );
// colocar o robo com a configuracao inicial
create_Robot ( 1, 1, EAST, 0, "Karel" );
// executar acoes
doTask( );
// preparar o encerramento
close_World ( );
// encerrar o programa
getchar ( );
return ( 0 );
} // end main ( )

// ---------------------------------------------- testes
/*
---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios
---------------------------------------------- previsao de testes
---------------------------------------------- historico
Versao Data Modificacao
0.1 __/__ esboco
---------------------------------------------- testes
Versao Teste
0.1 01. ( ) teste inicial
*/
