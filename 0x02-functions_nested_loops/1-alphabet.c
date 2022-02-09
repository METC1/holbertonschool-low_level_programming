#include "main.h"

/**
 * print_alphabet - Function to print alphabet using _putchar
 * 
 * Return: Void
 */
void print_alphabet(void)
{
	int letra;
	
	for (letra = 'a'; letra <= 'z'; letra++)
	{
	_putchar(letra);
	}
	_putchar('\n');
}
