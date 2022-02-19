#include "main.h"
/**
 * *rot13 - encodes a string into 1337 changing some letters to numbers
 * @s: char string to be encoded
 * Return: pointer char of the string encoded
 */
char *rot13(char *s)
{
int i, j;
char let1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char subst[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
for (i = 0 ; s[i] != '\0' ; i++)
{
	for (j = 0 ; j <= 52 ; j++)
	{
		if (s[i] == let1[j])
		{
			s[i] = subst[j];
			break;
		}
	}
}
return (s);
}
