#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int hay = '0';

	while (hay <= '9')
	{
		putchar(hay);
		if (hay < '9')
		{
			putchar(',');
			putchar(' ');
		}
		hay++;
	}
	putchar('\n');
	return (0);
}
