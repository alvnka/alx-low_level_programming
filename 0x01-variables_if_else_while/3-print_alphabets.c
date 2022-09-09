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

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	putchar(ch);
	}
	for (CH = 'A'; CH <= 'Z'; CH++)
	{
	putchar(CH);
	}
	putchar('\n');
	return (0);
}
