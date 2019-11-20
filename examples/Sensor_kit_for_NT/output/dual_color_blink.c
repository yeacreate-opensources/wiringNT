
/*
*
* dual_color_blink.c
*
* Software written by YeaCreate Ltd 2019
* All rights reserved
*
*
*
*
*********************************************
* Examples are for reference only
*
* LED Pin:
*
* Centre PIN [Longest Pin]	( GND )
*
* Left PIN [Shortest Pin]	( Green LED )
*
* Right	PIN			( Red LED )
*
* Color:

    Centre + Left --> Green LED
    Centre + Right --> Red LED
*
*
---------------------------------------
  Ntablet_wPi   |        led          |
---------------------------------------
     GND        |      Centre Pin     |
---------------------------------------
     wPi_30     |      Left Pin       |
---------------------------------------
     wPi_31     |      Right Pin      |
---------------------------------------
*
*
*
*
*/



#include <stdio.h>
#include <wiringPi.h>



#define PIN_L     30
#define PIN_R     31


void init_GPIO(){

  wiringPiSetup () ;
  pinMode ( PIN_L, OUTPUT) ;
  pinMode ( PIN_R, OUTPUT) ;
  digitalWrite ( PIN_L, LOW) ;
  digitalWrite ( PIN_R, LOW) ;

}

void test(){

  printf("[INFO] Dual LED Blink !\n");

  while ( 1 ){

    digitalWrite ( PIN_L, HIGH) ;
    delay(500);
    digitalWrite ( PIN_L, LOW) ;
    delay(500);

    digitalWrite ( PIN_R, HIGH) ;
    delay(500);
    digitalWrite ( PIN_R, LOW);
    delay(500);
  }

}


int main( void ){

  printf("[INFO] Ntablet GPIO TEST !\n");

  init_GPIO();

  test();

  return 0;
}




