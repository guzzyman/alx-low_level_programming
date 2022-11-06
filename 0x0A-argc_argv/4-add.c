#include <stdio.h>
#include <stdlib.h>

int is_valid_int(char *s);

/**
  * main - adds positive numbers
  * @argc: number of commandline arguments
  * @argv: list of commandline arguments
  *
  * Description:
  * - If no number is passed to the program, prints 0, followed by a new line
  * - If one of the number contains symbols that are not digits, print Error,
  * followed by a new line, and returns 1
  *
  * Return: 0 for success. 1 for error
  */

int main(int argc, char **argv)
{
	int i;
	int total = 0;

	/* if no other arguments are passed */
	if (argc < 2)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
	/* check if the argument is a valid integer */
		if (is_valid_int(argv[i]))
		{
			total += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", total);
	return (0);
}

/**
  * is_valid_int - checks if a string is a valid integer
  * @s: string
  *
  * Return: 1 is s is a valid integer. 0 otherwise
  */

int is_valid_int(char *s)
{
	while (*s)
	{
		if (*s < '0' || *s > '9')
			return (0);
		s++;
	}
	return (1);
}
