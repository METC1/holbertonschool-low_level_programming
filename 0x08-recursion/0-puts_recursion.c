#include "main.h"
/**
 * _puts_recursion - prints the given string with recursion
 * @s: string array to print
 *Return: void
 */
void _puts_recursion(char *s)
{
if (*s != '\0')
{
	_putchar(*s);
	_puts_recursion(s + 1);
}
if (*s == '\0')
{
	_putchar('\n');
}
}
