#include "main.h"
/**
 * *_strcat - concatenates two strings.
 * @dest: pointer arg to string to be concatenate with @src
 * @src: to be concatenated as previously described
 *
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, l;

	/* to get length of string dest stored in l */
	for (l = 0; dest[l] != '\0'; l++)
		;

	/* to concatenate to the end of dest of length l */
	i = -1;

	do {
		i++;
		dest[l] = src[i];
		l++;
	} while (src[i] != '\0');

	return (dest);
}
