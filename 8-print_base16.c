#include <stdio.h>


 /**
 * Author: Muraina Olamide Sherif
 * Program: WinMingle Community C Training
 * Description: This is a program that print all the numbers of base 16 in lowercase.
 */

int main (void) {

	int i;
	// print 0 - 9

	for (i = 0; i <= 9; i++){
		putchar('0' + i);
		}

		// print a - f

	for (i = 0; i < 6; i++){
		putchar('a' + i);
		}
		putchar('\n');
		
	return (0);
	}
