/*
*
*relay_module.c
*
* Software written by YeaCreate Ltd 2019
* All rights reserved
*
****************************
*
* Examples are for reference only
*
*
*
----------------------------------------------------------
  Ntablet_wPi   |    relay_module   |     Rad_LED        |
----------------------------------------------------------
     GND        |         -         |                    |
----------------------------------------------------------
     5v	        |         +         |                    |
----------------------------------------------------------
     wPi_31     |         s	    |                    |
----------------------------------------------------------
		|         Nc        |                    |
----------------------------------------------------------
     GND	|         Public    |                    |
----------------------------------------------------------
		|	  NO        |    -(Short Pin)    |
----------------------------------------------------------
     3.3v       |                   |    +(Long Pin)     |
----------------------------------------------------------
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

  printf("[INFO] relay ctrl !\n");
  int i;
  for(i = 0; i < 100; i++){
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
