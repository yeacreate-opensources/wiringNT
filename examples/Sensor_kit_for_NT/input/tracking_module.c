/*
*
* tracking_module.c
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
------------------------------------
  Ntablet_wPi   |     Tracking     |
------------------------------------
     GND        |       GND        |
------------------------------------
     3.3v       |       VCC        |
------------------------------------
     wPi_13     |       OUT        |
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

  printf("[INFO] Tracking  State Read !\n");
  int val = 0;


  while( 1 ){

     val = digitalRead( PIN );

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
