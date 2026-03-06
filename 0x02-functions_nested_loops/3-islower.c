#include <ctype.h>
#include "main.h"

/* _islower is a function that checks for lowercase character
* @c : character to check
* return 1 if lowercase, otherwise 0
*/

int _islower(int c)
{

		if (c >= 'a' && c <= 'z') 
				{ 
					return (1);
				}
					else
					{
						return (0);
					}
}
