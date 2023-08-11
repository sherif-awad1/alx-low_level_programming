#include <stdio.h>

/**
 *main - Entry point
 *Return: Always 0 (Success)
 */

int main(void)
{
	int one;
	int ten;
	int hand;

	for (hand = 0; hand < 10; hand++)
	{
		for (ten = (hand + 1); ten < 10; ten++)
			{
				for (one = (ten + 1); one < 10; one++)
				{
					putchar(hand + '0');
					putchar(ten + '0');
					putchar(one + '0');
					if (hand != 7 || ten != 8 || one != 9)
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
