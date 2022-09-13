#include "main.h"
/**
 * _isalpha - checks if character is a letter,
 * lowercase or uppercase
 *@c: control the if structure
 * Return: 1 and 0
 *
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
