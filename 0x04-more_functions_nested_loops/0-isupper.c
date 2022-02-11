#include "main.h"

/**
 * _isupper - Returns 1 if c is uppercase, 0 if else
 * @c: int parameter
 * Return: int
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
	return (1);
	}
	return (0);
}
