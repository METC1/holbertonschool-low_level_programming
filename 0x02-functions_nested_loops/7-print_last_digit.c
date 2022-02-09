#include "main.h"

/**
 * print_last_digit - Function to compute abs of a number
 * @n: n is a number to be checked
 *
 * Return: last digit of number
 */
int print_last_digit(int n)
{
int lastd = 0;

lastd = n % 10;
if (lastd < 0)
lastd = (-1 * lastd);
_putchar(lastd + '0');
return (lastd);
}
