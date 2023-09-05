#include "main.h"
#include <stdlib.h>

/**
 * *argstostr - concatenates all the argment
 * @ac: the count of argment
 * @av: the varibal pointer
 * Return: NULL or ponter
 */
char *argstostr(int ac, char **av)
{
	char *arg;
	int i, o, p = 0, count = 0;


	if (ac == 0 || av == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		o = 0;
		while (av[i][o])
		{
			count++;
			o++;
		}
		count++;
		i++;
	}

	arg = malloc(count + 1 * sizeof(char));

	if (arg == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		o = 0;
		while (av[i][o])
		{
			arg[p] = av[i][o];
			o++;
			p++;
		}
		arg[p] = '\n';
		p++;
		i++;
	}
	arg[p] = '\0';
	return (arg);
}
