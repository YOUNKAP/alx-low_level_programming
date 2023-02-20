#include <stdio.h>

/**
 * main -> combinations of single-digit nbrbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	int nbr;

	for (nbr = 0; nbr <= 9; nbr++)
	{
		putchar((nbr % 10) + '0');
		if (nbr == 9)
			continue;
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}

