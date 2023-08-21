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
		a = a + p[i];
		printf("%d", p[i]);
		if ((2772 -a) < 78)
		{
			n =2772 - a;
			a = a + n;
			printf("%d", n);
			break;
		}
	}
	return (0);
}

