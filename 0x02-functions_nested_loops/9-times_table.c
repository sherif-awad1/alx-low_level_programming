#include "main.h"

/*times_table - to print the *9 table
 *
 * Return Always 0
 */

void times_table(void)
{
	int lin, line, line1;

	for (lin = 0; lin < 10; lin++)
	{
		for (line = 0; line < 10; line++)
		{
			line1 = (lin * line);

			if (line == 0)
			{
				_putchar('0' + line1);
			}
			else if (line1 < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + line1);
			}
			else if (line1 > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (line1 / 10));
				_putchar('0' + (line1 % 10));
			}
		}
		_putchar('\n');
	}
}
