/*
 Guia0110 - v0.0. - 29 / 02 / 2020
 Author: Matheus Rangel de Figueiredo
 Para compilar em uma janela de comandos (terminal):

 No Linux : gcc -o Guia0110 ./Guia0110.c
 No Windows: gcc -o Guia0110.exe Guia0110.c
 Para executar em uma janela de comandos (terminal):
 No Linux : ./Guia0110.c
 No Windows: Guia0110
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
// colocar um marcador no mundo
set_World ( 2, 6, BEEPER );

set_World ( 6, 3, BEEPER );

set_World ( 5, 7, BEEPER );

// colocar obstaculos verticais no mundo
set_World (2,6,VWALL);
set_World (2,3,VWALL);
set_World (2,4,VWALL);
set_World (2,5,VWALL);
set_World (5,3,VWALL);
set_World (5,4,VWALL);
set_World (5,5,VWALL);

// colocar obstaculos horizontais no mundo

set_World (3,2,HWALL);
set_World (4,2,HWALL);
set_World (5,2,HWALL);

set_World (3,6,HWALL);
set_World (4,6,HWALL);
set_World (5,6,HWALL);
   


// salvar a configuracao atual do mundo
   save_World( fileName );
} // decorateWorld ( )
/**
 * turnRight - Metodo para virar 'a direita.
 */
void turnRight( )
{
   // o executor deste metodo
   // deve virar tres vezes 'a esquerda
   turnLeft( );
   turnLeft( );
   turnLeft( );
} // end turnRight( )
/**
 * moveN - Metodo para mover certa quantidade de passos.
 * @param steps - passos a serem dados.
 */
void moveN( int steps )
{
   // definir dado local
   int step = 0;
   // testar se a quantidade de passos e' maior que zero
   for ( step = 1; step < steps; step = step + 1 )
   {
     // dar um passo
      move( );
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
   // especificar acoes da tarefa
    move();
    turnLeft();
    move();  
    move();  
    move();  
    move();  
    move();  
    pickBeeper();
    move();  
    turnRight();
    move();  
    move();
    move();   
    pickBeeper();
    move();  
    turnRight();
    move();  
    move();  
    move();
    move();    
    pickBeeper();
    turnRight();
    turnRight();
    move();
    move();    
    move();  
    turnLeft();
    move();  
    move();  
    move();  
    turnLeft();
    move();  
    move();  
    move();  
    putBeeper();
    putBeeper();
    putBeeper();
    turnLeft();
    move();  
    move();  
    turnLeft();
    move();  
    move();  
    move();  
    turnRight();
    move();  
    turnRight();
    move();  
    move();  
    move();  
    move();  
    move();  
    turnRight();
    move();  
    move();  
    move();  
    move();  
    move();  
    turnRight();
    turnRight();
    
    
 
   
   
  
    
  
   
   
   
   
   turnOff ( );
} // end doTask( )
// --------------------------- acao principal
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
   create_World ( "Guia_01_10_v01" );
// criar o ambiente com um marcador
// OBS.: executar pelo menos uma vez,
// antes de qualquer outra coisa
// (depois de criado, podera' ser comentado)
   decorateWorld( "Guia0110.txt" );
// comandos para tornar o mundo visivel
   reset_World( ); // limpar configuracoes
   set_Speed ( 0.5 ); // escolher velocidade
   read_World( "Guia0110.txt" ); // ler configuracao do ambiente
// colocar o robo no necessario
   create_Robot ( 1, 1, EAST, 3, "Karel" );
// executar acoes
   doTask ( );
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
 0.1 0.1 ( OK ) teste inicial
 0.2 0.1 ( OK ) teste da tarefa
 0.3 0.1 ( OK ) teste da tarefa parcial
 0.4 0.1 ( OK ) teste do apanhar marcador
 0.5 0.1 ( OK ) teste do colocar marcador
0.6 01. ( OK ) teste da repeticao do movimento
0.7 01. ( OK ) teste com marcador na posicao (4,4)
02. ( OK ) teste sem marcador na posicao (4,4)
 0.8 01. ( OK ) teste com a quantidade de marcadores
 0.9 01. ( OK ) teste com outra forma de repeticao
 1.0 01. (  ) teste com outra forma de repeticao
 01. (  ) teste com outra forma de alternativa
*/