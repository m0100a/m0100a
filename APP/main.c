/*
 * main.c
 *
 * Created: 5/2/2022 6:22:5 PM
 *  Author:  mohamed_mahmoud
 */ 

#include "../Util/ATmega32A_Config.h"
#include "pwm_drawer/PWM_Drawer.h"

#include <util/delay.h>

int main(void)
{
	PWMDrawer_Init();
	PWMDrawer_SignalAttributesType Signal_Data = {0, 0, 0, 0, 0};
	float32 Scale_ms = 0.25;
    while(1)
    {
		PWMDrawer_MeasureSignal(&Signal_Data);
		Scale_ms = (Signal_Data.Period_Time_ms) / 5;
		PWMDrawer_DrawSignal(&Signal_Data, Scale_ms);
		_delay_ms(100);
    }
}
