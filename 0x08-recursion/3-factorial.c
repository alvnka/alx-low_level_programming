#include "main.h"
/**
 * factorial - function to calculate the factorial of a number
 * @n: number that we will calculate a factorial for
 * Return: factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		if (n == 0)
		{
			return (1);
		}
		return (n * factorial(n - 1));
	}
}
