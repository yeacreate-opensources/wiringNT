/*
*
*tap_module.c
*
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
-----------------------------------------------------------
  Ntablet_wPi   |    Tap_module    |          LED         |
-----------------------------------------------------------
     GND        |         -        |                      |
-----------------------------------------------------------
     3.3v       |         +        |                      |
-----------------------------------------------------------
     wPi_13     |         s        |                      |
-----------------------------------------------------------
     GND        |                  |      -(short Pin)    |
-----------------------------------------------------------
     wPi_31     |                  |      +( long pin)    |
-----------------------------------------------------------
*
*
*
*/


#include <stdio.h>
#include <wiringPi.h>



#define PIN	13
#define LED	31



void init_GPIO(){

  wiringPiSetup () ;

  pinMode ( PIN, INPUT);
  pinMode ( LED, OUTPUT);

}

void test(){

  printf("[INFO] Tap Module State Read !\n");
  int val = 0;
  int led_state = 0;

  while( 1 ){

     val = digitalRead( PIN );

     printf("[INFO] val is :%d\n", val);
     if ( val == 0 && led_state == 0 ) {
	led_state  = 1 ;
        digitalWrite( LED, HIGH);
     }
     else if( val == 1 && led_state == 1 ){
        led_state  = 0 ;
        digitalWrite (LED, LOW);
     }

     //delay( 1000 );

  }//end while( 1 )

}

int main( void ){

  printf("[INFO] Ntablet GPIO TEST !\n");

  init_GPIO();

  test();

  return 0;
}
