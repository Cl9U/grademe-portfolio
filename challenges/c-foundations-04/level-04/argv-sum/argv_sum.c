#include <unistd.h>

int ft_atoi(char *str)
{
	int i;
	int s;
	int	r;

	i = 0;
	r = 0;
	s = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s = -1;
		i++;
	}
	while (str[i])
	{
		r = r * 10 + (str[i] - '0');
		i++;
	}
	return (s * r);
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
	}
	ft_putchar((n % 10) + '0');
}

int	main(int ac, char **av)
{
	int i;
	int r;

	r = 0;
	i = 1;
	while (i < ac)
	{
		r = r + ft_atoi(av[i]);
		i++;
	}
	ft_putnbr(r);
	ft_putchar('\n');
	return (0);
}
