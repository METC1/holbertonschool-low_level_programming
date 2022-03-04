#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *malloc_checked - allocates memmory using malloc
 * @b: memmory to allocate
 * Return: void pointer to the array
 */
void *malloc_checked(unsigned int b)
{
int *bb;
bb = malloc(b);
if (bb == NULL)
{
exit(98);
}
return (bb);
}
