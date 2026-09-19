long	abs_safe(int n)
{
	long nb = n;
	if (nb < 0)
		nb = -nb;
	return (nb);
}
