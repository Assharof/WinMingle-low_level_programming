#include <ctype.h>
#include "main.h"

/* _isalpha is a function that print sign of a number 
* @n : character to check
* return 1 if n is greater than 0, return 0 if n is equal to zero, return -1 if n is less than zero
*/


int print_sign(int n)
{

		if (n > 0)
			{ 
				return (1);
			}
				else if (n == 0)
				{
					return (0);
				}
				else 
				{
					return (-1);
				}
}
