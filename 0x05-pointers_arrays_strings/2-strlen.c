#include "main.h"

/**
 * _strlen -  returns lenght of string
 * @s: string array adress to be measured
 * Return: int The lenght of the string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++)
	{
		s++;
	}
	return (i);
}
