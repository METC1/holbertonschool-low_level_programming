#include "main.h"
/**
 * square_n - calculates if a number has square root
 * @n: number to check for squareroot
 * @i: counter starting in n
 *Return: -1 if no factors are found or square root if found
 */
int square_n(int n, int i)
{
if (i * i == n)
{
	return (i);
}
if (i <= 0)
{
	return (-1);
}
return (square_n(n, i - 1));
}
/**
 * _sqrt_recursion - calculates if number has a natural number square root
 * @n: number to check for natural square root
 *Return: square root or -1 if it doesnt have
 */
int _sqrt_recursion(int n)
{
int i = n;

if (n < 0)
{
	return (-1);
}
return (square_n(n, i));
}
