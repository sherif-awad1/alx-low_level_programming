#include "main.h"

/**
 * main - Entry point to generates random vaild password
i * 
 * Return: Always 0
 */

int main(void)
{
	int p[100];
	int  i, n, a = 0;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		p[i] = rand() % 78;
		a +=  (p[i] + '0');
		putchar(p[i] + '0');
		if ((2772 - a) - '0' < 78)
		{
			n = 2772 - a - '0';
			a += n;
			putchar(n + '0');
			break;
		}
	}
	return (0);
}

