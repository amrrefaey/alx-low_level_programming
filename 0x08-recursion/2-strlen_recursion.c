#include "main.h"

/*
 * _strlen_recursion(char *s) - A function that returns the length of a string
 *
 * Return: 0 Sucess
 **/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return ((1) + _strlen_recursion(s + 1));
	}
}
