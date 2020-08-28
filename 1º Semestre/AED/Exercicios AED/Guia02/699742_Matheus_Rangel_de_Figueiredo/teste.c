/*   
 Guia_0201 - v0.0. - _08_ / _03_ / __2020___   
 Author: _LUIZ HENRIQUE MOTTA DIAS____________________ 
 Para compilar em uma janela de comandos (terminal): 
 No Linux      :   gcc -o Guia0201      ./Guia0201.c    
 No Windows:   gcc -o Guia0201.exe Guia0201.c 

*/
 // lista de dependencias 
 #include "karel.h"  // na pasta do programa 
 // --------------------------- definicoes de metodos 
 /** 
 decorateWorld - Metodo para preparar o cenario.
 @param fileName - nome do arquivo para guardar a descricao.
 */
 void decorateWorld ( char* GTA ) 
 { 
 // definir o contexto
  ref_world v_world = world_now; 
  
 // colocar um marcador no mundo
  set_World ( 4, 4, BEEPER ); 
  
 // salvar a configuracao atual do mundo 
  save_World( GTA );  
  
  } // decorateWorld ( ) 
  
  /**
    * turnRight - Metodo para virar 'a direita. 
  */
  void turnRight( )
  {
  //definir dado local
  int step=0;
  //o executor deste modo
  //deve virar tres vezes á esuqerda
   for ( step = 1; step <= 3; step = step + 1 ) 
  {
    turnLeft( );
  }//end for
 }// end turnRight()
 
 /**
 *doPartilTask- Metodo para especificar parte de uma tarefa
 */
 void doPartilTask( )
 {
 //esoecificar acoes dessa parte da tarefa
   move ( 3 ); 
   turnLeft( );
 } // end doPartialTask( ) 
 
 /**
   * doTask - Metodo para especificar toda a tarefa.
   */
  void doTask( )
  {
  //definir dado local
  int step=4;
  //especificar acoes da tarefa 
  while( step>0)
  {
  //realizar uma parte da tarefa
   doPartilTask();
  //tentar passar a proxima
  step=step -1;
    } // end while 
    turnOff( );
  }//end doTask( )
  
 // --------------------------- acao principal 
 
 /**
  *  Acao principal: executar a tarefa descrita acima. 
  */
  
  int main( )
  {
  //definir o contexto
   world v_world;   ref_world ref_v_world = ref v_world;   world_now = ref_v_world;     
   robot v_robot;   ref_robot ref_v_robot = ref v_robot;   robot_now = ref_v_robot;     
   box    v_box ;   ref_box   ref_v_box = ref v_box;       box_now = ref_v_box; 
  //criar mundo
  create_World ( "Guia_02_01_v01" );
  // decorar o ambiente com um marcador
  decorateWorld( "Guia0201.txt" );
  
  // comandos para tornar o mundo visivel
    reset_World( ); 
    set_Speed ( 1 );    
    read_World( "Guia0201.txt" ); 
    
  //colocar o robo em configuracao inicial
    create_Robot ( 1, 1, EAST, 0, "Karel" );
  
  //executar acoes
   doTask( );
   
   //preparar o progama
    getchar( );
    return (0);
    }//end main( )  