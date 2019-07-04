#include "holberton.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: Type char
 * Return: s
 */
char *cap_string(char *s)
{
	int wrd;

	for (wrd = 0 ; s[wrd] != '\0' ; wrd++)
	{
		if (s[wrd] >= 'a' && s[wrd] <= 'z')
		{
			if (wrd == 0)
			{
				s[wrd] = s[wrd] - 32;
			}
			else
			{
				switch (s[wrd - 1])
				{
					case 9:
					case 10:
					case 32:
					case 44:
					case 59:
					case 46:
					case 33:
					case 63:
					case 34:
					case 40:
					case 41:
					case 123:
					case 125:
						s[wrd] = s[wrd] - 32;
				}
			}
		}
	}
	return (s);
}
