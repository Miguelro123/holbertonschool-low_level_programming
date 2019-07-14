#include <stdio.h>
/**
 * main - prints num of arg., followed by a new line.
 * @argc: int type
 * @argv: char type
 * Return: 0
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
