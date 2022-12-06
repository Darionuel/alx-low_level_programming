#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: pointer arg to string to be concatenate with @src
 * @src: to be concatenated as previously described
 * @n: number bytes to use at most from src
 *
 * similar to the _strcat function
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int l, i;

	/* iterate through dest to get lenght l */
	for (l = 0; dest[l] != '\0'; l++)
	;

	/**
	 * src does not need to be null-terminated if
	 * it contains n or more bytes.
	 */
	for (i = 0; (i < n && src[i] != '\0'); i++)
	{
		dest[l + i] = src[i];
	}
	/* null terminate dest */
	dest[l + i] = '\0';

	return (dest);
}
