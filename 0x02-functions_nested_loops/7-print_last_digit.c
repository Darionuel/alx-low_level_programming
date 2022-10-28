#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: number from which last digit will be gotten
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	int i = n % 10;
	_putchar (i + '0');

	return (i);
}
