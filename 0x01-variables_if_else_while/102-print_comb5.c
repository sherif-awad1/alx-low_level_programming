#include <stdio.h>

/**
 *main - print a num pair from 00-99 but no repeats (00 01, 00 02, 00 03,...)
 *Return: Always 0 (Success)
 */

int main(void)
{

	int one, ten;

	for (one = 0; one < 100; one++)
	{
		for (ten = 0; ten < 100; ten++)
		{
			if (one < ten)
			{
				putchar((one / 10) + 48);
				putchar((one % 10) + 48);
				putchar(' ');
				putchar((ten / 10) + 48);
				putchar((ten % 10) + 48);
				if (one != 98 || ten != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}

		}
	}
	putchar('\n');
	return (0);
}
