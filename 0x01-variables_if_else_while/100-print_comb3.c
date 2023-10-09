#include <stdio.h>

/**
 *  * main - Prints all possible different combinations of two digits
 *   *
 *    * Description: Prints combinations of two digits from 01 to 89 separated by commas and spaces.
 *     *
 *      * Return: Always 0 (Success)
 *       */
int main(void)
{
	int n, m;
	
	for (n = 48; n <= 56; n++)
	{
		for (m = 49; m <= 57; m++)
		{
			if (m > n)
			{
				putchar(n);
				putchar(m);
				if (n != 56 || m != 57);
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
