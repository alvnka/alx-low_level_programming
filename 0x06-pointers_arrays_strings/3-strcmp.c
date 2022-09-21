#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: String1
 * @s2: string2
 * Return: j storing appropriate value
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{	
		if(s1[i] <= s2 [i])
		{
			j = j - 1;
		}
		if(s1[i] >= s2[i])
		{
			j = j + 1;
		}
		if(s1[i] == s2 [i])
		{
			j = j + 0;
		}
		i++;
	}
	return (j);
}
