#include <stdio.h>
/**
 * main - Function to print alphabet
 *
 *Return: Zero
 */
int main(void)
{
	int numero;
	
	for (numero = '0'; numero <= '9'; numero++)
	{
	putchar (numero);
	}
	for (numero = 'a'; numero <='f'; numero++)
	{
	putchar (numero);
	}
	putchar ('\n');
	return (0);
}
