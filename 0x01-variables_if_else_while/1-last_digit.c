#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastDigit = n % 10;

	if (lastDigit > 5)
		printf("%d and is greater than 5\n", lastDigit);
	if (lastDigit == 0)
		printf("%d and is 0\n", lastDigit);
	if (lastDigit < 6 && lastDigit != 0)
		printf("%d and is less than 6 and not 0\n", lastDigit);
	return (0);
}
