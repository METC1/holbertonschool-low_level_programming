#include "main.h"
/**
* puts_half - prints half of a string
* Description: If the number of characters is odd, the function should print
* the last n characters of the string, where n = (length_of_the_string - 1) / 2
* @str: char
* Return: void
*/

void puts_half(char *str)
{
int i, j, c;

while (str[i] != '\0')
	i++;
for (j = 0 ; j < i ; j++)
{
	if (i % 2 != 0)
	{
		if (j > ((i - 1) / 2))
		{
			_putchar(str[j]);
		}
	}
if (i % 2 == 0)
{
	if (j >= (i / 2))
	{
		_putchar(str[j]);
	}
}
}
_putchar('\n');
}
