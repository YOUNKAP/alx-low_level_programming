#include "main.h"

/**
 * _islower - Checks if a character is lowercase.
 *
 * Return: 1 if character is lowercase, 0 otherwise.
 */
int _islower(int char)
{
	if (char >= 'a' && char <= 'z')
		return (1);
	else
		return (0);
}
