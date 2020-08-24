/*
Guia0211 - v0.1 - 04/03/2020
Author:Matheus Rangel de Figueiredo
Inclus�o de Biblioteca: Karel.h
*/

#include "Karel.h"

void decorateWorld ( char* fileName )
{
   // Paredes Verticais.
   set_World ( 1, 2, VWALL  );
   set_World ( 1, 3, VWALL  );
   set_World ( 1, 4, VWALL  );
   set_World ( 1, 6, VWALL  );
   set_World ( 1, 7, VWALL  );
   set_World ( 1, 8, VWALL  );

   set_World ( 4, 2, VWALL  );
   set_World ( 4, 3, VWALL  );
   set_World ( 4, 5, VWALL  );
   set_World ( 4, 7, VWALL  );
   set_World ( 4, 8, VWALL  );

   set_World ( 5, 2, VWALL  );
   set_World ( 5, 3, VWALL  );
   set_World ( 5, 5, VWALL  );
   set_World ( 5, 7, VWALL  );
   set_World ( 5, 8, VWALL  );

   set_World ( 8, 2, VWALL  );
   set_World ( 8, 3, VWALL  );
   set_World ( 8, 4, VWALL  );
   set_World ( 8, 6, VWALL  );
   set_World ( 8, 7, VWALL  );
   set_World ( 8, 8, VWALL  );

   // Paredes Horizontais.
   set_World ( 2, 1, HWALL  );
   set_World ( 3, 1, HWALL  );
   set_World ( 4, 1, HWALL  );
   set_World ( 6, 1, HWALL  );
   set_World ( 7, 1, HWALL  );
   set_World ( 8, 1, HWALL  );

   set_World ( 5, 3, HWALL  );

   set_World ( 2, 4, HWALL  );
   set_World ( 3, 4, HWALL  );
   set_World ( 4, 4, HWALL  );
   set_World ( 6, 4, HWALL  );
   set_World ( 7, 4, HWALL  );
   set_World ( 8, 4, HWALL  );

   set_World ( 2, 5, HWALL  );
   set_World ( 3, 5, HWALL  );
   set_World ( 4, 5, HWALL  );
   set_World ( 6, 5, HWALL  );
   set_World ( 7, 5, HWALL  );
   set_World ( 8, 5, HWALL  );

   set_World ( 5, 6, HWALL  );

   set_World ( 2, 8, HWALL  );
   set_World ( 3, 8, HWALL  );
   set_World ( 4, 8, HWALL  );
   set_World ( 6, 8, HWALL  );
   set_World ( 7, 8, HWALL  );
   set_World ( 8, 8, HWALL  );

   // Localiza��o dos Marcadores no mapa.
   set_World ( 4, 5, BEEPER );
   set_World ( 5, 7, BEEPER );
   set_World ( 5, 3, BEEPER );
   set_World ( 6, 5, BEEPER );


   save_World( fileName );
}

void turnRight( )
{
   turnLeft( );
   turnLeft( );
   turnLeft( );
}
void moveN( int steps )
{
   if ( steps > 0 )
   {
      move( );
      moveN ( steps - 1 );
   }
}
void stepUpRight ()
{
   turnLeft ();
   move ();
   turnRight ();
   move ();
}
void stepDownRight ()
{
   move ();
   turnRight ();
   move ();
   turnLeft ();
}
void stepUpLeft ()
{
   turnRight ();
   move ();
   turnLeft ();
   move ();
}
void stepDownLeft ()
{
   move ();
   turnLeft ();
   move ();
   turnRight ();
}
void halfTurn ()
{
   turnRight ();
   turnRight ();
}
int nOfBeepers = 0;

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

   // Rob�: X e Y inicial, Dire��o, "carga" e Nome: Jorge
   create_Robot ( 1, 1, EAST, 0, "Karel" );
   moveN(2);
   while ( nOfBeepers < 4 )
   {
      if ( leftIsClear( ) )
      {
         turnLeft( );
         move( );
      }
      else
      {
         move ();
      }
      if ( nextToABeeper () )
      {
         pickBeeper();
         halfTurn ();
         nOfBeepers = nOfBeepers + 1;
      }
   }
   moveN (3);
   turnLeft ();
   moveN (4);
   turnLeft ();
   turnOff ( );
   close_World ( );
   getchar ( );
   return ( 0 );
}
