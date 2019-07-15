#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - add numbers, followed by a new line.
 * @argc: int type
 * @argv: char type
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
