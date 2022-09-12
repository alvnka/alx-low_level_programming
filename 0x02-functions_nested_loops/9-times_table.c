#include <stdio.h>

/**
 * times_table - prints the 9 times table
 * 
 * Return: 9 multiples
 */
void times_table(void)
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
		{
		for (b = 0; b <= 9; b++)
			{
			c = a * b;
			if (c == 0 && a == 0)
			{
			printf("%d,", c);
			}
			if (c < 10 && a != 0)
			{
			printf("  %d,", c);
			}
			if (c > 10 && a != 0)
			{
			printf(" %d,", c);
			}
			}
		putchar('\n');
		}
}
/**
 * main - call times_table
 *
 * Return: 0
 */

int main(void)
{
	times_table();
	return(0);
}
