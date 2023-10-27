/*
 * File: args to print the argmint
 *
 * Author: Sherif Awad
 */
#include "main.h"
#include <stdio.h>
/**
 * main - to print all the argment assigned
 * @argc: number of argment
 * @argv: argments array
 * Return: 0 always success
 */
int main(int argc, char **argv)
{
	int count = 0;

	if (argc > 0)
	{
		for (count = 0; count < argc; count++)
		{
			printf("%s\n", argv[count]);
		}
	}
	return (0);
}
