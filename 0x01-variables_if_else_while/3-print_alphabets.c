#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * and then in uppercase,
 * followed by a new line.
 *
 * can also be done with printf and puts function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp = 'a';
	char ALP = 'A';

	while (alp <= 'z')
	{
		putchar(alp);
		alp++;
	}
	while (ALP <= 'Z')
	{
		putchar(ALP);
		ALP++;
	}
	putchar('\n');
	return (0);
}
