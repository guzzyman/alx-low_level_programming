#include "main.h"

/**
  *puts_half - prints half of a string
  *@str: input
  *Return: returns nothing
  */

void puts_half(char *str)
{
	int l = 0, i, n;

	while (str[l] != '\0')
		l++;

	if (l % 2 == 0)
		n = l / 2;
	else
		n = (l + 1) / 2;

	for (i = n; i < l; i++)
		_putchar(str[i]);

	_putchar('\n');
}
