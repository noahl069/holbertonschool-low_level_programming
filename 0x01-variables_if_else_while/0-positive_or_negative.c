#include <stdlib.h>
#include <time.h>

/**
 * main - function mandatory for a program
 * Return: return
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
}
