#include "stm32f10x_conf.h"
#include "Led.h"
#include "delay.h"

int main()
{
  LED_Init();
  while(1)
	{
	  LED0_ON;
    delay_ms(500);
 	  LED0_OFF;
    delay_ms(500);   		
	}
}

