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
			int k = (i * j);

			_putchar(k + '0');
			_putchar(',');
			_putchar(' ');
			j++;
		}
	i++;
	}
}
