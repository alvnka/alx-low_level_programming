#include <stdio.h>
/**
 * _abs - calls the function to compute
 * @n: value of an integer
 * Return: n
 */

int _abs(int n)
{
	if (n < 0)
	{
	n = (-1) * n;
	return (n);
	}
	else if (n > 0)
	{
	return (n);
	}
	else if (n == 0)
	{
	return (n);
	}
	return (404);
}
