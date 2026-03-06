#include <stdio.h>

/**
 * main - prints first 50 Fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	long int a = 1, b = 2, next;
	int i;

	printf("%ld, %ld", a, b);

	for (i = 3; i <= 50; i++)
	{
		next = a + b;
		printf(", %ld", next);

		a = b;
		b = next;
	}

	printf("\n");

	return (0);
}
