/*
*
* encoders_module.c
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
------------------------------------
  Ntablet_wPi   |     Encoders     |
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


#define SW_PIN	10

#define DT_PIN	13

#define CLK_PIN	30


int state = 0;
int count = 0;


void init_GPIO(){
  wiringPiSetup () ;

  pinMode ( SW_PIN, INPUT);
  pinMode ( DT_PIN, INPUT);
  pinMode ( CLK_PIN, INPUT);

}//end init_GPIO()



void test(){
  printf("[INFO] Encoder State Read !\n");


  while ( 1 ){

    if( !digitalRead( SW_PIN ) ){
      delay( 100 );
      if( !digitalRead( SW_PIN ) ){
	printf("[INFO] sw Is pressed !\n\n\n ");
      }
    }//end  sw



    int newDT = digitalRead( DT_PIN );
    int newCLK = digitalRead( CLK_PIN );

    if ( newDT==0 && newCLK == 1 ){
      delay( 150 );
      if ( newDT==0 && newCLK == 1 ){
         count  ++;
         printf("[INFO] count(++) is :%d\n", count);
      }
    }
    else if( newDT==1 && newCLK == 0 ){
      delay( 200 );
      if( newDT==1 && newCLK == 0 ){
	count  --;
        printf("[INFO] count(--) is :%d\n", count);
      }
    }


/*
    static int oldDT = HIGH;
    static int oldCLK = HIGH;

    if( oldDT != newDT || oldCLK != newCLK ){
        delay( 50 );
	if( newDT==0 && newCLK == 1 ){
          count  ++;
          printf("[INFO] count(++) is :%d\n", count);
        }
        if( newDT==1 && newCLK == 0 ){
          count --;
          printf("[INFO] count(--) is :%d\n", count);
        }
    }
*/

//    printf("[INFO] newDT is :%d\n", newDT );
//    printf("[INFO] newCLK is :%d\n\n\n", newCLK );
//    delay( 500 );
  }//end  while( 1 )

}//end test()

int main( void ){

  printf("[INFO] Ntablet GPIO TEST !\n");

  init_GPIO();

  test();

  return 0;
}
