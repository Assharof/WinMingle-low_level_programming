#include <stdio.h>
#include <stdlib.h>


 /**
 * Author: Muraina Olamide Sherif
 * Program: WinMingle Community C Training
 * Description: This is a program that print the alphabet in lowercase, followed by a new line.
 */


int main (void) {
	
	//declaring and assining value to 'x' variable
	char x = 'z';

	//while loop, it checks if 'x' is less than ot equal to 'z' and increment in each iteration
	while (x >= 'a') {
		putchar(x);
		x--;
	}

	// putchar function that print new line
	putchar('\n');

	return (0);
	}
