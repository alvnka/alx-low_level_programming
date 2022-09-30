#include <stdio.h>
/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int i = 0;

	(void) argv;
	while (i < argc)
	{
		i++;
	}
	printf("%d", i);
	return (0);
}
