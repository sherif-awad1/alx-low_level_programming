/*
 * File: args to print the count 
 *
 * Author: Sherif Awad
 */
#include "main.h"
#include <stdio.h>
/**
 * main - to print the count of argment
 * @argc: argment count
 * @argv: argment array
 * Return: 0 always if success
 */

int main(int argc, char **argv)
{
	(void)**argv;

	printf("%d\n", argc - 1);
	return (0);
}
