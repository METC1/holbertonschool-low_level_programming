#include "main.h"
/**
 * rev_string - Reverses a string
 * Description: Reversea string in the same variable
 * @s: char array to be reversed
 * Return: void
 */
void rev_string(char *s)
{
	int i;
	int j;
	char temp;

	i = 0;
while (s[i] != '\0')
	i++;
i--;
for (j = 0; j <= i / 2; j++)
	{
	temp = s[j];
	s[j] = s[i - j];
	s[i - j] = temp;
	}
}
