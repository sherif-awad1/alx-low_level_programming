#include <stdio.h>

/**
 *main - Entry point
 *Return: Always 0 (Success)
 */

int main(void)
{
	int one;
	int ten;

	for (one = 0; one <= 99; one++)
	{
		for (ten = 0; ten <= 99; ten++)
		{
			if (one < ten && one != ten)
			{
				putchar((one / 10) + '0');
				putchar((one % 10) + '0');
				putchar(' ');
				putchar((ten / 10) + '0');
				putchar((ten % 10) + '0');
				if (one != 98 && ten != 99)
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
