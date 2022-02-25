#include "main.h"
/**
 * _pow_recursion - calculates the value of x to the power of y
 * @x: number to raise
 * @y: power to raise the number
 *Return: int power
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
	return (-1);
}
if (y == 0)
{
	return (1);
}
return (x * _pow_recursion(x, y - 1));
}
