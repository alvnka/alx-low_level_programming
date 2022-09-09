#include <stdio.h>
/* this is a program to display the alphabet in small letters
*main - standard IO used
*void arguments
*/
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	putchar(ch);
	putchar(\n);
	}
	return (0);
}
