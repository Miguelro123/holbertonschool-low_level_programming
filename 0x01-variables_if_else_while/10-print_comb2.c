#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, b;

	for (n = '0'; n <= '9'; n++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			putchar(n);
			putchar(b);
			if (n != '9' || b != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
