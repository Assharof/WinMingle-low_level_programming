#include <ctype.h>
#include "main.h"

/* _isalpha is a function that checks for alphabetic characters 
* @c : character to check
* return 1 if letter, lowercase, uppercase or otherwise 0
*/


 int _isalpha(int c)
{

		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
				{ 
					return (1);
				}
					else
					{
						return (0);
					}
}
