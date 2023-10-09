#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the programm
 *
 * Description: This program generates a random integer
 *
 * return: Always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("is positive\n");
	else if (n == 0)
		printf("is zero\n");
	else
		printf("nigative\n");

	return (0);
}
