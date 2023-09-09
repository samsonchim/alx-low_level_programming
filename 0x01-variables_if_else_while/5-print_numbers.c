#include <stdio.h>

/**
 * main - Entry point, prints all single-digit numbers of base 10 on the same line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
	{
		printf("%d", digit);
	}

	putchar('\n');

	return (0);
}
