#include "main.h"
/**
 * _strspn - finds how many characters are present in the string 
 * and the sub string
 * @s: string to find substring character 
 * @accept:string or list of characters to search if they exist on the string
 * Return: number of characters that are in the substring and the string
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j;
unsigned int k;

k = 0;
for (i = 0; accept[i] != '\0'; i++)
{
	for (j = 0; s[j] != '\0'; j++)
	{
		if ( accept[i] == s[j])
		{
			k = k + 1;
			break;
		}
	}
}
return(k);
}
