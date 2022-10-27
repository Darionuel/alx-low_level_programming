#include <stdio.h>

/**
 * main - prints some the alphabet in lowercase,
 * followed by a new line.
 *
 * can also be done with printf and puts function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		if (alp != 'q'  && alp != 'e')
		putchar(alp);
		alp++;
	}
	putchar('\n');
	return (0);
}
