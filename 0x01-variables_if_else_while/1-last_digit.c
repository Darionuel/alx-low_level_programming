#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print the last digit of the number stored in the variable n.
 *
 * assigns a random number to the variable n each time it is executed
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, lastN;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastN = n % 10;

	if (lastN > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastN);
	}
	else if (lastN < 6 && lastN != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastN);
	}
	else if (lastN == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastN);
	}
	return (0);
}
