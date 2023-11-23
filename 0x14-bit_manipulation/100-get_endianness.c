/*
 * File: get_endianness
 *
 * Author: Sherif Awad
 */
#include "main.h"
/**
 * get_endianness - function that checks the endianness
 * Return: big or little endian
 */
int get_endianness(void)
{
	int num  = 0x00000001;
	char *end = (char *)&num;

	return (end[0]);
}
