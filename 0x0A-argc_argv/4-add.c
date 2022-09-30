#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if successful, if an error
 */

int main(int argc, char *argv[])
{
	int y, i = 0, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (y = 0; argv[i][y] != '\0'; y++)
		{
			if (!isdigit(argv[i][y]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
