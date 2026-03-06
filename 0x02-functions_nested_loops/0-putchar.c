#include "main.h"
#include <stdio.h>

 /**
 * Author: Muraina Olamide sherif
 * Program: WinMingle Community C Training
 * Description: This is a program that print like putchar() and print().
 */

int main (void) 
{
	int i = 0;
	char c;

	char a[] = "_putchar";

	while (i <= 8) 
	{
		c = a[i];

		_putchar(c);

		i++;
	}
	return(0);
}
