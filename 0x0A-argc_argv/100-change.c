#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints the minimum number of coins to 
 * make change for an amount of money.
 * @argc: number of arguments
 * @argv: array of arguments
 *Return: 0 if no errors
 */
int main(int argc, char *argv[])
{
int coins, cents;
int c25, c10, c5, c2, c1 = 0;

if (argc != 2)
{
printf("Error\n");
return (1);
}
cents = atoi(argv[1]);
c25 = cents / 25;
cents = cents - (c25 * 25);
c10 = cents / 10;
cents = cents - (c10 * 10);
c5 = cents / 5;
cents = cents - (c5 * 5);
c2 = cents / 2;
cents = cents - (c2 * 2);
c1 = cents / 1;
cents = cents - (c1 * 1);
coins = c25 + c10 + c5 + c2 + c1;
printf("%d\n", coins);
return (0);
}
