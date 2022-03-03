#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *str_concat - Conactenates 2 strings
 * @s1: First string
 * @s2: Second string
 *Return: char pointer to the concatenation
 */
char *str_concat(char *s1, char *s2)
{
int i, j, k = 0;
char *concat;

if (s1 == NULL)
{
	i = 0;
}
if (s2 == NULL)
{
	j = 0;
}
for (i = 0; s1[i]; i++)
{
}
for (j = 0; s2[j]; j++)
{
}
concat = malloc(sizeof(char) * (i + j + 1));
if (concat == NULL)
{
return (NULL);
}
for (k = 0; k < i; k++)
{
concat[k] = s1[k];
}
for (k = 0 ; k < j; k++)
{
	concat[k + i] = s2[k];
}
concat[k + i + 1] = '\0';
return (concat);
}
