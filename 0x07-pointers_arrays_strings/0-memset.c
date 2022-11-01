#include "main.h"

/**
  *_memset - returns strings
  *@s: input value
  *@b: input value
  *@n: input value
  *Return: returns char
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
