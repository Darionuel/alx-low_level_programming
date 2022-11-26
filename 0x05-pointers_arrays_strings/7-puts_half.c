#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line.
 * prints the second half of the string.
 * @str: pointer arg to string
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int i, n;

	/* to get lenght, i */
	for (i = 0; str[i] != '\0'; i++)
	{
	}

	/* for even lenght */
	if (i % 2 == 0)
	{
		for (n = i / 2; str[n] != '\0'; n++)
		{
			_putchar(str[n]);
		}
	}
	/* for odd lenght */
	else
	{
		for (n = ((i - 1) / 2) + 1; str[n] != '\0'; n++)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
