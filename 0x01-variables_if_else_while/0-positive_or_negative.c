#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point, generates a random number and prints if it's positive,
 * zero, or negative.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("%d is ", n);

	if (n > 0)
	{
		printf("positive");
	}
	else if (n == 0)
	{
		printf("zero");
	}
	else
	{
		printf("negative");
	}

	printf("\n");

	return (0);
}
