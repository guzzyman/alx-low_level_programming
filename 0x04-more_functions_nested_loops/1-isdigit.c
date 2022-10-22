#include "main.h"

/**
  *_isdigit - checks for digit
  *@c: input value
  *Return: returns 0
  */

int _isdigit(int c)
{
	char i = '0';
	int digit = 0;

	for (; i <= '9'; i++)
	{
		if (i == c)
		{
			digit = 1;
			break;
		}
	}

	return (digit);

}
