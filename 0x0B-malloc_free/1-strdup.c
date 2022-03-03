#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *_strdup - Reserves memmory and puts string in it
 * @str: Pointer to the original string
 *Return: char pointer to the array
 */
char *_strdup(char *str)
{
int i, j = 0;
char *str2;

if (str == NULL)
{
	return (NULL);
}
	for (i = 0; str[i]; i++)
	{
	}
i++;
	str2 = malloc(sizeof(char) * i);
	if (str2 == NULL)
{
	return (NULL);
}
for (j = 0; j < i; j++)
{
	str2[j] = str[j];
}
return (str2);
	}
