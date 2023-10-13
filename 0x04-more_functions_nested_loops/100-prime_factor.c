#include <stdio.h>
#include <math.h>

/**
 * main - The entry point of the programm
 *
 * Return: 0 Always
 */
int main(void)
{
	long n = 612852475143;
	long maxPrime = -1;
	long i;

	while (n % 2 == 0)
	{
		maxPrime = 2;
		n = n / 2;
	}

	i = 3;

	while (i <= sqrt(n))
	{
		if (n % i == 0)
		{
			maxPrime = i;
			n = n / i;
		}
		else
		{
			i = i + 2;
		}
	}

	if (n > 2)
	{
		maxPrime = n;
	}

	printf("%ld\n", maxPrime);

	return (0);
}
