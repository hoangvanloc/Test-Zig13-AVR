/*
 * Project.c
 *
 * Created: 4/14/2019 2:48:46 PM
 * Author : ABCD
 */ 

#include <avr/io.h>
#include "main.h"
#include <avr/delay.h>
#define USE_TEST 1
#define set_bit(port,bit) (port |= (1<<bit))
#define clr_bit(port,bit) (port &=~(1<<bit))
uint8_t data = 0x00;
int main(void)
{
    /* Replace with your application code */
	//DDRB &=~ ((1<<LED1_IN)|(1<<LED2_IN)|(1<<LED3_IN)|(1<<LED4_IN)|(1<<LED5_IN)|(1<<LED6_IN)|(1<<LED7_IN));
	//DDRH &=~ (1<<LED8_IN)|(1<<LED9_IN)|(1<<LED10_IN)|(1<<LED11_IN)|(1<<LED12_IN)|(1<<LED13_IN);
    DDRB = 0x80;
	DDRH = 0x81;
	DDRG |= (1<<PING5);
	//DDRH |=(1<<PINH0);
	DDRE |=((1<<PINE5)|(1<<PINE4)|(1<<PINE3));
	DDRF |=((1<<PINF0)|(1<<PINF1)|(1<<PINF2)|(1<<PINF3)|(1<<PINF4)|(1<<PINF5)|(1<<PINF6)|(1<<PINF7));
	DDRK |=((1<<PINK0)|(1<<PINK1)|(1<<PINK2)|(1<<PINK3)|(1<<PINK4)|(1<<PINK5)|(1<<PINK6)|(1<<PINK7));
	DDRA |=((1<<PINA0)|(1<<PINA1)|(1<<PINA2)|(1<<PINA3)|(1<<PINA4));
	PORTF = 0xFF;
    PORTK = 0xFF;
	PORTH |= (1<<PINH0);
	PORTE |= (1<<PINE5)|(1<<PINE4)|(1<<PINE3);
	PORTA |= (1<<PINA0)|(1<<PINA1)|(1<<PINA2)|(1<<PINA3)|(1<<PINA4);
	_delay_ms(10000);
    while (1) 
    {
		#ifdef USE_TEST
		data = LED1_PORT_IN;
		if(data&(1<<LED1_IN)) 
		{
			set_bit(LED1_PORT_G,LED1_G);
			clr_bit(LED1_PORT_R,LED1_R);
		}else
		{
			set_bit(LED1_PORT_R,LED1_R);
			clr_bit(LED1_PORT_G,LED1_G);
		}
		data = LED2_PORT_IN;
		if(data&(1<<LED2_IN))
		{
			set_bit(LED2_PORT_G,LED2_G);
			clr_bit(LED2_PORT_R,LED2_R);
		}else
		{
			set_bit(LED2_PORT_R,LED2_R);
			clr_bit(LED2_PORT_G,LED2_G);
		}
		data = LED3_PORT_IN;
		if(data&(1<<LED3_IN))
		{
			set_bit(LED3_PORT_G,LED3_G);
			clr_bit(LED3_PORT_R,LED3_R);
		}else
		{
			set_bit(LED3_PORT_R,LED3_R);
			clr_bit(LED3_PORT_G,LED3_G);
		}
		data = LED4_PORT_IN;
		if(data&(1<<LED4_IN))
		{
			set_bit(LED4_PORT_G,LED4_G);
			clr_bit(LED4_PORT_R,LED4_R);
		}else
		{
			set_bit(LED4_PORT_R,LED4_R);
			clr_bit(LED4_PORT_G,LED4_G);
		}
		data = LED5_PORT_IN;
		if(data&(1<<LED5_IN))
		{
			set_bit(LED5_PORT_G,LED5_G);
			clr_bit(LED5_PORT_R,LED5_R);
		}else
		{
			set_bit(LED5_PORT_R,LED5_R);
			clr_bit(LED5_PORT_G,LED5_G);
		}
		data = LED6_PORT_IN;
		if(data&(1<<LED6_IN))
		{
			set_bit(LED6_PORT_G,LED6_G);
			clr_bit(LED6_PORT_R,LED6_R);
		}else
		{
			set_bit(LED6_PORT_R,LED6_R);
			clr_bit(LED6_PORT_G,LED6_G);
		}
		data = LED7_PORT_IN;
		if(data&(1<<LED7_IN))
		{
			set_bit(LED7_PORT_G,LED7_G);
			clr_bit(LED7_PORT_R,LED7_R);
		}else
		{
			set_bit(LED7_PORT_R,LED7_R);
			clr_bit(LED7_PORT_G,LED7_G);
		}
		data = LED8_PORT_IN;
		if(data&(1<<LED8_IN))
		{
			set_bit(LED8_PORT_G,LED8_G);
			clr_bit(LED8_PORT_R,LED8_R);
		}else
		{
			set_bit(LED8_PORT_R,LED8_R);
			clr_bit(LED8_PORT_G,LED8_G);
		}
		data = LED9_PORT_IN;
		if(data&(1<<LED9_IN))
		{
			set_bit(LED9_PORT_G,LED9_G);
			clr_bit(LED9_PORT_R,LED9_R);
		}else
		{
			set_bit(LED9_PORT_R,LED9_R);
			clr_bit(LED9_PORT_G,LED9_G);
		}
		data = LED10_PORT_IN;
		if(data&(1<<LED10_IN))
		{
			set_bit(LED10_PORT_G,LED10_G);
			clr_bit(LED10_PORT_R,LED10_R);
		}else
		{
			set_bit(LED10_PORT_R,LED10_R);
			clr_bit(LED10_PORT_G,LED10_G);
		}
		data = LED11_PORT_IN;
		if(data&(1<<LED11_IN))
		{
			set_bit(LED11_PORT_G,LED11_G);
			clr_bit(LED11_PORT_R,LED11_R);
		}else
		{
			set_bit(LED11_PORT_R,LED11_R);
			clr_bit(LED11_PORT_G,LED11_G);
		}
		data = LED12_PORT_IN;
		if(data&(1<<LED12_IN))
		{
			set_bit(LED12_PORT_G,LED12_G);
			clr_bit(LED12_PORT_R,LED12_R);
		}else
		{
			set_bit(LED12_PORT_R,LED12_R);
			clr_bit(LED12_PORT_G,LED12_G);
		}
		data = LED13_PORT_IN;
		if(data&(1<<LED13_IN))
		{
			set_bit(LED13_PORT_G,LED13_G);
			clr_bit(LED13_PORT_R,LED13_R);
		}else
		{
			set_bit(LED13_PORT_R,LED13_R);
			clr_bit(LED13_PORT_G,LED13_G);
		}
		#endif
		_delay_ms(10);
    }
}

