/*
*
* wave_distance.c
*
* Software written by YeaCreate Ltd 2019
* All rights reserved
*
*
*
****************************
*
* Examples are for reference only
*
*
*
------------------------------------
  Ntablet_wPi   |    ultrasonic    |
------------------------------------
     GND        |       GND        |
------------------------------------
     3.3v       |       +          |
------------------------------------
     wPi_10     |       SW         |
------------------------------------
     wpi_13     |       DT         |
------------------------------------
     wPi_30     |       CLK        |
------------------------------------
*
*
*
*/

#include <stdio.h>
#include <wiringPi.h>
#include <sys/time.h>


const int Trig = 10;
const int Echo = 13;

float distance;


void init_GPIO(){
  wiringPiSetup () ;

  pinMode ( Trig, OUTPUT);
  pinMode ( Echo, INPUT);


}//end init_GPIO()






float disMeasure(void){
 struct timeval tv1;
 struct timeval tv2;
 long start, stop;
 float dis;

 digitalWrite( Trig, HIGH);
 delayMicroseconds( 10 );
 digitalWrite( Trig, LOW);

 while ( !(digitalRead(Echo) == 1) );
 gettimeofday(&tv1, NULL);

 while ( !(digitalRead(Echo) == 0) );
 gettimeofday(&tv2, NULL);     //get  ** (s)

 start = tv1.tv_sec * 1000000 + tv1.tv_usec;  // get ** (us)
 stop  = tv2.tv_sec * 1000000 + tv2.tv_usec;
 dis = (float)(stop - start) / 1000000 * 34000 / 2;  //
 return dis;
}



int main( void ){
  float dis;
  printf("[INFO] Ntablet GPIO TEST !\n");

  init_GPIO();
  printf("[INFO] Ultrasonic test !\n");


  while( 1 ){
     dis = disMeasure();
     printf("distance = %0.2f cm\n", dis);
     delay(1000);
  }

//  test();

  return 0;
}
