#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0,
 *        only using putchar and without char variables.
 *
 * Return: Always 0.
 */
int main(void)
{
	int nbr;

	for (nbr = 0; nbr < 10; nbr++)
		putchar((nbr % 10) + '0');

	putchar('\n');

	return (0);
}
