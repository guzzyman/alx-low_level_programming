#include <stdlib.h>
#include "function_pointers.h"

/**
  * print_name - a function that prints a name.
  * @name: pointer to name to print
  * @print: function to print name
  * Return: Nothing
  */

void print_name(char *name, void (*print)(char *name))
{
	if (name == NULL || print == NULL)
		return;
	print(name);
}
