#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 /**
 * Author: Muraina Olamide Sherif
 * Program: WinMingle Community C Training
 * Description: This is a program that prints the last digit of a random number n.
 */

 int main (void) {

	 // Declaring variable 'n' and 'last'
	 int n;
	 int last;

	// using srand function
	 srand(time(0));

	// assigning value to 'n' variable
	 n = rand();

	 // assigning value to 'last' variable
	 last = n % 10;

	// Conditional statement

	if (last > 5) {
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	} else if (last == 0) {
		printf("Last digit of %d is %d and is equal to 0\n", n, last);
	} else if (last < 6) {
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
	}

	return (0);	 		
}

