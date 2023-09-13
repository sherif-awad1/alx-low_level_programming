#include <stdlib.h>
#include <stdio.h>

/**
 * main - to print the opcode
 * @argc: number of argment
 * @argv: pointer to array of argment
 * Return: 0 Always
 */

int main(int argc, char *argv[])
{
	int byt, i;
	char opcode;
	

	int (*ptr)(int, char **) = main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	byt = atoi(argv[1]);

	if (byt < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < byt; i++)
	{
		opcode = *(char *)ptr;
		printf("%.2x", opcode);

		if (i == byt)
			continue;

		printf("\t");

		ptr++;
	}
	printf("\n");

	return (0);
}
