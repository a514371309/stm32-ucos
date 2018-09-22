#include "delay.h"




void delay(u32 x)
{
  while(x--);
}
void delay_us(u16 us)
{
  u8 i;
  while(us--)
	{
	  for(i=0;i<6;i++);
	}
}

void delay_ms(u16 ms)
{
  while(ms--)
	{
	  delay_us(1000);
	}

}

