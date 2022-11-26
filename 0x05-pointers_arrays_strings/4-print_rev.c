#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: pointer arg to char
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	/* to find the length, l of the string */
	int l, len;

	for (l = 0; s[l] != '\0'; l++)

	/* to print the string in reverse */
	len = l;

	for (; len >= 0 ; len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
