#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a new line.
 * @s: A pointer to the string to be printed.
 *
 * Description: This function takes a pointer to a string and prints it in
 * reverse order to the standard output (stdout), followed by a new line.
 */
void print_rev(char *s)
{
	int length = 0;
	int x;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;
	for (x = length - 1; x > 0; x--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
