#ifndef _TIM4_H
#define _TIM4_H

#include "gpio.h"							//we use gpio

//hardware configuration
//end hardware configuration

//global defines
//TIM4 prescaler
#define TIM4_PS1x			0x00
#define TIM4_PS2x			0x01
#define TIM4_PS4x			0x02
#define TIM4_PS8x			0x03
#define TIM4_PS16x			0x04
#define TIM4_PS32x			0x05
#define TIM4_PS64x			0x06
#define TIM4_PS128x			0x07
//#define TIM4_PS256x			0x08
//#define TIM4_PS1024x		0x09
//#define TIM4_PS2048x		0x0a
//#define TIM4_PS4096x		0x0b
//#define TIM4_PS8192x		0x0c
//#define TIM4_PS16384x		0x0d
//#define TIM4_PS32768x		0x0e

//global variables


//initialize the timer
//ps = prescaler: 0x0000 - 0xffff
//pr = 16-bit period, 0x0000 - 0xffff
void tim4_init(uint8_t ps, uint8_t pr);

//activate user handler
void tim4_act(void (*isr_ptr)(void));

#endif
