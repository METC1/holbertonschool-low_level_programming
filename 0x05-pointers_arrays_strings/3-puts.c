#include "main.h"

/**
 * _puts -  prints a  string
 * @str: string to be printed
 * Return: Void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; *str != '\0'; i++)
	{
		_putchar(*(str + i);
		str++;
	}
	_putchar('\n');
}
