#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59
 *
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int hrs = 0;

	while (hrs < 24)
	{
		int min = 0;

		while (min < 60)
		{
			_putchar((hrs / 10) + '0');
			_putchar((hrs % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar(('\n');
			min++;
		}
	hrs++;
	}
}
