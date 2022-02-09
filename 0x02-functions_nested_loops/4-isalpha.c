#include "main.h"

/**
 * _isalpha - Function to check if character is alpha
 * @c: c is a char to be evaluated
 *
 * Return: Int 0 if not alpha 1 if alpha
 */
int _isalpha(int c)
{
int check = 0;

if (c >= 'a' && c <= 'z')
	check = 1;
if (c >= 'A' && c <= 'Z')
	check = 1

return (check);
}
