
#ifndef DELAY_H_
#define DELAY_H_


#include "std_types.h"
#include "common_macros.h"
#include "tm4c123gh6pm.h"


/************** FUNCTION PROTOTYPES*****************/
void _delay_ms(volatile uint8_t ms);
void _delay_10ms (volatile uint8_t ms_10);
void _delay_sec  (volatile uint8_t sec);
/***********************************************************/


#endif 
