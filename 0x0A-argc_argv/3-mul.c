#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - will multipliest two number
 * @argc: count the argment
 * @argv: pinter to the varibal
 * Return: Always 0 or 1 if simbel or not digit
 */

int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
