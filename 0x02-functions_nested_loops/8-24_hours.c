#include "main.h"

/**
*Jack_bauer - prints everyday minute of the day
*Format: HH:MM from 00:00 to 23:59
*
*/

void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++) 
		{
			_putchar((hour / 10) + '0'); /* first digit of hour */
			
			_putchar((hour % 10) + '0'); /* second digit of hour */

			_putchar(':'); /* : sign */

			_putchar((minute / 10) + '0'); /* first digit of minute */

			_putchar((minute % 10) + '0'); /* second digit of minute */

			_putchar('\n'); /* new line */

		}
	}
}
