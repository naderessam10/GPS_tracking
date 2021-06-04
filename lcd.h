

#ifndef LCD_H_
#define LCD_H_

#include "std_types.h"
#include "common_macros.h"
#include "tm4c123gh6pm.h"

/*******************************************************************************
 *                      Preprocessor Macros                                    *
 *******************************************************************************/
/* LCD Data bits mode configuration */
#define DATA_BITS_MODE 4

/* Use higher 4 bits in the data port */
#if (DATA_BITS_MODE == 4)
#define UPPER_PORT_PINS
#endif

#undef UPPER_PORT_PINS /* Use the lower 4-bits in the data port */

/* LCD HW Pins */
#define RS 5  //PB5
#define RW 6  //PB6
#define E  7  //PB7

#define LCD_CTRL_PORT GPIO_PORTB_DATA_R 
#define LCD_CTRL_PORT_DIR GPIO_PORTB_DIR_R
#define LCD_DATA_PORT GPIO_PORTD_DATA_R // PD0-PD3
#define LCD_DATA_PORT_DIR GPIO_PORTD_DIR_R

/* LCD Commands */
#define CLEAR_COMMAND 0x01
#define FOUR_BITS_DATA_MODE 0x02
#define TWO_LINE_LCD_Four_BIT_MODE 0x28
#define TWO_LINE_LCD_Eight_BIT_MODE 0x38
#define CURSOR_OFF 0x0C
#define CURSOR_ON 0x0E
#define SET_CURSOR_LOCATION 0x80 

/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/
void LCD_sendCommand(uint8_t command);
void LCD_displayCharacter(uint8_t data);
void LCD_displayString(const char *Str);
void LCD_init(void);
void LCD_clearScreen(void);
void LCD_displayStringRowColumn(uint8_t row,uint8_t col,const char *Str);
void LCD_goToRowColumn(uint8_t row,uint8_t col);
void LCD_intgerToString(int data,uint8_t row,uint8_t column);

#endif /* LCD_H_ */
