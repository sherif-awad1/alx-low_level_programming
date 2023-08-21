#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point to generates random vaild password
i * 
 * Return: Always 0
 */

int main(void)
{
	char p[100];
	int  i;
	char alpha[] = "qwertyuioplkjhgfdsazxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM";

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		p[i] = alpha[rand() % strlen(alpha)];
		printf("%c", p[i]);
	}
	return (0);
}

