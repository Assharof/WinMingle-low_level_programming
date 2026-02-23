#include <stdio.h>


 /**
 * Author: Muraina Olamide Sherif
 * Program: WinMingle Community C Training
 * Description: This is a program that print all possible different combinations of three digits.*/

int main (void) {

	int i, j, k;

	// print combinations of three different digits

	for (i = 0; i <= 99; i++){

	    for (j = i; j <= 8; j++){
			
	        for (k = j; k <= 9; k++){

		      putchar(i + '0');
			  putchar(j + '0');
			  putchar(k + '0');

		 	 if (!(i == 99 && j ==8 && k == 9)) {
		
			     putchar(',');
		         putchar(' ');
			 }
			}
		} 
		putchar('\n');
	}

		
	return (0);
	}
