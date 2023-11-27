/*
 * File: read_textfile
 *
 * Author: Sherif Awad
 */
#include "main.h"
/**
 * read_textfile - reads text file and prints it to the POSIX standard output.
 * @filename: pointer to file
 * @letters: number of letters
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t opn, red, rit;
	char *num;

	if (filename == NULL)
		return (0);
	num = malloc(letters);
	if (num == NULL)
		return (0);
	opn = open(filename, O_RDONLY);
	red = read(opn, num, letters);
	rit = write(STDOUT_FILENO, num, red);
	if (opn == -1 || red == -1 || rit == -1 || rit != red)
	{
		free(num);
		return (0);
	}
	free(num);
	close(opn);
	return (rit);
}

