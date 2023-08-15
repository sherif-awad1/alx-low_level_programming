#ifndef main_h
#define main_h

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


/**
 * print_alphabet_x10 - print lowercase alphabet ten times
 */

void print_alphabet_x10(void);

/* islower -  checks for lowercase character
 * @c - to chaeck
 * Return: 1 if lowercase, 0 if uppercase
 */

int _islower(int c);

/*isalpha - to chaeck the alphapt chracter
 *@c to check
 *Return 1 if lowercase or upercase - 0 if not alphapet
 */

 int _isalpha(int c);

 /**
  *print_sign print the sign of number
  *@n to check 
  *Return 1 if posstive 0 if zero and -1 if negtive
  */
int print_sign(int n);
/**
 * _abs - computes the absolute value
 */
int _abs(int);


#endif
