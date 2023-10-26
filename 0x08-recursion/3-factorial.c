#include "main.h"
/*
 * factorial() -  Function returns the factorial of a given number
 *
 * Return: function n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
	return (n * factorial(n - 1));
	}
}
