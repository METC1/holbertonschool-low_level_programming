#include "main.h"
/**
 * _strcmp - compares a string to another string character by character,
 * returning the diference between the first non equal characters
 * @s1: First string to compare
 * @s2: Second string to compare
 * Return: int, difference between the first different characters
 */
int _strcmp(char *s1, char *s2)
{
	int i, j;

i = 0;
j = 0;
while (s1[i] != '\0' || s2[i] != '\0')
{
	if (s1[i] != s2[i])
	{
		j = s1[i] - s2[i];
		break;
	}
	i++;
}
return (j);
}
