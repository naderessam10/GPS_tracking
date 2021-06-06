#include "lcd.h"
#include "button_led.h"
#include "gps.h"

void SystemInit(){}
	
volatile uint32_t startLongitude=1;
volatile uint32_t startLatitude=1;
volatile uint8_t button_flag=0;


int main()
	{
button_led_init();	
LCD_init();	
	

while(1)
{
	
	
if(button_is_pressed()){button_flag=1;}
if(button_flag==1)
{


LCD_intgerToString(20,0,7);
_delay_sec(2);

LCD_intgerToString(19,0,7);
_delay_sec(2);
	
LCD_intgerToString(18,0,7);
_delay_sec(2);
	
led_on(1);
	


}	

}
	
	}



