#include "main.h"
/**
* _strcat - Copies a string to other source string
* @dest: Destination string and to wich must be copied
* @src: string to append to dest
* @n: n bytes to be copied from src
* Return: char pointer to the apended string
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

while (i < n && src[i] != '\0')
	i++;
for ( ; i < n; i++)
{
	dest[i] = '\0';
}

return (dest);
}
