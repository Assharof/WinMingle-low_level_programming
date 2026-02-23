#include <stdio.h>


 /**
 * Author: Muraina Olamide Sherif
 * Program: WinMingle Community C Training
 * Description: This is a program that print all possible combinations of single-digit numbers separated by commas and spaces. */

int main (void) {

	int i;
	// print 0 - 9

	for (i = 0; i <= 9; i++){
		printf("%d,", i);
		}
		putchar('\n');
		printf("\n");
		
	return (0);
	}
