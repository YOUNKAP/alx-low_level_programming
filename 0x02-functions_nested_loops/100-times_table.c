#include "main.h"

/**
 * print_times_table - Prints the times table of the input,
 *                     starting with 0.
 * @n: The value of the times table to be printed.
 */
void print_times_table(int n)
{
	int nbr, mlt, prod;

	if (n >= 0 && n <= 15)
	{
		for (nbr = 0; nbr <= n; nbr++)
		{
			_putchar('0');

			for (mlt = 1; mlt <= n; mlt++)
			{
				_putchar(',');
				_putchar(' ');

				prod = nbr * mlt;

				if (prod <= 99)
					_putchar(' ');
				if (prod <= 9)
					_putchar(' ');

				if (prod >= 100)
				{
					_putchar((prod / 100) + '0');
					_putchar(((prod / 10)) % 10 + '0');
				}
				else if (prod <= 99 && prod >= 10)
				{
					_putchar((prod / 10) + '0');
				}
				_putchar((prod % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
