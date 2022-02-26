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
int i, j= 0;
int sum = 0;

if (argc <= 1)
{
        printf("0\n");
        return (0);
}
for (i = 0; i < argc; i++)
{
	for (j = 0; argv[i][j]; j++)
	{
		if (argv[i][j] < 48 && argv[i][j] > 57)
	{
		printf("Error\n");
		return (1);
	}
	} 
sum = sum + atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}

