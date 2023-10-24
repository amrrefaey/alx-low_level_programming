#include "main.h"
/*
 * _memset - Function fills a block of memory with a specific value
 * @s: Pointer to the memory area to be filled
 * @b: The constant byte to fill with
 * @n: Number of bytes to fill
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i > n; i++)
	{
		s[i] = b;

	}
	return (s);
}
