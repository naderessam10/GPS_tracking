
#include "delay.h"

void _delay_sec(volatile uint8_t sec)
{
volatile uint32_t add;
volatile uint32_t time;
volatile uint32_t i;

time=sec*1000000000;
for(i=0;i<time;i++)
{
add*=i;
add++;
add++;	
}	
}


void _delay_ms(volatile uint8_t ms)
{
volatile uint32_t add;
volatile uint32_t time;
volatile uint32_t i;

time=ms*1000000;
for(i=0;i<time;i++)
{
add*=i;
add++;
add++;	
}
}

void _delay_10ms(volatile uint8_t ms_10)
{
volatile uint32_t add;
volatile uint32_t time;
volatile uint32_t i;

time=ms_10*10000000;
for(i=0;i<time;i++)
{
add*=i;
add++;
add++;	
}

}
