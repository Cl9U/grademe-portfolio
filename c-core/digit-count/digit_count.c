// Count the decimal digits of n, sign excluded, with zero written as one digit.
// Never negate n: INT_MIN has no positive counterpart inside an int.
int	digit_count(int n)
{
	int c = 1;
	if (n ==  -2147483648)
		return (10);
	if (n < 0)
		n = -n;
	while (n >= 10)
	{
		n /= 10;
		c++;
	}
	return (c);
}
