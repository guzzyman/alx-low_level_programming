#include <unistd.h>
/**
  * main - print characters passed
  *
  *Return: returns 0 when true
  */
int _putchar(char c)
{
	return(write(1,&c,1));
}
