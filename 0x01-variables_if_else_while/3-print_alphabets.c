    
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  char c;
  char ch = '\n';

  for (c = 'a'; c <= 'z'; ++c)
    {
      putchar(c);
    }
  for (c = 'A'; c <= 'Z'; ++c)
    {
      putchar(c);
    }

  putchar(ch);

  return (0);
}
