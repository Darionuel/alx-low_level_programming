#include <stdio.h>
/**
 * main - prints the numbers from 1 to 100,
 * followed by a new line.
 * But for multiples of three, Fizz is printed
 * and for the multiples of five, Buzz is printed.
 * For numbers which are multiples of both three and five,
 * FizzBuzz is printed.
 * Each number or word should be separated by a space.
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i == 100)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
