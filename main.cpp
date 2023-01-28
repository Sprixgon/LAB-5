#include "mbed.h"

// main() runs in its own thread in the OS
int main()
{
DigitalOut myled(PA_5); //PA_5=D13
DigitalOut led1(PA_8);  //PA_8=D7    azul
DigitalOut led2(PB_10); //PB_10=D6   verde
DigitalOut led3(PB_4);  //PB_4=D5    rojo

DigitalIn myBoton(PC_13); //PC_13 Boton tarjeta ó pin PB_3=D3
DigitalIn boton1(PA_0); //A0
DigitalIn boton2(PA_1); //A1
DigitalIn boton3(PA_4); //A2
DigitalIn boton4(PB_0); //A3

boton1.mode(PullDown);
boton2.mode(PullDown);
boton3.mode(PullDown);
boton4.mode(PullDown); 
  

    while (true) {
        myled = myBoton;
        //led1 = !boton[0];
        //led2 = !boton[1];
        //led3 = !boton[2];

        // boton = 1 se enciende
        // led = 0 enciende

        if(boton4==0 && boton3==0 && boton2==0 && boton1==1){   //1
            led1=1;
            led2=1;
            led3=0;
            printf("1\n");

        }
        else if(boton4==0 && boton3==0 && boton2==1 && boton1==0){   //2
            led1=1;
            led2=1;
            led3=0;
            printf("2\n");

        }
        else if(boton4==0 && boton3==0 && boton2==1 && boton1==1){   //3
            led1=1;
            led2=1;
            led3=0;
            printf("3\n");

        }
        else if(boton4==0 && boton3==1 && boton2==0 && boton1==0){   //4
            led1=1;
            led2=0;
            led3=1;
            printf("4\n");

        }
        else if(boton4==0 && boton3==1 && boton2==0 && boton1==1){   //5
            led1=1;
            led2=0;
            led3=1;
            printf("5\n");

        }
        else if(boton4==0 && boton3==1 && boton2==1 && boton1==0){   //6
            led1=1;
            led2=0;
            led3=0;
            printf("6\n");

        }
        else if(boton4==0 && boton3==1 && boton2==1 && boton1==1){   //7
            led1=1;
            led2=0;
            led3=0;
            printf("7\n");

        }
        else if(boton4==1 && boton3==0 && boton2==0 && boton1==0){   //8
            led1=0;
            led2=0;
            led3=1;
            printf("8\n");

        }
        else if(boton4==1 && boton3==0 && boton2==0 && boton1==1){   //9
            led1=0;
            led2=0;
            led3=1;
            printf("9\n");

        }
        else if(boton4==1 && boton3==0 && boton2==1 && boton1==0){   //10
            led1=0;
            led2=0;
            led3=1;
            printf("10\n");

        }
        else if(boton4==1 && boton3==0 && boton2==1 && boton1==1){   //11
            led1=0;
            led2=0;
            led3=1;
            printf("11\n");

        }
        else if(boton4==1 && boton3==1 && boton2==0 && boton1==0){   //12
            led1=0;
            led2=1;
            led3=1;
            printf("12\n");

        }
        else if(boton4==1 && boton3==1 && boton2==0 && boton1==1){   //13
            led1=0;
            led2=1;
            led3=1;
            printf("13\n");

        }
        else if(boton4==1 && boton3==1 && boton2==1 && boton1==0){   //14
            led1=0;
            led2=1;
            led3=1;
            printf("14\n");

        }
        else if(boton4==1 && boton3==1 && boton2==1 && boton1==1){   //15
            led1=0;
            led2=0;
            led3=0;
            printf("15\n");

        }
        else{
            led1=1;
            led2=1;
            led3=0;
        }
    

        
    }

}