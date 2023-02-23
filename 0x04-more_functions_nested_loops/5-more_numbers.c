#include "main.h"

/**
 * more_numbers - number function
 * Return: no return
 */

void more_numbers(void)
{

int i, nb2;
	for (nb1 = 1; nb1 <= 10; nb1++)
	{
		for (nb2 = 0; nb2 <= 14; nb2++)
		{
			if (nb2 >= 10)
			_putchar('1');
			_putchar(nb2 % 10 + '0');
		}
			_putchar('\n');
		}
}
