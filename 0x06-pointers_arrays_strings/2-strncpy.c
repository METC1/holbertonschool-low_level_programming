#include "main.h"
/**
 * _strncpy - copies a string to another string
 * @dest: char string to copy to
 * @src: char string to be copied
 * @n: n bytes from src that will be copied
 * Return: char, a pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

i = 0;
while i < n && src[i] != '\0')
	i++
for ( ; i < n; i++)
{
	dest[i] = '\0';
}
return (dest);
}
