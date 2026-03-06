#include "main.h"

/* This is a function that print lowercase alphabet 10x
*/


void print_alphabet_x10(void) 
{
	char x;
	int i;

	for(i = 1; i <= 10; i++) 
	{ 
 		_putchar('\n');
		for(x = 'a'; x <= 'z'; x++) 
			{
 				_putchar(x);
			}
	}
}
