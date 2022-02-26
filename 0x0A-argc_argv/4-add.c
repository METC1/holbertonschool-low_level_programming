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
int i, j, k = 0;
int sum = 0;
char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

if (argc <= 1)
{
	printf("0\n");
	return (0);
}
for (i = 1; i < argc; i++)
{
	for (j = 0; argv[i][j]; j++)
	{
		for (k = 0;k < 52; k++)
		{
		if (argv[i][j] == alpha[k])
		{
			printf("Error\n");
			return (1);
		}	
		}
	
	}
sum = sum + atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}

