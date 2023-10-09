#include <stdio.h>

/**
 *  * main - Prints all possible combinations of single-digit numbers
 *   *
 *    * Description: Prints numbers from 0 to 9 separated by commas and spaces.
 *     *
 *      * Return: Always 0 (Success)
 *       */
int main(void)
{
	int n;
	
	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		putchar(',')
		putchar(' ');
		putchar('\n');
	}
		return (0);
}
