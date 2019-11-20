/*
*
*light_cup_module.c
*
* Software written by YeaCreate Ltd 2019
* All rights reservedy
*
*
****************************
*
* Examples are for reference only
*
*
---------------------------------------------------------
  Ntablet_wPi   |  Light Cup ( A )  |  Light Cup ( B )  |
---------------------------------------------------------
     GND        |         G         |                   |
---------------------------------------------------------
     wPi_14     |         S         |                   |
---------------------------------------------------------
     wPi_13     |         L         |                   |
---------------------------------------------------------
     GND        |                   |        G          |
---------------------------------------------------------
     wPi_11     |                   |        S          |
---------------------------------------------------------
     wPi_10     |                   |        L          |
---------------------------------------------------------
*
*
*
*/


#include <stdio.h>
#include <wiringPi.h>
#include <softPwm.h>


#define LED_A	13
#define READ_A  14

#define LED_B	10
#define READ_B  11

#define RANGE	100

void init_GPIO(){

  wiringPiSetup () ;

  pinMode ( READ_A, INPUT);
  pinMode ( READ_B, INPUT);

  softPwmCreate ( LED_A, 0, RANGE) ;
  softPwmCreate ( LED_B, 0, RANGE) ;


}

void test(){

  printf("[INFO] Light Cup Read !\n");
  int value_a = 0;
  int value_b = 0;
  int brightness = 0;

  while( 1 ){

     value_a = digitalRead( READ_A );
     if( value_a == 1 && brightness != 100 ){
  	brightness ++;
     }
     printf("[INFO] value_a is :%d\n", value_a );

     value_b = digitalRead( READ_B ) ;
     if( value_b == 1 && brightness != 0 ){
	brightness --;
     }

     printf("[INFO] value_b is :%d\n\n", value_b );

     int v_b =  100 - brightness ;
     softPwmWrite( LED_A, brightness );
     softPwmWrite( LED_B, v_b );
     printf( "[INFO] brightness is : %d\n\n", brightness );
     delay( 50 );

  }//end while( 1 )

}

int main( void ){

  printf("[INFO] Ntablet GPIO TEST !\n");

  init_GPIO();

  test();

  return 0;
}
