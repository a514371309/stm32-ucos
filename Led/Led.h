#ifndef _Led_H_
#define _Led_H_

#include "stm32f10x_conf.h"

#define LED0_OFF GPIO_SetBits(GPIOC, GPIO_Pin_13)
#define LED0_ON GPIO_ResetBits(GPIOC, GPIO_Pin_13)

void LED_Init(void);

#endif
