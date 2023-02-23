#include "main.h"

/**
 * print_line -> printing lines
 *
 * Return: void
 */


void print_line(int n)
{
	int nb;

	for (nb = 0; nb < n; nb++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
