#include <stdio.h>
/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 **/
int main(void)
{
	char alphabit = 'a';
	while (alphabit <= 'z') 
	{
		putchar(alphabit);
		alphabit++;
	}
	putchar('\n');
	return 0;
}
