#include <stdio.h>

/**
 *main - print a num pair from 00-99 but no repeats (00 01, 00 02, 00 03,...)
 *Return: Always 0 (Success)
 */

int main(void)
{
	int one;
	int ten;
	int onee;
	int tenn;

	for (one = '0'; one <= '9'; one++)
	{
		for (ten = '0'; ten <= '9'; ten++)
		{
			for (onee = one; onee <= '9'; onee++)
			{
				for (tenn = ten + 1; tenn <= '9'; tenn++)
				{
					putchar(one);
					putchar(ten);
					putchar(' ');
					putchar(onee);
					putchar(tenn);

					if (!((one == '9' && ten == '8') && (onee == '9' && tenn == '9')))
					{
						putchar(',');
						putchar(' ');
					}
				}
				tenn = '0';
			}
		}
	}
	putchar('\n');

	return (0);
}
