#include "main.h"
/**
 * print_alphabet - function will
 * print the alphabet
 * Return: should be the aphabet
*/

void print_alphabet(void)
{	int a;
	for (a = 'a'; a <= 'z'; a++)
	{
	_putchar(a);
	}
}
/**
 * main - calls the function print_alphabet
 * Return: is 0
 */
int main(void)
{
	print_alphabet();
	_putchar('\n');
	return (0);
}
