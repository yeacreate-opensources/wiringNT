/*
*
*soil_humidity_sensor.c
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
------------------------------------
  Ntablet_wPi   |  Soil Humidity   |
------------------------------------
     GND        |       GND        |
------------------------------------
     3.3v       |       VCC        |
------------------------------------
     wPi_31     |       D0         |
------------------------------------
                |       A0         |
------------------------------------
*
*  If A0 is used, the voltage of A0 should be controlled at 0-1.8v
*
*  Read ADC0  fun :   YeaCreate_ReadADC0();
                      [ Need  #include <wiringPi.h> ]
*
*/


#include <stdio.h>
#include <wiringPi.h>


#define PIN	31


void init_GPIO(){

  wiringPiSetup () ;

  pinMode ( PIN, INPUT);

}

void test(){

  printf("[INFO] Soil Humidity Sensor State Read !\n");
  int val = 0;


  while( 1 ){

     val = digitalRead( PIN );

     printf("[INFO] val is :%d\n", val);   // (val == 1 ) , Need  watering.
                                           // (val == 0 ) , Stop  water.
     delay( 1000 );

  }//end while( 1 )

}

int main( void ){

  printf("[INFO] Ntablet GPIO TEST !\n");

  init_GPIO();

  test();

  return 0;
}

