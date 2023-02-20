#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Assign a random number to the variable n each time it is executed
 * State if n%10 is greater than 5, is 0, is less than 6 and not 0.and is 0
 *
 * Return: Always 0.
*/
int main(void)
{	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* Start my code here*/
	x = n % 10;
	printf("Last digit of %d is %d ", n, x);
	if (x > 5)
	{
		printf("and is greater than 5");
	}
	if (x == 0)
	{
		printf("and is 0");
	}
	if (x < 6 && x != 0)
	{
		printf("and is less than 6 and not 0");
	}

	printf("\n");
	/*End my code here*/
	return (0);
}
