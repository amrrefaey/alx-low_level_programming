#include "main.h"
/*
 *
 * times_table - Prints the 9 times table starting with 0.
 * followd by a new line
 */
void times_table(void)
{
	int r, c, n;

	for (r = 0; r <= 9; r++)
	{
		for (c = 0; c <= 9; c++)
		{
			n = r * c;
			if (c == 0)
			{
				_putchar('0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				if (n < 10)
				{
					_putchar(' ');
				}
			}
			if (n >= 10)
			{
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
			}
			else
			{
				_putchar(n + '0');
			}
		}
		_putchar('\n');
	}
}
