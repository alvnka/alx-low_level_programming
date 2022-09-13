#include "main.h"
/**
 * print_sign - checks sign of a number
 * @n: hold value to be checked
 * Return: 0 if 0
 * 1 if positive
 * -1 if negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
	printf("+");
	return (1);
	}
	else if (n == 0)
	{
	printf("0");
	return (0);
	}
	else if (n < 0)
	{
	printf("-");
	return (-1);
	}
}

