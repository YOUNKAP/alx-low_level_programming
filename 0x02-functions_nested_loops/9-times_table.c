#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int nb, mlt, prd;

	for (nb = 0; nb <= 9; nb++)
	{
		_putchar('0');

		for (mlt = 1; mlt <= 9; mlt++)
		{
			_putchar(',');
			_putchar(' ');

			prd = nb * mlt;

			if (prd <= 9)
				_putchar(' ');
			else
				_putchar((prd / 10) + '0');

			_putchar((prd % 10) + '0');
		}
		_putchar('\n');
	}
}
