#include <stdio.h>
/**
 * main - prints its name, followed by a new line.
 * @argc: number of arguments
 * @argv: array of arguments
 *Return: 0 if no errors
 */
int main(int argc, char *argv[])
{
(void)argv;
printf("%d\n", argc - 1);
return (0);
}
