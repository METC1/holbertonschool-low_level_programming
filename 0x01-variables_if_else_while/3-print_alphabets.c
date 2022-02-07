#include <stdio.h>
/**
 * main - Function to print alphabet
 *
 *Return: Zero
 */
int main(void)
{
	char letra;

	for (letra = 'a'; letra <= 'z'; letra++)
	{
	putchar (letra);
	}
	for (letra = 'A'; letra <= 'Z'; letra++)
	{
	putchar (letra);
	}
	putchar ('\n');
	return (0);
}
