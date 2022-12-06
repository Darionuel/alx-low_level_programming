#include "main.h"
/**
 * *_strncpy - copies a string
 * @dest: pointer to where the string is copied to(buffer)
 * @src: pointer to source string
 * @n: bytes of src
 *
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* iterate through content of src and store in dest */
	for (i = 0; (i < n && src[i] != '\0'); i++)
	{
		dest[i] = src[i];
	}
	/* to ensure each byte of dest is null terminated */
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
