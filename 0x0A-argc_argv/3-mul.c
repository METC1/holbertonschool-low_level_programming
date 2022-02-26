#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all arguments, followed by a new line.
 * @argc: number of arguments
 * @argv: array of arguments
 *Return: 0 if no errors
 */
int main(int argc, char *argv[])
{
if (argc != 3)
{
	printf("Error\n");
	return (1);
}
printf("%i\n", atoi(argv[2]) * atoi(argv[1]));
return (0);
}
