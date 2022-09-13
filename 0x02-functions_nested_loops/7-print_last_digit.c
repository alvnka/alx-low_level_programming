#include "main.h"

/**
 * print_last_digit - prints the last
 * digit of a number
 *
 * @a: holds the full number
 * last_digit - holds last number
 * Return: last digit
 */

int print_last_digit(int a)
{
	int last_digit;

	last_digit = a % 10;
	return (last_digit);
}
