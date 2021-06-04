
#include "button_led.h"

void button_led_init()
{
SYSCTL_RCGCGPIO_R |= 0x00000020;	// activate Port F
	 GPIO_PORTF_LOCK_R = 0x4C4F434B; 
//while((SYSCTL_PRGPIO_R&0x00000020) == 0){};
GPIO_PORTF_CR_R = 0x1F; // allow changes to PF4-0
GPIO_PORTF_DIR_R = 0x0E; // PF4,PF0 in, PF3-1 out
GPIO_PORTF_PUR_R = 0x11; // pull-up on PF0 and PF4
GPIO_PORTF_DEN_R = 0x1F; // digital I/O on PF4-0
GPIO_PORTF_DATA_R&=0x11;
}

void led_on(volatile uint8_t led)
{
SET_BIT(GPIO_PORTF_DATA_R,led);
}

void led_off(volatile uint8_t led)
{
CLEAR_BIT(GPIO_PORTF_DATA_R,led);
}

bool button_is_pressed()
{
if(BIT_IS_CLEAR(GPIO_PORTF_DATA_R,0)){return 1;}
else {return 0;}

}	


