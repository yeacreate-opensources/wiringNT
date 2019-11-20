/*
*
*button_module.c
*
* Software written by YeaCreate Ltd 2019
* All rights reserved
*
*
****************************
*
* Examples are for reference only
*
*
*
------------------------------------
  Ntablet_wPi   |      button      |
------------------------------------
     GND        |         -        |
------------------------------------
     3.3v       |         +        |
------------------------------------
     wPi_13     |         s        |
------------------------------------

*
*
*
*/


#include <stdio.h>
#include <wiringPi.h>


#define BTN	13


void init_GPIO(){

  wiringPiSetup () ;

  pinMode ( BTN, INPUT );

}

void test(){

  printf("[INFO] Button State Read !\n");
  int b_val = 0;


  while( 1 ){

     b_val = digitalRead( BTN );

     printf("[INFO] b_val is :%d\n", b_val);

     delay( 500 );

  }//end while( 1 )

}

int main( void ){

  printf("[INFO] Ntablet GPIO TEST !\n");

  init_GPIO();

  test();

  return 0;
}
