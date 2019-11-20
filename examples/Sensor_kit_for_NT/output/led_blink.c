
/*
*
*led_blink.c
*
* Software written by YeaCreate Ltd 2019
* All rights reserved
*
**********************************
* Examples are for reference only
*
*
* long Pin ( + )
* short Pin ( - )
*
*
---------------------------------------
  Ntablet_wPi   |        led          |
---------------------------------------
     GND        |      -(Long pin)    |
---------------------------------------
     wPi_31     |      +(Short pin)   |
---------------------------------------
*
*
*
*/



#include <stdio.h>
#include <wiringPi.h>


#define PIN     31


void init_GPIO(){

  wiringPiSetup () ;
  pinMode ( PIN, OUTPUT) ;
  digitalWrite ( PIN, LOW) ;

}

void test(){

  printf("[INFO] LED Blink !\n");

  while ( 1 ){
    digitalWrite ( PIN, HIGH) ;
    delay(500);
    digitalWrite ( PIN, LOW) ;
    delay(500);
  }

}


int main( void ){

  printf("[INFO] Ntablet GPIO TEST !\n");

  init_GPIO();

  test();

  return 0;
}




