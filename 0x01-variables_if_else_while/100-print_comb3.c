#include <stdio.h>

/**
 * main -> combinations of two different characters, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int character1, character2;

	for (character1 = 0; character1 < 9; character1++)
	{
		for (character2 = character1 + 1; character2 < 10; character2++)
		{
			putchar((character1 % 10) + '0');
			putchar((character2 % 10) + '0');

			if (character1 == 8 && character2 == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
