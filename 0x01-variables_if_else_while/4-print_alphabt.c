#include <stdio.h>
/**
 * main - Function to print alphabet minus q or e
 *
 *Return: Zero
 */
int main(void)
{
	char letra;

	for (letra = 'a'; letra <= 'z'; letra++)
	{
	if (letra != 'e')
	{
	if (letra != 'q')
	{
	putchar (letra);
	}
	}
	}
	putchar ('\n');
	return (0);
}
