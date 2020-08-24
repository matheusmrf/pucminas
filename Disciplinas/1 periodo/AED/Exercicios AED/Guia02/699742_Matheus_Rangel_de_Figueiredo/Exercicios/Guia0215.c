/*
Guia0215 - v0.1 - 04/03/2020
Author:Matheus Rangel de Figueiredo
Inclusão de Biblioteca: Karel.h
*/

  #include "karel.h"
  #include "io.h"

  void decorateWorld(char*fileName)
  {
      ref_world v_world=world_now;



       set_World(3,2,HWALL);
       set_World(3,8,HWALL);

       set_World(4,2,HWALL);

       set_World(5,2,HWALL);
       set_World(5,8,HWALL);

       set_World(2,3,VWALL);
       set_World(2,4,VWALL);
       set_World(2,5,VWALL);
       set_World(2,6,VWALL);
       set_World(2,7,VWALL);
       set_World(2,8,VWALL);

       set_World(3,3,VWALL);
       set_World(3,4,VWALL);
       set_World(3,5,VWALL);
       set_World(3,6,VWALL);
       set_World(3,7,VWALL);

       set_World(4,3,VWALL);
       set_World(4,4,VWALL);
       set_World(4,5,VWALL);
       set_World(4,6,VWALL);
       set_World(4,7,VWALL);

       set_World(5,3,VWALL);
       set_World(5,4,VWALL);
       set_World(5,5,VWALL);
       set_World(5,6,VWALL);
       set_World(5,7,VWALL);
       set_World(5,8,VWALL);

       set_World(5,3,BEEPER);



       set_World(4,4,BEEPER);
       set_World(4,4,BEEPER);
       set_World(4,3,BEEPER);


       set_World(3,5,BEEPER);
       set_World(3,5,BEEPER);
       set_World(3,5,BEEPER);
       set_World(3,4,BEEPER);
       set_World(3,4,BEEPER);
       set_World(3,3,BEEPER);


       save_World(fileName);
  }

  void turnRight()
  {
      turnLeft();
      turnLeft();
      turnLeft();

  }

  void turnBack()
  {
      turnLeft();
      turnLeft();
  }

  void moveN(int steps)
  {
      int step=0;
      for(step=1;step<steps;step=step+1)
      {
          move();
      }
  }

  void pickBeepers()  //pegar beeper ate nao ter beepers.
  {
      while(nextToABeeper())
          {
              pickBeeper();
          }
    }

    void putBeepers()  //Largar beepers ate nap ter beepers.
    {
        while(beepersInBag())
        {
            putBeeper();
        }
    }


  void Dive3()  //A "funcao" Dive,que foi utilizado no programa anterior foi dividida em 3 com diferente numero de "Steps".
  {

      faceSouth();
      moveN(6);
       if(nextToABeeper())
       {
            pickBeepers();

       }

       turnBack();
      moveN(6);
  }

  void Dive2()
  {
      faceSouth();
      moveN(5);
       if(nextToABeeper())
       {
            pickBeepers();

       }

       turnBack();
      moveN(5);

  }

  void Dive1()
  {
      faceSouth();
      moveN(4);
       if(nextToABeeper())
       {
            pickBeepers();

       }

       turnBack();
      moveN(4);

  }

  void EntregaeRetorno()  //entregar beepers no local indicado e voltar para origem caso coletar todos beepers e estar na "porta" da construcao.
  {
      if((beepersInBag()>=1) && (areYouHere(4,8)))
        {
            faceNorth();
            move();
            turnRight();
            moveN(4);
            turnRight();
            moveN(9);
            putBeepers();  //"Funcao" criada para deixar beeper ate o robo estar "zerado"
            turnRight();
            moveN(7);
            turnBack();
            turnOff();

        }
        else;
        {
            turnOff();
        }


  }
  void Comandos()
  {
      FILE *fp;
      fp=fopen("Tarefa0215.txt","w");
      fprintf(fp,"faceNorth();\n");
      fprintf(fp,"moveN(9);\n");
      fprintf(fp,"turnRight();\n");
      fprintf(fp,"moveN(4);\n");
      fprintf(fp,"turnRight();\n");
      fprintf(fp,"move();\n");
      fprintf(fp,"turnLeft();\n");
      fprintf(fp,"move();\n");
      fprintf(fp,"Dive3();\n");
      fprintf(fp,"turnLeft();\n");
      fprintf(fp,"move();\n");
      fprintf(fp,"Dive2();\n");
      fprintf(fp,"turnBack();\n");
      fprintf(fp,"Dive3();\n");
      fprintf(fp,"turnLeft();\n");
      fprintf(fp,"move();\n");
      fprintf(fp,"Dive1();\n");
      fprintf(fp,"turnBack();\n");
      fprintf(fp,"Dive2();\n");
      fprintf(fp,"turnBack();\n");
      fprintf(fp,"Dive3();\n");
      fprintf(fp,"turnRight();\n");
      fprintf(fp,"move();\n");
      fprintf(fp,"EntregaeRetorno();\n");
      fclose(fp);
  }


void doTask()
  {
      faceNorth();
      moveN(9);
      turnRight();
      moveN(4);
      turnRight();
      move();
      turnLeft();
      move();
      Dive3();
      turnLeft();
      move();
      Dive2();
      turnBack();
      Dive3();
      turnLeft();
      move();
      Dive1();
      turnBack();
      Dive2();
      turnBack();
      Dive3();
      turnRight();
      move();
      EntregaeRetorno();
}


  int main()
  {
      world v_world; ref_world ref_v_world=ref
      v_world; world_now=ref_v_world;
      robot v_robot; ref_robot ref_v_robot=ref
      v_robot; robot_now= ref_v_robot;
      box  v_box; ref_box ref_v_box=ref
      v_box; box_now =ref_v_box;

      create_World("Guia_02_15_v01");
      decorateWorld("Guia0215.txt");
      reset_World();
      set_Speed(-10);
      read_World("Guia0215.txt");
      create_Robot(1,1,EAST,0,"Jubileu");
      Comandos();
      doTask();
      close_World();


  }
