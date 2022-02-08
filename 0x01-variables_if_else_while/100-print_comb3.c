#include <stdio.h>
/**
 * main - Function to combine numbers
 *
 *Return: Zero
 */
int main(void)
{
	int num;
	int num2;

	for (num = 0; num < 10; num++)
	{
		for (num2 = num + 1; num2 < 10; num2++)
		{
			putchar(num + '0');
			putchar(num2 + '0');
			if ((num != 8) && (num2 != 9))
			{	
			putchar(',');
			putchar(' ');
			}
		}
		
	}
	putchar ('\n');
return (0);
}
