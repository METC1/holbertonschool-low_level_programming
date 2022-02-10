#include "main.h"
/**
 * times_table - Function to print times tables
 *
 *Return: Void
 */
void times_table(void)
{
	int n1;
	int n2;
	int res;

	for (n1 = 0; n1 <= 9; n1++)
	{
		for (n2 = 0 ; n2 <= 9; n2++)
		{
				res = n1 * n2;
				if (res < 9)
				{
				_putchar(' ');
				}
				_putchar(' ');
				_putchar(res + '0');
				if (n2 < 9)
				{
				_putchar(',');
				}
		}
	}
	_putchar('\n');
}
