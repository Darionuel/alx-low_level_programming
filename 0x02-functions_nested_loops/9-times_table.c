#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int i = 0;

	while (i <= 9)
	{
		int j = 0;

		while (i <= 9)
		{
			int k = (j * i);

			if (j == 0)
			{
				_putchar(k + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if (k < 10)
			{
				_putchar(k + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}
	i++;
	}
}
