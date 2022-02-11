#include "main.h"
#include <stdio.h>

/**
 * FizzBuzz - print numbers from 1 to 100 but replaces multiples of 3 or 5
 * Description: Print Fizz Buzz
 * @n: int
 * Return: void
 */
int main(void)
{
	int i;

	for (i = 1 ; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz");
		if (i % 5 == 0)
			printf("Buzz");
		if (!(i % 3 == 0 || i % 5 == 0))
			printf("%d", i);
	if (i < 100)
	printf(" ");
	}
}