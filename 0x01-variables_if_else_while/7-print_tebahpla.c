#include <stdio.h>
/**
 * main - Function to print alphabet
 *
 *Return: Zero
 */
int main(void)
{
	char letra;

	for (letra = 'z'; letra >= 'a'; letra--)
	{
	putchar (letra);
	}
	putchar ('\n');
	return (0);
}
