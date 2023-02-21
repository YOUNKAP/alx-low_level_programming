#include "main.h"

/**
 * _isalpha - Checks if a character is alphabetic.
 * @chart: The character to be checked.
 *
 * Return: 1 if character is letter, lowercase or uppercase, 0 otherwise.
 */
int _isalpha(int chart)
{
	if ((chart >= 'a' && chart <= 'z') ||
	    (chart >= 'A' && chart <= 'Z'))
		return (1);
	else
		return (0);
}
