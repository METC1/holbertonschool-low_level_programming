#include <main.h>
/**
 * main - Function to print using _putchar
 *
 *Return: Zero
 */
int main(void)
{
	char string[];
	int i =0;

	string = "_putchar";
	for (i = 0; i < 7; i++)
	{
	_putchar(string[i]);
	}
	_putchar("\n");
	return (0);
}
