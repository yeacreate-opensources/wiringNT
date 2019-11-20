/*
*
*laser_emit_module.c
*
* Software written by YeaCreate Ltd 2019
* All rights reserved
*
*
****************************
* Examples are for reference only
*
*
*  //Pin logo for laser module is reverse
-----------------------------------
  Ntablet_wPi   |    laser_emit   |
-----------------------------------
     GND        |        +        |
-----------------------------------
     wPi_31     |        -        |
-----------------------------------
*
*
*
*/



#include <stdio.h>
#include <wiringPi.h>


#define PIN	31


void init_GPIO(){

  wiringPiSetup () ;
  pinMode ( PIN, OUTPUT) ;
  digitalWrite ( PIN, LOW) ;

}

void test(){

  printf("[INFO] Laser Emit module !\n");

  while( 1 ) {  // blink
    digitalWrite ( PIN, HIGH) ;
    delay(1000);
    digitalWrite ( PIN, LOW) ;
    delay(1000);
  }

}


int main( void ){

  printf("[INFO] Ntablet GPIO TEST !\n");

  init_GPIO();

  test();

  return 0;
}
