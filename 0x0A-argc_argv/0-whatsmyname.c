#include "main.h"
#include <stdio.h>
/**
 * main - to print the program name
 * @argc: the count
 * @argv: ponter to values
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
