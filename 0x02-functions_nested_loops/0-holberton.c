 #include "holberton.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(void)
{
	char y[] = "Holberton";
	int z;

	for (z = 0; z < 9; z++)
	{
		_putchar(y[z]);
	}
	_putchar('\n');
	return (0);
}
