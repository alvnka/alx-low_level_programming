/**
*This is a program to display the
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
	int ch,CH;

	for (ch = '0'; ch <= '9'; ch++)
	{
	putchar(ch);
	}
	for (CH = 'a'; CH <= 'f'; CH++)
	{
	putchar(CH);
	}
	putchar('\n');
	return (0);
}
