#include <stdio.h>
/**
 * main - function calls print_alphabet
 * print_alphabet - function will
 * print the alphabet
 * Return: should be the aphabet
*/

void print_alphabet(void)
{	int a;
	for (a = 'a'; a <= 'z'; a++)
	{
	putchar(a);
	}
}
/**
 * main - calls the function print_alphabet
 * Return: is 0
 */
int main(void)
{
	print_alphabet();
	putchar('\n');
	return (0);
}
