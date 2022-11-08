#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int i = 0;

	while (i < 10)
	{
		int j = 0;

		while (i < 10)
		{
			int k = (j * i);

			if (j == 0)
			{
				_putchar('0');
				continue;
			}
			_putchar(',');
			_putchar(' ');
			if (k >= 10)
			{
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(k + '0');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
