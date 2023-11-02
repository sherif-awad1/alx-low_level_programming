/*
 * File: array range create array of integer
 *
 * Author: Sherif Awad
 */
#include "main.h"
/**
 * array_range - create array of integer
 * @min: the first integer
 * @max: the last integer
 * Return: null or pointer
 */

int *array_range(int min, int max)
{
	int i, *num;

	if (min > max)
		return (NULL);

	num = malloc(sizeof(int) * (max - min + 1));

	if (num == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
		num[i - min] = i;
	return (num);
}
