#include "main.h"
/**
 * factorial - calculates factorial of a number
 * @n: number to calculate factorial
 *Return: int factorial
 */
int factorial(int n)
{
if (n == 0)
{
	return (1);
}
if (n < 0)
{
	return (-1);
}
return (n * factorial(n - 1));
}
