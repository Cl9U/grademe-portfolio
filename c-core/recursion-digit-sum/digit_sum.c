// digit_sum(n) is the last digit of n plus digit_sum(n / 10).
// The sign is dropped, and n itself is never negated: -INT_MIN does not fit.
int	digit_sum(int n)
{
	long	m;

	m = n;
	if (m < 0)
		m = -m;
	if (m == 0)
		return (0);
	return (m % 10 + digit_sum(m / 10));
}