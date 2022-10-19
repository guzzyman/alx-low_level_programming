#include <stdio.h>
#include "main.h"
/**
  *main - prints _putchar
  *
  *Return: returns 0
  */

int main(void)
{
	char text[8] = "_putchar";
	int i;

	for (i = 0; i <= 7; i++)
		_putchar(text[i]);
	_putchar('\n');
	return (0);
}
