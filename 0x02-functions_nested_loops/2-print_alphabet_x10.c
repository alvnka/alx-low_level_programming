#include <stdio.h>
/**
 * print_alphabet_x10() - print alphabet 10x
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
		putchar(j);
		}
	putchar('\n');
	}
}
/**
 * main - calls print_alphabet_x10
 * print_alphabet_x10() - print the alphabet x10
 * Returns: 0
 */
int main(void)
{
	print_alphabet_x10();
	return (0);
}
