/*
 * File: append_text_to_file.c
 *
 * Author: Sherif Awad
 */
#include "main.h"
/**
 * append_text_to_file -  appends text at the end of a file.
 * @filename: pointer to file
 * @text_content: the text
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int opn, rit, leng = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
		while (text_content[leng])
			leng++;
	opn = open(filename, O_WRONLY | O_APPEND);
	rit = write(opn, text_content, leng);
	if (rit == -1 || opn == -1)
		return (-1);
	close(opn);
	return (1);
}
