#include "holberton.h"
/**
 * _strlen_recursion - find length of a string
 * @s: pointer of char type
 * Return: return
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
/**
 * charcheck - resolve palidrome
 * @str: pointer of char type
 * @length: int type
 * Return: return
 */
int charcheck(char *str, int length)
{
	if (length <= 0)
		return (1);
	if (str[0] == str[length - 1])
	{
		return (charcheck(str + 1, length - 2));
	}
	else
		return (0);
}
/**
 * is_palindrome - check if palidrome
 * @s: pointer of char type
 * Return: return
 */
int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);

	if (length <= 1)
		return (1);
	else
		return (charcheck(s, length));
}
