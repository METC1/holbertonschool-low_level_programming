#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Function to test if a number is greater than zero,
 *equal to zero or less than zero
 *
 *Return: Zero
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if (last == 0 )
	{
		printf("Last digit of %d is %d and is 0\n", n, last);
	}
	else if (last < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
	}
	if (last > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	}
	return (0);
}
