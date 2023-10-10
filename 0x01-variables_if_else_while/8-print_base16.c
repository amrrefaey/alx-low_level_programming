#include <stdio.h>

/**
 * main - Prints numbers between 0 to 9 and letters between a to f.
 *
 * Return: Always 0 (Success)
 **/

int main(void)
{
	int c;
	char i;

	for (c = 0; c <= 9; c++)
	{
		char h = '0' + c;

		putchar(h);
	}
	for (i = 'a'; i <= 'f'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
