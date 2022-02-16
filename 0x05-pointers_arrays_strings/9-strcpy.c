#include "main.h"
/**
* _strcpy - Copies a string pointed to a buffer pointed
* @dest: buffer to copy to
* @src: string to be copied
* Return: char pointer to the copied string holder
*/
char *_strcpy(char *dest, char *src)
{
int i, j = 0;

i = 0;
while (src[i] != '\0')
	i++;
for (j = 0; j <= i; j++)
{
	dest[j] = src[j];
}
	return (dest);
}
