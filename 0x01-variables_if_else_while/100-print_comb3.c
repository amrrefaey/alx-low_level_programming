#include <stdio.h>

/**
 * main - Prints all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, x;

	for (i = 0; i <= 9; i++)
	{
		for (x = i + 1; x <= 9; x++)
		{
			if (i != x)
			{
				putchar(i + '0');
				putchar(x + '0');
				if (i != 8 || x != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
