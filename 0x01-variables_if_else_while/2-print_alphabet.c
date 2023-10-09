#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 **/
int main(void)
{
	char letter = 'a';

	do{
		(putchar(letter);
		letter++;
	} while (letter <= 'z');
	putchar('\n');
	return 0;
}
