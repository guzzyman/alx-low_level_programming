#include "main.h"

/**
  *swap_int - swaps the value of integers given
  *@a: input value
  *@b: input valu
  *Return: returns void
  */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

