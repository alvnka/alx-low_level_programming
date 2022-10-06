#include "main.h"
/**
 * string_nconcat - concatenates two strings
 * @s1:string 1
 * @s2:string 2
 * @n:number of characters in s2 to be used
 * Return: pointer to joint string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat_ptr;
	unsigned int Los1, Los2, Slength, i;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if  (s2 == NULL)
	{
		s2 = "";
	}
	for (Los1 = 0; *(s1 + Los1) != '\0'; Los1++)
	{
		;
	}
	for (Los2 = 0; *(s2 + Los2) != '\0'; Los2++)
	{
		;
	}
	if (n >= Los2)
	{
		n = Los2;
	}
	Slength = Los1 + n;
	concat_ptr = malloc(sizeof(char) * (Slength + 1));
	if (concat_ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < Slength; i++)
	{
		if (i < Los1)
		{
			concat_ptr[i] = *(s1 + i);
		}
		else
		{
			concat_ptr[i] = *(s2 + (i - Los1));
		}
	}
	concat_ptr[i] = '\0';

	return (concat_ptr);
}
