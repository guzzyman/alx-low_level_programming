#include "main.h"

/**
  *_memcpy - copy byte from memcpy
  *@dest: destination
  *@src: source
  *@n: numbers
  *Return: returns chars
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
