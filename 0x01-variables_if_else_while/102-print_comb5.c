#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digits numbers,
 * followed by a new line
 *
 * The numbers range from 0 to 99
 * The two numbers are separated by a space
 * All numbers are printed with two digits. e.g 1 is printed as 01
 * The combination of numbers are separated by comma, followed by a space
 * The combinations of numbers is printed in ascending order
 * 00 01 and 01 00 are regarded as the same combination of the numbers 0 and 1
 *
 * printf and puts function can also be used
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k, l;

	for (i = 48; i <= 57; i++)

	{
		for (j = 48; j <= 57; j++)
		{
			for (k = 48; k <= 57; k++)
			{
				for (l = 48; l <= 57; l++)
				{
					if (((k + l) > (i + j) && k >= i) || i < k)
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(k);
						putchar(l);

					if (i + j + k + l == 227 && i == 57)
					{
					break;
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
