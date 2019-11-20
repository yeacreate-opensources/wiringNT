/*
*
*passive_buzzer_module.c
*
* Software written by YeaCreate Ltd 2019
* All rights reserved
*
*
*****************************
*
* Examples are for reference only
*
*
*
---------------------------------------
  Ntablet_wPi   |    Passive_Buzzer   |
---------------------------------------
     GND        |          -          |
---------------------------------------
     5v         |          +          |
---------------------------------------
     wPi_31     |          s          |
---------------------------------------
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

  printf("[INFO] Passive Buzzer !\n");

  while(1){
    for(int i = 0; i < 80; i++){
      digitalWrite ( PIN, HIGH) ;
      delay( 1 );
      digitalWrite ( PIN, LOW) ;
      delay( 1);
    }

    for(int j = 0; j <  100; j++ ){
      digitalWrite ( PIN, HIGH) ;
      delay( 2 );
      digitalWrite ( PIN, LOW) ;
      delay( 2 );
    }
  }

}


int main( void ){

  printf("[INFO] Ntablet GPIO TEST !\n");

  init_GPIO();

  test();

  return 0;
}
