i#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 * @nbr: The integer to be computed.
 *
 * Return: The absolute value of the integer.
 */
int _abs(int nbr)
{
	if (nbr >= 0)
		return (nbr);
	else
		return (-nbr);
}
