#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -  Prints the alphabet in lowercase, followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	char character;

	for (character = 'a'; character <= 'z'; character++)
		putchar(character);

	putchar('\n');

	return (0);
}
