#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the mun of coins
 * @argc: int type
 * @argv: char type
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int coins = 0;
	int cents;

	if (argc ==  1)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc > 1)
	{
		cents = atoi(argv[1]);
		if (cents >= 25)
		{
			coins += cents / 25;
			cents %= 25;
		}
		if (cents >= 10)
		{
			coins += cents / 10;
			cents %= 10;
		}
		if (cents >= 5)
		{
			coins += cents / 5;
			cents %= 5;
		}
		if (cents >= 2)
		{
			coins += cents / 2;
			cents %= 2;
		}
		if (cents >= 1)
		{
			coins += cents / 1;
		}
		printf("%d\n", coins);
	}
	return (0);
}
