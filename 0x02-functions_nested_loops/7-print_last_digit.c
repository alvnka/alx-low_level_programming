#include <stdio.h>
/**
 * main - calls print_last_digit()
 *
 * Return: 0
 */

int print_last_digit(int);

int main(void)
{
	int r;

	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-1024);
	putchar('0' + r);
	putchar('\n');
	return (0);
}

/**
 * print_last_digit() prints the last
 * digit of a number
 *
 * @int a
 * Return: last digit
 */

int print_last_digit(int a)
{	
	int last_digit;
	last_digit = a % 10;
	return (last_digit);
}
