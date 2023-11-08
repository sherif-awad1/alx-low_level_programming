/*
 * File: main
 *
 * Author: Sherif Awad
 */
#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - calc opration
 * @argc: number of argment
 * @argv: array op pointer
 * Return: 0 always
 */
int main(int argc, char **argv)
{
	int num1, num2;
	char *oper;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	oper = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_fun(oper) == NULL || oper[1] != '\0')
	{
		printf("Error\n");
		exit(98);
	}
	if ((*oper == '/' && num2 == 0) || (*oper == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_fun(oper)(num1, num2));
	return (0);
}
