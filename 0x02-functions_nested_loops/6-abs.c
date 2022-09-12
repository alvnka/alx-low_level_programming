#include <stdio.h>
/**
 * main - calls the function to compute
 * value of an integer
 * Return: 0 on success
 */
int _abs(int);
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
int main(void)
{
	int r;

	r = _abs(-1);
	printf("%d\n", r);
	r = _abs(0);
	printf("%d\n", r);
	r = _abs(1);
	printf("%d\n", r);
	r = _abs(-98);
	printf("%d\n", r);
	return (0);
}
