#include "main.h"
/**
 * leet - function to encode in 1337
 * @a: characters to be encoded
 * Return: encoded string pointer
 */
char *leet(char *a)
{
	char b[11],encode[6];
	int i = 0;

	b[] = {"a","A","e","E","o","O","t","T","l","L"};
	encode[] = {"4","3","0","7","1"}
	for (i = 0;a[i] != '\0';i++)
	{
		if ((a[i] == b[i]) || (a[i] == b[i + 1]))
		{
			a[i] = encode[i]
		}
	}
}
