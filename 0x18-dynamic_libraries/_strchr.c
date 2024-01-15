#include "main.h"
#include <stdio.h>
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == c)
			return (&s[i]);
	if (s[i] == c)
		return (&s[i]);
	else
		return (0);
}
