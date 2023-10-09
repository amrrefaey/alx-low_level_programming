#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more header goes here*/

/* main - the entry point to the programm */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0) {
		printf("is positive\n");
	}
	else if (n == 0) {
		printf("is zero\n");
	}
	else {
		printf("nigative\n");
	}
	return (0);
}
