#include <stdio.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	unsigned int i; 
	int sum;
	
	if (n < 1)
	{
		return(0);
	}
	sum = 0;
	va_start(num, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(num, unsigned int);
	}
	va_end(num);
	return (sum);
	
}
