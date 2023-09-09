#include <stdio.h>

/**
 * main - Entry point, prints all single-digit numbers of base 10 followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i;

    for (i = 0; i <= 9; i++)
    {
        putchar(i + '0');
    }

    putchar('\n');

    return (0);
}
