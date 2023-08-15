#include "main.h"
#include <stdlib.h>
#include <stdio.h>

void positive_or_negative(int i)
{

	if (i > 0)
	{
		printf("%i is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%i is zero\n", i);
	}
	else if (i < 0)
	{
		printf("%i is negative\n", i);
	}

	return (0);

