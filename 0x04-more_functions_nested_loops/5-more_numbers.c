#include "holberton.h"

/**
 * more_numbers - print 10 times the numbers from 0 to 14
 * Description: Can only use _putchar 3 times
 */
void more_numbers(void)
{
	int x, y;

	x = 0;
	while (x < 10)
	{
		y = 0;
		while (y < 15)
		{
			if (y > 9)
				_putchar(y / 10 + '0');

			_putchar(y % 10 + '0');
			y++;
		}
		x++;
		_putchar('\n');
	}
}
