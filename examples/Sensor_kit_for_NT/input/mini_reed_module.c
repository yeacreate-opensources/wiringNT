/*
*
*mini_reed_module.c
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
  Ntablet_wPi   |     Mini_Reed    |
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


#define R_PIN	13


void init_GPIO(){

  wiringPiSetup () ;

  pinMode ( R_PIN, INPUT);

}

void test(){

  printf("[INFO]  Mini_Reed State Read !\n");
  int val = 0;


  while( 1 ){

     val = digitalRead( R_PIN );

     printf("[INFO] val is :%d\n", val);

     delay( 1000 );

  }//end while( 1 )

}

int main( void ){

  printf("[INFO] Ntablet GPIO TEST !\n");

  init_GPIO();

  test();

  return 0;
}
