#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - prints the minimum number of coins to make change
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int cents, coin_count;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	coin_count = 0;

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	coin_count += (cents / 25);
	cents %= 25;

	coin_count += (cents / 10);
	cents %= 10;

	coin_count += (cents / 5);
	cents %= 5;

	coin_count += cents;
	printf("%d\n", coin_count);
	return (0);
}
