#include "main.h"

/**
 *  _islower - check the code.
 *@c: used in _islower
 * Return: Always 0.
 */

int _islower(int c)
{
	if (c >= 65 && c <= 90)
	{
	return (0);
	}
	else if (c >= 97 && c <= 122)
	{
	return (1);
	}
}

