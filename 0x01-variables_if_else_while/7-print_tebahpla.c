#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse, followed by a new line
 *
 * can also be done with printf and puts function
 *
 * Return: Always 0 (Succiss)
 */
int main(void)
{
	char alp = 'z';

	while (alp >= 'a')
	{
		putchar(alp);
		alp--;
	}
	putchar('\n');
	return (0);
}
