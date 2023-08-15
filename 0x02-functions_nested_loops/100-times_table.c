#include "main.h"
/*print_times_table - print any tabel greater than 15 less than 0
 * n will chack
 * return will be 0
 */

void print_times_table(int n)
{
	int row, col, tot;
	
	if (n >= 0 && n <= 15)
	{
		for (row = '0'; row <= n; row++)
		{
			for (col = 0; col <= n; col++)
			{
				tot = (row * col);
				if (col == 0)
				{
					_putchar('0' + tot);
				}
				else if (tot < 10 && cal != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + tot)
				}
				else if ( tot >= 10  && tot < 100)
					{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + (tot /10));
					_putchar('0' + (tot % 10));
				}
				else if (tot >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((tot / 100) + '0');
					_putchar(((tot / 10) % 10) + '0');
					_putchar((tot % 10) + '0');
				}
			}
		_putchar('\n');
		}
	}
}
