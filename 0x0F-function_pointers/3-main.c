#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - calc opration
 * @argc: number of argments
 * @argv: array of pointer to the argmen
 * Return: 0 Always
 */

int main(int argc, char *argv[])
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

	if (get_op_func(oper) == NULL || oper[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*oper == '/' && num2 == 0) || (*oper == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(oper)(num1, num2));

	return (0);
}
