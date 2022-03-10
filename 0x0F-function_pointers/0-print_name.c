#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - function tht prints name
 * @name: char pointer to string to be printed
 * @f: pointer to function, calls the name
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && (*f) != NULL)
{
(*f)((char *)name);
}
}
