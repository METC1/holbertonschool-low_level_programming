#include "main.h"
/**
 * _atoi - extracts a number from a string with infinite character at begining
 * @s: string array to check
 *Return: int number in the string with its sign
 */
int _atoi(char *s)
{
int num = 0;
int i = 0;
int sign = 1;

for (i = 0; s[i]; i++)
{
	if (s[i] == '-')
	{
		sign = sign * -1;
	}
	else if (s[i] - '0' >= 0 && s[i] - '0' <= 9)
	{
	num = ((num * 10) + (s[i] - '0'));
	}
	else if (num > 0)
	{
	break;
	}

}
return (num * sign);
}
