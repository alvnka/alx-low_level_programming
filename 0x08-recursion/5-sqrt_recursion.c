#include "main.h"

/**
 * _check - returns natural square root
 * @n: input number from sqrt_recursion function
 * @c: iterator
 * Return:square root or -1 if checks fail
 */

int _check(int n, int c)
{
	if (c % (n / c) == 0)
	{
		if (c * (n / c) == n)
		{
			return (c);
		}
		else
		{
			return (-1);
		}
	}
	return (0 + _check(n, c + 1));
}

/**
 * _sqrt_recursion - function to find
 * natural square root of a number
 * @n: number to use to compute it's square root
 * Return: -1 if n is not natural and square root otherqise
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (_check(n, 1));
	}
}
