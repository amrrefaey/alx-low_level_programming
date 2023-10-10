#include <stdio.h>
/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 **/
int main(void)
{
	char alphabit = 'a';
	char last = 'z';
	while (alphabit <= last) 
	{
		putchar(alphabit);
		alphabit + 1;
	}
	putchar('\n');
	return 0;
}
