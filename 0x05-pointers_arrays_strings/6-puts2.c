#include "main.h"

/**
  *puts2 - return every other character
  *@str: input value
  *Return: returns void
  */

void puts2(char *str)
{
	int l = 0, i = 0;

	while (str[l] != '\0')
		l++;

	l -= 1;

	for (; i <= l; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
