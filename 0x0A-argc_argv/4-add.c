#include <stdio.h>
#include <stdlib.h>
/**
 * main - sum numbers in argument, followed by a new line.
 * @argc: number of arguments
 * @argv: array of arguments
 *Return: sum of numbers, 0 if no numbers
 */
int main(int argc, char *argv[])
{
int i = 0;
int sum = 0;

if (argc <= 1)
{
	printf("0\n");
	return (0);
}
for (i = 0; i < argc; i++)
{
	if (*argv[i] > 47 && *argv[i] < 58)
	{
		sum = sum + *argv[i];
	} else
	{
		printf("Error\n");
		return (1);
	}
}
return (0);
}
