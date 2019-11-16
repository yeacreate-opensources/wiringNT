#include <stdio.h>
#include <stdlib.h>
#include <wiringPi.h>


/*
***********************************************************************
* Ntablet adc0 test 
* The main program
***********************************************************************
*/


int main(){
	printf("--------------Ntabet ADC0 test --------------- \n");

	int adc_value = 0 ;

	while( 1 ){
		adc_value = YeaCreate_ReadADC0();
		printf("[INFO] adc_value is: %d\n", adc_value);
		delay( 1000 );
	}
	return  0 ;
}
