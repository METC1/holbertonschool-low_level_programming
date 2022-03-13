#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - variadic function to print numbers
 * @separator: char to separate  values
 * @n: unsigned int number of numbers to sum
 * Return: void no return
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;

	va_start(num, n);
	for (i = 0; i < n; i++)
	{
		if (separator == NULL || i == (n - 1))
		{
		printf("%u", va_arg(num, unsigned int));
		}
		else
		{
			printf("%u%s", va_arg(num, unsigned int), separator);
		}
	}
	printf("\n");
	va_end(num);
}
