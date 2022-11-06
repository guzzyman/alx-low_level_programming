#include "main.h"

/**
  *_strlen - for length of a string
  *@s: input
  *Return: returns int
  */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
