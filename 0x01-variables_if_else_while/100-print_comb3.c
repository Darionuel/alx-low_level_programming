#include <stdio.h>

/**
 * main - prints all possible combinations of two digits,
 * followed by a new line
 *
 * The two digits are different
 * e.g 01 and 10 are considered the same combination of the two digits 0 and 1
 * Print only the smallest combination of two digits
 * Numbers are printed in ascending order, with two digits
 *
 * printf and puts function can also be used
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			if (i < j)
			{
				putchar(i);
				putchar(j);

				if (i != '8' || (i == '8' && j != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
