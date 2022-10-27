#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line
 *
 * can also be done with printf and puts function
 *
 * Return: Always 0 (Succiss)
 */
int main(void)
{
	char alp = 'a';
	while (alp <= 'z')
	{
		putchar(alp);
		alp++;
	}
	putchar('\n');
	return (0);
}
