/*
 * main.c
 *
 *  Created on: 26-Sep-2022
 *      Author: soumy
 */

#include <stdio.h>

void main()
{
	char chr1, chr2, chr3, chr4, chr5, chr6;

	printf("Enter 6 characters of your choice: ");
	fflush(stdout);
	scanf("%c %c %c %c %c %c", &chr1, &chr2, &chr3, &chr4, &chr5, &chr6);
	printf("ASCII codes : %u, %u, %u, %u, %u, %u\n", chr1, chr2, chr3, chr4, chr5, chr6);
	fflush(stdout);
	printf("Press enter key to exit the application\n");
	fflush(stdout);
	getchar();
	getchar();
}
