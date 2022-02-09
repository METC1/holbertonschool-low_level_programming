#include "main.h"

/**
 * _islower - Function to print alphabet using _putchar
 *
 * Return: Int 0 if not lowercase 1 if lowercase
 */
int _islower(int c)
{
int check = 0;

if (c >= 'a' && c<= 'z')
	check = 1;

return (check);
}
