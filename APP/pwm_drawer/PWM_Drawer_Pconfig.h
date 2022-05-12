/*
 * PWM_Drawer_Pconfig.h
 *
 * Created: 5/2/2022 6:23:30 PM
 *  Author:  mohamed_mahmoud
 */ 


#ifndef PWM_DRAWER_PCONFIG_H_
#define PWM_DRAWER_PCONFIG_H_

#define GENERATE_PWM_FROM_SAME_MCU			(1U)	/* 1 if the same MCU is used to generate PWM signal and display it using GLCD, 0 otherwise */

#if GENERATE_PWM_FROM_SAME_MCU == 0

	#define GLCD_MCU						(1U)
#endif


#endif /* PWM_DRAWER_PCONFIG_H_ */
