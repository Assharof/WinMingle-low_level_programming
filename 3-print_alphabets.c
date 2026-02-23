#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

 /**
 * Author: Muraina Olamide sherif
 * Program: WinMingle Community C Training
 * Description: This is a program that print the alphabet in lowercase, then uppercase, followed by a new line.
 */

int main (void) {
	
	char x = 'a';


	while (x <= 'z') {
		putchar(x);
		x++;
		}
		x = 'A';
	while (x <= 'Z') {
		putchar(toupper(x));
		x++;
	}

		putchar('\n');
	return(0);
	}
