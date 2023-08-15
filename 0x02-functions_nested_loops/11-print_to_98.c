#include "main.h"
#include <stdio.h>

/* print_to_98 will print from n to 98*/

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (int i = n; i<= 98; i++)
		{
			if (i != 98)
				printf("%d, ", i);
			else if (i == 98)
				printf("%d\n", i);
		}
	}
	else if (n >= 98)
	{
		for (int j = n; j >= 98; j--)
		{
			if (j != 98)
				printf("%d, ", j);
			else if (j == 98)
				printf("%d\n", j);
		}
	}
}
