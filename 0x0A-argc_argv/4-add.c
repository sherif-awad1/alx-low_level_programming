#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - add postive number
 * @argc: count the argments
 * @argv: pointer the varibals
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i, j, add = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j]; j++)
			{
				if (argv[i][j] < '0' || argv[i][j] > '9')
				{
					printf("Error\n");
                                	return (1);
				}
			}
			add += atoi(argv[i]);
		}
		printf("%d\n", add);
	}
	else
		printf("0\n");

	return (0);
}
