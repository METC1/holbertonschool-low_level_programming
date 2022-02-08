#include <stdio.h>
/**
 * main - Function to print alphabet
 *
 *Return: Zero
 */
int main(void)
{
	int numero;
	char hexa;

	for (numero = 0; numero <= 15; numero++)
	{
		if (numero == 0)
		{
		hexa = '0';
		}else if (numero == 1)
		{	
		hexa = '1';
		}else if (numero == 2)
		{		
		hexa = '2';
		}else if (numero == 3)
		{
		hexa = '3';
		}else if (numero == 4)
		{
		hexa = '4';
		}else if (numero == 5)
		{
		hexa = '5';
		}else if (numero == 6)
		{
		hexa = '6';
		}else if (numero == 7)
		{
		hexa = '7';
		}else if (numero == 8)
		{
		hexa = '8';
		}else if (numero == 9)
		{
		hexa = '9';
		}else if (numero == 10)
		{
		hexa = 'A';
		}else if (numero == 11)
		{
		hexa = 'B';
		}else if (numero == 12)
		{
		hexa = 'C';
		}else if (numero == 13)
		{
		hexa = 'D';
		}else if (numero == 14)
		{
		hexa = 'E';
		}else if (numero == 15)
		{
		hexa = 'F';
		}
		putchar (hexa);
	}
	putchar ('\n');
	return (0);
}
