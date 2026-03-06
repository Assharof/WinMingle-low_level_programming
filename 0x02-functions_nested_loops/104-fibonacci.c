#include <stdio.h>

/**
 * main - prints first 98 Fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	unsigned long a = 1, b = 2, next;
	int i;

	printf("%lu, %lu", a, b);

	for (i = 3; i <= 98; i++)
	{
		next = a + b;
		printf(", %lu", next);

		a = b;
		b = next;
	}

	printf("\n");

	return (0);
}
