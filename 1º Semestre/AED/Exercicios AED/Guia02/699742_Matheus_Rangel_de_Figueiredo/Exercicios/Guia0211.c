/*
Guia0212 - v0.1 - 06/03/2020
Matricula:699742 
Author:Matheus Rangel de Figueiredo
Inclusão de Biblioteca: Karel.h
*/

#include "Karel.h"

void decorateWorld ( char* fileName )
{
   // Paredes Verticais.
   set_World ( 2, 1, VWALL  );
   set_World ( 3, 2, VWALL  );
   set_World ( 4, 3, VWALL  );
   set_World ( 6, 3, VWALL  );
   set_World ( 7, 2, VWALL  );
   set_World ( 8, 1, VWALL  );
   
   // Paredes Horizontais.
   set_World ( 3, 1, HWALL  );
   set_World ( 4, 2, HWALL  );
   set_World ( 5, 3, HWALL  );
   set_World ( 6, 3, HWALL  );
   set_World ( 7, 2, HWALL  );
   set_World ( 8, 1, HWALL  );
   
   // Localização dos Marcadores no mapa.
   set_World ( 7, 3, BEEPER );
   set_World ( 7, 3, BEEPER );
   set_World ( 7, 3, BEEPER );
   set_World ( 8, 2, BEEPER );
   set_World ( 8, 2, BEEPER );
   set_World ( 9, 1, BEEPER );

   save_World( fileName );
}

void turnRight() // Virar para a Direita.
{
   turnLeft();
   turnLeft();
   turnLeft();
}

void stepUpRight() // Subir um degrau localizado à Direita.
{
   turnLeft();
   move();
   turnRight();
   move();
}

void stepDownRight() // Descer um degrau localizado à Direita.
{
   move();
   turnRight();
   move();
   turnLeft();
}

void stepUpLeft() // Subir um degrau localizado à Esquerda.
{
   turnRight();
   move();
   turnLeft();
   move();
}

void stepDownLeft() // Descer um degrau localizado à Esquerda.
{
   move();
   turnLeft();
   move();
   turnRight();
}

void doTask() // Movimentação para realizar determinada atividade.
{   
   move();
   stepUpRight();
   stepUpRight();
   stepUpRight();
   move();
   stepDownRight();
   pickBeeper();
   pickBeeper();
   pickBeeper();
   stepDownRight();
   pickBeeper();
   pickBeeper();
   stepDownRight();
   pickBeeper();
   turnLeft();
   turnLeft();
   stepUpLeft();
   stepUpLeft();
   stepUpLeft();
   move();
   stepDownLeft();
   putBeeper();
   putBeeper();
   putBeeper();
   stepDownLeft();
   putBeeper();
   putBeeper();
   stepDownLeft();
   putBeeper();
   move();
   turnLeft();
   turnLeft();
   turnOff;
}

int main ( )
{
   world v_world; ref_world ref_v_world = ref v_world; world_now = ref_v_world;
   robot v_robot; ref_robot ref_v_robot = ref v_robot; robot_now = ref_v_robot;
   box   v_box   ; ref_box   ref_v_box  = ref v_box  ; box_now   = ref_v_box  ;

   create_World ("Guia_01_11_v01");

   decorateWorld( "Guia0111.txt" );

   reset_World();
   set_Speed(1);
   read_World( "Guia0111.txt" );

   // Robô: X e Y inicial, Direção, "carga" e Nome: Karel
   create_Robot ( 1, 1, EAST, 0, "Karel" );
   doTask();

   close_World();

   getchar();
   return (0);
}