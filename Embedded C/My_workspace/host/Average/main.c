/*
 * main.c
 *
 *  Created on: 24-Sep-2022
 *      Author: soumy
 */

#include <stdio.h>

void main(void)
{
	double number1, number2, number3, average;
	printf("Enter first number: ");
	fflush(stdout);
	scanf("%lf", &number1);
	printf("Enter second number: ");
	fflush(stdout);
	scanf("%lf", &number2);
	printf("Enter third number: ");
	fflush(stdout);
	scanf("%lf", &number3);                      //Read from input buffer excluding the newline feed added in buffer

	average = (number1 + number2 + number3)/3;

	printf("\nThe average is: %lf\n", average);  //This message is first saved to output buffer
	printf("Press any key to continue");
	getchar();
	getchar();
}
