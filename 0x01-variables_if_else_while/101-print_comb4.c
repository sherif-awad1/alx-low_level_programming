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

	for (hand = '0'; hand <= '9'; hand++)
	{
		for (ten = (hand + 1); ten <= '9'; ten++)
		{
			for (one = (ten + 1); one <= '9'; one++)
			{
				putchar(hand);
				putchar(ten);
				putchar(one);
				if (hand != '7' || ten != '8' || one != '9')
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
