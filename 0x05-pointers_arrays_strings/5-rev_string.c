#include "main.h"
/**
 * rev_string - reverses a string.
 * @s: pointer arg to string
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int l, len, bgn, temp;

	/* lenght of the string, l */
	l = 0;
	while (s[l] != '\0')
	{
		l++;
	}

	/*
	 * swap the positions of the strings:
	 * 1st to last and vice versa and so on
	 */
	len = l - 1;
	bgn = 0;

	while (bgn < len)
	{
		temp = s[bgn];
		s[bgn] = s[len];
		s[len] = temp;
		bgn++;
		len--;
	}

}
