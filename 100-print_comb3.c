#include <stdio.h>


 /**
 * Author: Muraina Olamide Sherif
 * Program: WinMingle Community C Training
 * Description: This is a program that print all possible different combinations of two digits.*/

int main (void) {

	int i, j;

	// print combinations of two different digits

	for (i = 0; i <= 8; i++){

	    for (j = i; j <= 9; j++){

		putchar(i + '0');
		putchar(j + '0');

		if (!(i == 8 && j ==9)) {
		
			putchar(',');
		    putchar(' ');
			}
		} 
		putchar('\n');
	}

		
	return (0);
	}
