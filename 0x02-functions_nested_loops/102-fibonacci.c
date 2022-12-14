#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 *
 * Return: 0 (success)
 */
int main(void)
{
	long int i, j, k, next;

	j = 1;
	k = 2;

	for (i = 1; i <= 50; i++)
	{
		if (i == 50)
		{
			printf("%ld\n", j);
		}
		else
		{
			printf("%ld, ", j);
		}
		next = j + k;
		j = k;
		k = next;
	}
	return (0);
}
