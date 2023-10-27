/*
 * File: whats my name to print the file name
 *
 * Author: Sherif Awad
 */
#include "main.h"
#include <stdio.h>
/**
 * main - to print the file name
 * @argc: argment count
 * @argv: argmnet array
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
