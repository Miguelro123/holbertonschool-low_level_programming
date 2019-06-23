#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = '0', m;

	while (n <= '9')
	{
		m = '0';

		while (m <= '9')
		{

			if (m > n && m != n)
			{
				putchar(n);

				putchar(m);

				if (n != '8' || m != '9')
				{
					putchar(',');

					putchar(' ');
				}
			}

			m++;
		}

		n++;
	}

	putchar('\n');

	return (0);
}
