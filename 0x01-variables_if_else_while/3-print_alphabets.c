#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 **/

/**int main(void)
{
	char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"
		int i;
	
	for (i = 0; i < 52; i++){
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}*/
int main(void){
	char lowercase = 'a';
	char uppercase = 'A';
	while (lowercase <= 'z') {
		putchar(lowercase);
		lowercase++;
	}
	while (uppercase <= 'Z') {
		putchar(uppercase);
		uppercase++;
	}
	putchar('\n');
	return (0);
}
