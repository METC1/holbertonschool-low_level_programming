#include "main.h"
/**
 * main - Function to print alphabet using _putchar
 *
 *Return: Zero
 */
int main(void)
{
	char letra;
	
	for (letra = 'a'; letra <='z'; letra++)
	{
	_putchar(letra);
	}
	_putchar('\n');
	return (0);
}
