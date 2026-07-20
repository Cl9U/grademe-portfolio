#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

long int ft_atoi(char *s)
{
	int		i;
	long	r;

	i = 0;
	r = 0;
	while(s[i] >= '0' && s[i] <= '9')
	{
		r = r * 10 + (s[i] - '0');
		i++;
	}
	return (r);
}

void	ft_putnbr_base(long n, int len, char *base)
{
	if(n >= len)
		ft_putnbr_base((n / len), len, base);
	ft_putchar(base[n % len]);
}

int	main(int ac, char **av)
{
	if(ac != 2)
	{
		write( 1, "wrong number of arguments\n", 26);
			return (0);
	}
	long	a;
	char	*base;

	base = "0123456789abcdef";
	a = ft_atoi(av[1]);
	ft_putnbr_base(a, 16, base);
	write(1, "\n", 1);
	return (0);
}
