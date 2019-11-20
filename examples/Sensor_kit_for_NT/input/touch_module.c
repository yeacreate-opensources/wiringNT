/*
*
* touch_module.c
*
* Software written by YeaCreate Ltd 2019
* All rights reserved
*
*
****************************
* Examples are for reference only
*
*
------------------------------------
  Ntablet_wPi   |      touch       |
------------------------------------
     GND        |       G          |
------------------------------------
     3.3v       |       +          |
------------------------------------
     wPi_13     |       D0         |
------------------------------------


*
*
*
*/


#include <stdio.h>
#include <wiringPi.h>



#define PIN	13


void init_GPIO(){

  wiringPiSetup () ;

  pinMode ( PIN, INPUT);

}

void test(){

  printf("[INFO]  Touch module State Read !\n");
  int val = 0;


  while( 1 ){

     val = digitalRead( PIN );

     printf("[INFO] val is :%d\n", val);

     delay( 200 );

  }//end while( 1 )

}

int main( void ){

  printf("[INFO] Ntablet GPIO TEST !\n");

  init_GPIO();

  test();

  return 0;
}
