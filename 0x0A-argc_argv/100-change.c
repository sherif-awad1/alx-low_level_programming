#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - make change
 * @argc: count of argment
 * @argv: pointer to varibal
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int coin[] = {25, 10, 5, 2, 1};

	int i, count = 0, coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	coins = atoi(argv[1]);

	if (coins < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && coins >= 0; i++)
	{
		while (coins >= coin[i])
		{
			count++;
			coins -= coin[i];
		}
	}

	printf("%d\n", count);
	return (0);
}
