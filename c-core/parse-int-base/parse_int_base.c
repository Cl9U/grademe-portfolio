int	is_indexof_base(char c, int base)
{
	int	value;

	if (c >= '0' && c <= '9')
		value = c - '0';
	else if (c >= 'a' && c <= 'f')
		value = c - 'a' + 10;
	else if (c >= 'A' && c <= 'F')
		value = c - 'A' + 10;
	else
		return (-1);
	if (value >= base)
		return (-1);
	return (value);
}

int parse_int_base(const char *str, int base)
{
	int	i;
	int	s;
	int	r;
	int digit;

	i = 0;
	s = 1;
	r = 0;
	
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s *= -1;
		i++;
	}
	while (1)
	{
		digit = is_indexof_base(str[i], base);
		if (digit == -1)
			break;
		r = r * base + digit;
		i++;
	}
	return (s * r);
}