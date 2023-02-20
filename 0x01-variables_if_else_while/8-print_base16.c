#include <stdio.h>

/**
 * main -> Conevert base 10 to  of base 16 in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	int nbr;
	char digit;

	for (nbr = 0; nbr < 10; nbr++)
		putchar((nbr % 10) + '0');

	for (digit = 'a'; digit <= 'f'; digit++)
		putchar(digit);

	putchar('\n');

	return (0);
}
