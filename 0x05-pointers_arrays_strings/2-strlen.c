#include "main.h"
/**
 * _strlen - returns the length of a string.
 * @s: pointer arg to char
 *
 * Return: nothing
 */
int _strlen(char *s)
{
	unsigned int i;

	for (i = 0; *s != '\0'; i++)
	{
		s++;
	}
	return (i);
}
