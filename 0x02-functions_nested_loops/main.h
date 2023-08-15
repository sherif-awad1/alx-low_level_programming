#ifndef _main_h_
#define _main_h_

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 */

int _putchar(char c);

/* print the alphabet - print lowercase alphabet */

void print_alphabet(void);

/*prints 10 times the alphabet, in lowercase*/

void print_alphabet_x10(void);
/* islower -  checks for lowercase character
 * @c - to chaeck
 * Return: 1 if lowercase, 0 if uppercase
 */

int _islower(int c);



#endif
