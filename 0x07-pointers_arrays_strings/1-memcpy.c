#include "main.h"
/**
 * _memcpy - copies n bytes from memory area src to memory area dest.
 * not overlapng.
 * @dest: destination buffer char
 * @src: source bufferchar
 * @n: int number of bytes
 * Return: pointer to destination char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
