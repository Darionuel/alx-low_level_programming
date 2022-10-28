#include "main.h"

/**
 * 2-print_alphabet_x10 - prints 10 times the alphabet,
 * in lowercase, followed by a new line
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char alp = 'a';

		while (alp <= 'z')
		{
			_putchar(alp);
			alp++;
		}
		_putchar('\n');
		i++;
	}
}
