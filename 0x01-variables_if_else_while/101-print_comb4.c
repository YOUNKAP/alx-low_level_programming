#include <stdio.h>

/**
 * main - Prints all possible combinations of three different nbrs,
 *        in ascending order, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int nbr1, nbr2, nbr3;

	for (nbr1 = 0; nbr1 < 8; nbr1++)
	{
		for (nbr2 = nbr1 + 1; nbr2 < 9; nbr2++)
		{
			for (nbr3 = nbr2 + 1; nbr3 < 10; nbr3++)
			{
				putchar((nbr1 % 10) + '0');
				putchar((nbr2 % 10) + '0');
				putchar((nbr3 % 10) + '0');

				if (nbr1 == 7 && nbr2 == 8 && nbr3 == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}

