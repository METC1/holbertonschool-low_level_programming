#include "main.h"

/**
 * print_sign - Function to check the sign of a number
 * @n: n is a number to be checked
 *
 * Return: Int 1 if greater than zero 0 if zero -1 if less than zero
 */
int print_sign(int n)
{
	int return = 0;
	char sign = '-';
	
	if (n >0 )
	{
	sign = '+';
	return = 1;
	}
	else if (n == 0 )
	{
		sign = '0';
		return = -1;
	}
putchar(sign);
return (check);
}
