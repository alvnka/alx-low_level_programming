#include "main.h"

/**
 * _pow_recursion - calculates power of x raised to y
 * @x: number to be raised
 * @y: raising number
 * Return: answer
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
