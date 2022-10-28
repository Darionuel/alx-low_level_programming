#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *
 * @c: letter being checked
 *
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
