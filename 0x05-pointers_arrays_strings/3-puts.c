#include "main.h"

/**
 * _puts - Prints a string followed by a new line to stdout.
 * @str: A pointer to the string to be printed.
 *
 * Description: This function takes a pointer to a string and prints it to
 * the standard output (stdout), followed by a new line.
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
