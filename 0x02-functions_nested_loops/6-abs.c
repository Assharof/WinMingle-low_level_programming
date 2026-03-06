#include <ctype.h>
#include "main.h"

/* _isalpha is a function that computes the absolute value of an integer.
* @n : character to check
* return: absolute value of n
*/


int _abs(int n)
{

		if (n < 0)
			{ 
				return (-n);
			}
			else 
			{
				return (n);
			}
}
