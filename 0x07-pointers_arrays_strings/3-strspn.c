#include "main.h"
#include <stdio.h>
/**
 * _strspn - finds how many characters are present in the string
 * and the sub string
 * @s: string to find substring character
 * @accept:string or list of characters to search if they exist on the string
 * Return: number of characters that are in the substring and the string
 */
unsigned int _strspn(char *s, char *accept)
{
int i, j;
unsigned int k;

k = 0;
for (i = 0; accept[i] != '\0'; i++)
{
	for (j = 0; s[j] != '\0'; j++)
	{
		printf("%c", s[j]);
		if (accept[i] == s[j])
		{
			printf("%c", accept[i]);
			k = k + 1;
			break;
		}
	}
}
return (k);
}
