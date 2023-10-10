#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers
 *
 * Description: Prints numbers from 0 to 9 separated by commas and spaces.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
		if (i < 9)
		{
		putchar(',');
		putchar(' ');
		}
	}
		return (0);
}
