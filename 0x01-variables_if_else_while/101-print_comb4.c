#include <stdio.h>

/**
 * main - prints all possible combinations of three digits number,
 * followed by a new line
 * The three digits printed are always different
 * Numbers are printed in ascending order, with three digits
 * Prints only the smallest combination of three digits
 * e.g 012, 120, 102, 021, 201, 210 are considered the same combination
 * of the three digits 0, 1 and 2
 *
 * printf and puts function can also be used
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				if (i < j && j < k)
				{
					putchar(i);
					putchar(j);
					putchar(k);

					if (i != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
