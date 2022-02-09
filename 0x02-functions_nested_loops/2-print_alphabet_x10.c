#include "main.h"

/**
 * print_alphabet_x10 - Function to print alphabet using _putchar
 *
 * Return: Void
 */
void print_alphabet_x10(void)
{
	int letra;
	int i;

	for (i = 0; i <= 9; i++)
	{
	for (letra = 'a'; letra <= 'z'; letra++)
	{
	_putchar(letra);
	}
	_putchar('\n');
	}
}
