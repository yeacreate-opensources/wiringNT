#include <stdio.h>
#include <stdlib.h>
#include "wiringPiI2C.h"
#include <pcf8574.h>
#include <wiringPi.h>


/*
***********************************************************************
* pcf8574_test
* The main program
***********************************************************************
*/


int main(){
	printf("--------------Ntabet pcf8574 test !--------------- \n");

	int fd;
	static int send_data;
	//int read_value;
    fd = wiringPiI2CSetup(0x20);

	while( 1 ){
		for( int a =0; a < 8; a++){
			send_data = (1 << a);  // 1 2 4 8 16 32 64 128
			wiringPiI2CWrite( fd , send_data );
			printf("[INFO] data is %d\n", send_data);

			//read_value =  wiringPiI2CRead(fd);
			//printf("[INFO] read value is %d:\n", read_value);
			delay(500);
		}
                
	}
	return  0 ;
}
