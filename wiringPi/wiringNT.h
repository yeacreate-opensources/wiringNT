#ifndef	__WIRING_NT_H__
#define	__WIRING_NT_H__

#include <RKIO.h>



int* YeaCreate_get_physToGpio         (int rev);
int* YeaCreate_get_pinToGpio          (int rev);
int  YeaCreate_Ntablet_setup          (int rev);
int  YeaCreate_get_pin_mode           (int pin);
void YeaCreate_set_pinmode_as_gpio    (int pin);
void YeaCreate_set_pin_mode           (int pin, int mode);
void YeaCreate_digitalWrite           (int pin, int value);
int  YeaCreate_digitalRead            (int pin);
void YeaCreate_pullUpDnControl        (int pin, int pud);
void YeaCreate_set_pwmPeriod          (int pin, unsigned int period);
void YeaCreate_set_pwmRange           (unsigned int range);
void YeaCreate_set_pwmFrequency       (int pin, int divisor);
void YeaCreate_set_pwmClock           (int divisor);
void YeaCreate_pwm_write              (int pin, int value);
void YeaCreate_pwmToneWrite           (int pin, int freq);
void YeaCreate_set_gpioClockFreq      (int pin, int freq);
int  YeaCreate_get_pinAlt             (int pin);
void YeaCreate_set_pinAlt             (int pin, int alt);
void YeaCreate_set_GpioDriveStrength  (int pin, int drv_type);
int  YeaCreate_get_GpioDriveStrength  (int pin);
void YeaCreate_cleanup                (void);
void gpio_clk_enable             (void);
int  YeaCreate_ReadADC0          (void);
#endif
