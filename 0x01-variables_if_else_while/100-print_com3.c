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
		for (b = '1'; b <= '9'; b++)
		{
			if (n < b && n != b)
			{
				putchar(n);
				putchar(b);
				if (n != '8')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
