#include <stdio.h>
/**
 * add - function to add two numbers
 *@int a - takes 1st variable
 *@int b - takes 2nd variable
 *@int c - stores sum
 */
int add(int a, int b)
{
	int s;

	s = a + b;
	return (s);
}

/**
 * main - call add()
 *
 * Return: 0
 */

int main(void)
{
	int n;

	n = add(89, 9);
	printf("%d\n", n);
	return (0);
}
