/**
This is a program to display the
 aphabet in lowercase
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
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	putchar(ch);
	}
	putchar('\n');
	return (0);
}
