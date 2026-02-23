#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*Author: Muraina Olamide Sherif
*Program: WinMingle Community C Training
*Description: This a program that assigns a random number to the variable n each time it runs and prints whether the number is positive, negative, or zero.
*/

int main (void) {

	// delaring variable 'n'
	int n;

	// random number function
	srand(time(0));

	// to generate positive, negative and zero value, i need to minus maximum number 'rand' generated from 'rand' and divide it by 2
	n = rand() - RAND_MAX / 2;

	// conditional statement for the output

	if (n > 0) {
		printf("%d is positive\n", n);
    }else if (n < 0) {
		printf("%d is negative\n", n);
	}else {
		printf("%d is zero\n", n);
		}
	return(0);
}	
