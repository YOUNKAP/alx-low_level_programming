#include <stdio.h>

/**
 * main -> combinations of two different nbrs, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int nbr1, nbr2;

	for (nbr1 = 0; nbr1 < 9; nbr1++)
	{
		for (nbr2 = nbr1 + 1; nbr2 < 10; nbr2++)
		{
			putchar((nbr1 % 10) + '0');
			putchar((nbr2 % 10) + '0');

			if (nbr1 == 8 && nbr2 == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
