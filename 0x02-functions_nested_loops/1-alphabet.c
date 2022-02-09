#include "main.h"
/**
 * main - Function to print alphabet using _putchar
 *
 *Return: Zero
 */
void print_alphabet(void)
{
	int letra;
	
	for (letra = 'a'; letra <='z'; letra++)
	{
	_putchar(letra);
	}
	_putchar('\n');
}
