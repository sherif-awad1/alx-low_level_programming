#include <stdio.h>


/**
 * main - find the prime factors
 *
 * Return: 0
 */


int main(void)
{
	unsigned long int a = 612852475143;
	int b;

	while (a % 2 == 0)
	{
		printf("%d ", 2);
		a = a / 2;
	}

	for (b = 3; b * b <= a; b = b + 2)
	{
		while (a % b == 0)
		{
			printf("%d ", b);
			a = a / b;
		}
	}
	if (a > 2)
		printf("%lu\n", a);
	return (0);
}
