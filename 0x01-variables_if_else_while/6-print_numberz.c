#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;
	int nl = '\n';

	for (c = '0'; c <= '9'; ++c)

	{
		putchar(c + '0');

	}

	putchar(nl);

	return (0);
}
