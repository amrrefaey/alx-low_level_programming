#include "main.h"
/**
 * _isalpha - the checker function
 * @c: the chracter
 * Return: 1 if success 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
