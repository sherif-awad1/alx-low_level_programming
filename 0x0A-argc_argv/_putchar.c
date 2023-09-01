#include <unistd.h>

/**
 * _putchar - print funuctuon
 * @c: the print 
 * Return: the function
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
