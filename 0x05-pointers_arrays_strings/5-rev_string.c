#include "main.h"

/**
  *rev_string - reverse a string
  *@s: input value;
  *Returns: nothing
  */

void rev_string(char *s)
{
	int l = 0, i = 0;
	char temp;

	while (s[l] != '\0')
		l++;

	while (i < l--)
	{
		temp = s[i];
		s[i++] = s[l];
		s[l] = temp;
	}
}
