#include "main.h"
/**
* _strcat - Appends a string to other source string
* @dest: Destination string and to wich must be appended
* @src: string to append to dest
* Return: char pointer to the apended string
*/
char *_strcat(char *dest, char *src)
{
int i, j, k = 0;

i = 0;
j = 0;
while (dest[i] != '\0')
	i++;
while (src[j] != '\0')
	j++;
for (k = 0; k <= j; k++)
{
	dest[i + k] = src[k];
}
	dest[i + k + 1] = '\0';
	return (dest);
}
