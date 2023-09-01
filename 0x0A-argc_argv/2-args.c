#include <stdio.h>
#include "main.h"

/**
 * main - to prints all arguments
 * @argc: count arguments
 * @argv: pointer to the varibal
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
