int print_char (va_list argument)
{
	char c;

	c = va_arg(argument, int);
	_putchar(c);
	return (1);
}

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
