#include "main.h"
/**
 * leet - encodes a string into 1337 changing some letters to numbers
 * @s: char string to be encoded
 * Return: char of the string encoded
 */
char *leet(char *s)
{
int i, j;
char let1[] = "aeotlAETOL";
char subst[] = "43071430714";

for (i = 0 ; s[i] != '\0' ; i++)
{
	for (j = 0 ; j <= 9 ; j++)
	{
		if (s[i] == let1[j])
		{
			s[i] = subst[j];
		}
	}
}
return (s);
}
