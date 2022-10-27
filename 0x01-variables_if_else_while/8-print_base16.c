#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase,
 * followed by a new line
 *
 * can also be done with printf and puts function
 *
 * Return: Always 0 (Succiss)
 */
int main(void)
{
	char alp = 'a';
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	while (alp <= 'f')
	{
		putchar(alp);
		alp++;
	}
	putchar('\n');
	return (0);
}
