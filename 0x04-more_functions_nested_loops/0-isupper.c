#include "main.h"
/**
 * _isupper - checks for uppercase character.
 * the standard library also provides a similar function
 *
 * @c: character to be checked
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
