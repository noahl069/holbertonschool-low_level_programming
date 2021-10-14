#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - mandatory function for all programs
 * Return: return
 */
int main(void)
{
	int n, lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	if (n == 0)
		printf("Last digit of %d is 0 and is 0\n", lastDigit);
	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
	if (n < 6)
		printf("Last digit of %d is less than 6 and not 0\n", lastDigit);
	return (0);
}
