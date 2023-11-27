/*
 * File: create_file.c
 *
 * Author: Sherif Awad
 */
#include "main.h"
/**
 * create_file - creates a file
 * @filename: pointer to file
 * @text_content: the string we use
 * Return: 1 in success -1 on fail
 */
int create_file(const char *filename, char *text_content)
{
	int opn, rit, leng = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[leng])
			leng++;
	}
	opn = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	rit = write(opn, text_content, leng);

	if (opn == -1 || rit == -1)
		return (-1);
	close(opn);
	return (1);
}
