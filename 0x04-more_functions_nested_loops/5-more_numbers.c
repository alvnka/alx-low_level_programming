#include "main.h"

/**
 * more_numbers - prints number 1-14
 * 10 times
 *
 * Return: void;
 */

void more_numbers(void)
{
	int i = 0, j = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			printf("%d", j);
		}
		printf("\n");
	}
}
