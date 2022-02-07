#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Function to test if a number is greater than zero,
 *equal to zero or less than zero
 *
 *Return: Zero
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
