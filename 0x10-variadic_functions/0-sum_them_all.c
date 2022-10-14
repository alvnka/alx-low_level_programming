#include "variadic_functions.h"
/**
 * sum_them_all - function that sums all
 * its parameters
 * @n: number of parameters to be added
 * Return: sum or 0 if no parameters are passed
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	{
		return (0);
	}
	else
	{
		unsigned int i;
		int sum = 0;

		va_list(all);
		va_start(all, n);
		for (i = 0; i < n; i++)
		{
			sum = sum + va_arg(all, int);
		}
		va_end(all);
		return (sum);
	}
}
