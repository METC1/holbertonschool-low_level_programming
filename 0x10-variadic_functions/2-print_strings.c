#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - variadic function to print strings
 * @separator: char to separate strings
 * @n: unsigned int number of strings to print
 * Return: void no return
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strng;
	unsigned int i;
	char *caract;

	va_start(strng, n);
	for (i = 0; i < n; i++)
	{
		caract = va_arg(strng, char *);
		if (separator == NULL || i == (n - 1))
		{
			if (caract == NULL)
			{
			printf("(nil)");
			}
			else
			{
			printf("%s", caract);
			}
		}
		else
		{
			if (caract == NULL)
			{
			printf("(nil)%s", separator);
			}
			else
			{
			printf("%s%s", caract, separator);
			}
		}
	}
	printf("\n");
	va_end(strng);
}
