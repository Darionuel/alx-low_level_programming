#include <stdio.h>
/**
 * main - finds and prints the sum of the
 * even-valued terms, followed by a new line.
 *
 * Return: 0 (success)
 */
int main(void)
{
	long int i, j, k, sum, next;

	j = 1;
	k = 2;
	sum = 0;

	for (i = 1; i <= 37; i++)
	{
		if ((j % 2 == 0) && (j < 4000000))
		{
			sum += j;
		}
		next = j + k;
		j = k;
		k = next;
	}
	printf("%ld\n", sum);
	return (0);
}
