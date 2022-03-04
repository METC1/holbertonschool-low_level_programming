#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *string_nconcat - Conactenates 2 strings with n characters of 2nd string
 * @s1: First string
 * @s2: Second string
 * @n: n characters of second string
 *Return: char pointer to the concatenation allocated space
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j, k = 0;
char *con;

if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";
for (i = 0; s1[i]; i++)
{
}
for (j = 0; s2[j] && j < n; j++)
{
}
if (n > j)
	con = malloc(sizeof(char) * (i + j + 1));
if (j > n)
	con = malloc(sizeof(char) * (i + n + 1));
if (con == NULL)
	return (NULL);
for (k = 0; k < i; k++)
{
con[k] = s1[k];
}
for (k = 0 ; ((k < j) && (k < n)); k++)
{
	con[k + i] = s2[k];
}
con[k + i + 1] = '\0';
return (con);
}
