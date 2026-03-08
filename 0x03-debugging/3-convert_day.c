#include "main.h"

/**
 * convert_day - converts month/day to day of year
 * @month: month
 * @day: day
 *
 * Return: day of the year
 */
int convert_day(int month, int day)
{
	int month_days[] = {31, 28, 31, 30, 31, 30,
						31, 31, 30, 31, 30, 31};
	int i;
	int day_of_year = 0;

	for (i = 0; i < month - 1; i++)
	{
		day_of_year += month_days[i];
	}

	day_of_year += day;

	return (day_of_year);
}
