/*
 * File: cp.c
 *
 * Author: Sherif Awad
 */
#include "main.h"
#include <stdarg.h>
/**
 * buf_alcater - allocat buffer
 * @filename: pointer to file
 * Return: buffer
 */
char *buf_alcater(char *filename)
{
	char *buf;

	buf = malloc(1024);
	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (buf);
}
/**
 * file_closer - close file
 * @file: file
 */
void file_closer(int file)
{
	int clos;

	clos = close(file);
	if (clos == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
		exit(100);
	}
}
/**
 * main - copy from file to another file
 * @argc: argmen count
 * @argv: argments
 * Return: alway 0 success
 */
int main(int argc, char **argv)
{
	int frm, to, red, rit;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = buf_alcater(argv[2]);
	frm = open(argv[1], O_RDONLY);
	red = read(frm, buf, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (frm == -1 || red == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}

		rit = write(to, buf, red);
		if (to == -1 || rit == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}

		red = read(frm, buf, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (red > 0);

	free(buf);
	file_closer(frm);
	file_closer(to);

	return (0);
}
