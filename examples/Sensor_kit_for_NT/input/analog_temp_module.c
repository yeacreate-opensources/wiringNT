/*
*
* analog_temp_module.c
*
* Software written by YeaCreate Ltd 2019
* All rights reserved
*
****************************
* Examples are for reference only
*
*
*
------------------------------------
  Ntablet_wPi   |   Analog Temp    |
------------------------------------
     GND        |         -        |
------------------------------------
     3.3v       |         +        |
------------------------------------
     wPi_13     |         s        |
------------------------------------
*  If A0 is used, the voltage of s(PIN) should be controlled at 0-1.8v
*
*  Read ADC0  fun :   YeaCreate_ReadADC0();
*
*                     [ Need  #include <wiringPi.h> ]
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

  printf("[INFO] Analoog Temp State Read !\n");
  int val = 0;


  while( 1 ){

     val = digitalRead( PIN );   //  val =  0;

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
