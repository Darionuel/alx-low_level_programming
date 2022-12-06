#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: pointer to one of the strings to be compared
 * @s2: pointer to the other string to be compared
 *
 * Return: 0 if successful otherwise return difference
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, diff;

	/* iterate through s1 and compare with s2 */
	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			diff = s1[i] - s2[i];
			/* stop iterating */
			break;
		}
		else
		{
			diff = s1[i] - s2[i];
		}
		i++;
	}
	return (diff);
}
