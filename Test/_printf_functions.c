**/
 * print_char - Prints character by character of given pointer to character
 * @argument: variable whre arguments are stored
 * Return: int, the number of characters printed with function
 */
int print_char (va_list argument)
{
	char c;

	c = va_arg(argument, int);
	_putchar(c);
	return (1);
}
**/
 * print_string - Prints a string character by character of given pointer to string
 * @argument: variable whre arguments are stored
 * Return: int, the number of characters printed with function
 */

int print_string(va_list argument)
{
	char *str;
	int i;

	s = va_arg(argument, char *);

	if (s == NULL)
	{
		s = "(NIL)";
	}
	for (i = 0; s[i] != '\0' ; i++)
	{
		_putchar(s[i]);
	}
	return (i);
}
**/
 * print_number - Prints number character by character (starting with sign) of given pointer to a number
 * @argument: variable whre arguments are stored
 * Return: int, the number of characters printed (including sign) with function
 */
int print_number(va_list argument)
{
	int n;
	int numchar = 0;
	unsigned int num;
	unsigned int positive;
	unsigned int count;

	n = va_arg(arguments, int);

	if (n < 0)
	{
		_putchar('-');
		num = (n * (-1));
		numchar++;
	}
	else
	{
		num = n;
	}
	count = 1;

	while (num > 9)
	{
		num /= 10;
		count *= 10;
	}
	for ( ; count >= 1; count /= 10)
	{
		_putchar(((num / count) % 10) + '0');
		numchar++;
	}
	return (numchar);
}
**/
 * print_perc - Prints character by character of given pointer to character
 * @argument: variable whre arguments are stored
 * Return: int, the number of characters printed with function
 */
int print_perc (va_list argument)
{
	char c;

	c = '%';
	_putchar(c);
	return (1);
}
