#include "main.h"
/**
 * prime_fact - calculates if a number is divisible by its predecesors
 * @n: number to check if prime
 * @i: counter starting in 2
 *Return: 1 if no factors are found 0 if not found
 */
int prime_fact(int n, int i)
{
if (i == n)
{
	return (1);
}
if (n % i == 0)
{
	return (0);
}

return (prime_fact(n, i + 1));
}
/**
 * is_prime_number - calculates if a number is prime
 * @n: number to check if prime
 *Return: 1 if integer is prime 0 if not
 */
int is_prime_number(int n)
{
int i = 2;

if (n <= 1)
{
	return (0);
}
return (prime_fact(n, i));
}
