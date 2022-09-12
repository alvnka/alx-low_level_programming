#include<stdio.h>

/**
 *  main - check the code.
 *
 * Return: Always 0.
 */
int _islower(int c)
	{
	if (c >= 65 && c <= 90)
	{
	return (0);
	}
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	}
/**
 * _islower - checks if character is 
 * small or big
 *
 *Return: 0 if capital 1 if small
 */
int main(void)
{
int r;

r = _islower('H');
putchar(r + '0');
r = _islower('o');
putchar(r + '0');
r = _islower(108);
putchar(r + '0');
putchar('\n');
return (0);
}
