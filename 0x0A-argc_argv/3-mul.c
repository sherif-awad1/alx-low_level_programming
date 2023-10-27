/*
 * File: mul to multplay 2 integer
 *
 * Author: Sherif Awad
 */
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - to multiply two number
 * @argc: number of argment
 * @argv: the argmen array
 * Return: 0 if success
 */

int main(int argc, char **argv)
{
	int i, mul = 1;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			mul *=atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error");
		return (1);
	}
	return (0);
}
