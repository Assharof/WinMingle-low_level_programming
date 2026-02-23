#include <stdio.h>


 /**
 * Author: Muraina Olamide Sherif
 * Program: WinMingle Community C Training
 * Description: This is a program that print all possible different combinations of three digits.*/

int main (void) {

	int i, j, k, l;

	// print combinations of three different digits

	for (i = 0; i <= 8; i++){

	    for (j = i; j <= 9; j++){
			
	        for (k = 0; k <=8; k++){

	        for (l = k; l <=9; l++){

		      putchar(i + '0');
			  putchar(j + '0');
			  putchar(k + '0');
			  putchar(l + '0');

		
		 	 if (!(i == 8 && j ==9 && k == 8 && l == 9)) {
		
			     putchar(',');
		         putchar(' ');
			 }
		   }
		 }
		} 
		putchar('\n');
	}

		
	return (0);
	}
