/*
*
* analog_hall_module.c
*
* Software written by YeaCreate Ltd 2019
* All rights reserved
*
*
****************************
* Examples are for reference only
*
------------------------------------------------------------------
  Ntablet_wPi   |   Analog Hall    |   (1)R 10k   |   (2)R 10k   |
------------------------------------------------------------------
     GND        |         -        |              |    B side    |
------------------------------------------------------------------
     3.3v       |         +        |              |              |
------------------------------------------------------------------
                |         s        |    A side    |              |
------------------------------------------------------------------
     ADC0       |                  |    B side    |    A side    |
------------------------------------------------------------------



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



void test(){

  printf("[INFO] Analoog Hall State Read !\n");


  int adc_value = 0 ;

   while( 1 ){
       adc_value = YeaCreate_ReadADC0();

       printf("[INFO] adc_value is: %d mv\n", adc_value);

       delay( 1000 );
    }

}

int main( void ){

  printf("[INFO] Ntablet GPIO TEST !\n");

  test();

  return 0;
}
