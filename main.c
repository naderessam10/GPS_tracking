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
//LCD_init();	
//LCD_displayStringRowColumn(0,0,"The Distance =");		

		
	while(1)
{
	
	
if(button_is_pressed()){button_flag=1;}
if(button_flag==1)
{
uint32_t i;
volatile int distance;	
for(i=2;i<12;i++)
{
distance=distance_calc(i,i,startLongitude,startLatitude);
LCD_intgerToString(distance,1,0);

_delay_sec(2);
}

led_on(1);
	


}	

}
	
	}



