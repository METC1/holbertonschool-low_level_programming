#include "main.h"

/**
 * _isdigit - Returns 1 if c is a decimal digit, 0 if else
 * @c: integer parameter
 * Return: int
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
	return (1);
	}
	return (0);
}
