/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2022 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

#include <stdio.h>

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

unsigned int g_num_1;
unsigned int g_num_2;
int sum;
int main(void)
{
    /* Loop forever */
	g_num_1 = 100;
	g_num_2 = 200;
	sum = g_num_1 + g_num_2;
	printf("The sum of %d and %d is: %d\n", g_num_1, g_num_2, sum);
	for(;;);
}