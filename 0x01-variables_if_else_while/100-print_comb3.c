#include <stdio.h>

/**
 *main - Entry point
 *Return: Always 0 (Success)
 */

int mian(void)
{
	int one;
	int ten;

	for (one = 0; one < 10; one++)
	{
		for (ten = (one + 1); ten < 10; ten++)
		{
			putchar(one + '0');
			putchar(ten + '0');
			if (one != 8 || ten != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return 0;
}
