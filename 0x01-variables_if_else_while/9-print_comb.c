/**
*This is a program to display single digit base ten numbers
*aphabet in lowercase
*/
#include <stdio.h>
/**
*this is a program to display the alphabet in small letters
*Main - standard IO used
*void arguments
*Return:0 on success
*/
int main(void)
{
	int n='0';

	
	do
	{
	putchar(n);
	if (!(n == '9'))
	{
	putchar(',');
	putchar(' ');
	}
	n++;
	} while (n <= '9');

	putchar('\n');
	return (0);
}
