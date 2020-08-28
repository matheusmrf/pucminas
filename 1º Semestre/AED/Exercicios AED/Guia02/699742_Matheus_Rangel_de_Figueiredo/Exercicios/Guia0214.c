/*
Guia0214 - v0.1 - 08/03/2020
Matricula:699742 
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

       set_World(3,3,BEEPER);
       set_World(3,3,BEEPER);
       set_World(3,3,BEEPER);

       set_World(4,3,BEEPER);
       set_World(4,3,BEEPER);
       set_World(4,3,BEEPER);
       set_World(4,4,BEEPER);
       set_World(4,4,BEEPER);

       set_World(5,3,BEEPER);
       set_World(5,3,BEEPER);
       set_World(5,3,BEEPER);
       set_World(5,4,BEEPER);
       set_World(5,4,BEEPER);
       set_World(5,5,BEEPER);


       save_World(fileName);
  }

  void GerarArquivo()  //"Funcao" criada para gerar arquivo .txt "limpo".
{
    FILE *fptr;
    fptr=fopen("Tarefa0214b.txt","w");

}



      void cordenadas()  //"funcao" com objetivo de anotar as cordenadas no arquivo .txt.
      {
          int x=xAvenue();
          int y=yStreet();

          FILE *fptr;
          fptr=fopen("Tarefa0214b.txt","a");

          fprintf(fptr,"\n\n\nx:%d",x);
          fprintf(fptr,"\ny:%d",y);
          fclose(fptr);
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
       cordenadas(); //Foi acrescentada a funcao responsavel por escrever aa cordenadas no arquivo .txt.
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
       cordenadas();
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
       cordenadas();
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
      Dive1();  //"Funcao" criada para descer os "corredores" e pegar todos o beepers encontrados.
      turnBack();
      Dive2();
      turnLeft();
      move();
      Dive2();
      turnBack();
      Dive3();
      turnRight();
      move();
      Dive3();
      turnLeft();
      move();
      move();
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

      create_World("Guia_02_14_v01");
      decorateWorld("Guia0214.txt");
      reset_World();
      set_Speed(-10);
      read_World("Guia0214.txt");
      GerarArquivo(); //Gera p arquivo .txt em branco quando se incia o programa.
      create_Robot(1,1,EAST,0,"Jubileu");
      doTask();
      close_World();


  }
