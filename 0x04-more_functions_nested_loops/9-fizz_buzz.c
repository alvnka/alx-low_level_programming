#include "main.h"

/**
 * main - print 1 -100
 * print fizz for 3 multiples
 * print buzz for 5 multiples
 * print Fizz for multiples of both 3 & 5
 * Return: void
 */

int main(void)
{
	int i = 0;

	for (i = 0; i <= 100; i++)
	{
	if (i != 0)
	{
	if (((i % 3) == 0) && ((i % 5) == 0))
	{
		printf("FizzBuzz ");
	}
	else if ((i % 5) == 0)
	{
		printf("Buzz ");
	}
	else if ((i % 3) == 0)
	{
		printf("Fizz ");
	}
	else
	{
	printf("%d ", i);
	}
	}
	}
	printf("\n");
	return (0);
}
