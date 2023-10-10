#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Prints the alphabet without 'q' and 'e'.
 *
 * Return: Always 0 (Success)
 **/

/* int main(void)
{
	int i;
	for (i = 97; i < 123; i++)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
*/
int main(void) {
	char letter;
	
	for (letter = 'a'; letter <= 'z'; letter++) 
	{
		if (letter != 'e' && letter != 'q') 
		{
			putchar(letter);
		}
	}
	putchar('\n');
	return 0;
}
