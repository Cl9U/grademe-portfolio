#include <unistd.h>

int	ft_atoi(char *s)
{
	int	i;
	int r;

	i = 0;
	r = 0;
	while(s[i] >= '0' && s[i] <= '9')
	{
		r = r * 10 + (s[i] - '0');
		i++;
	}
	return (r);
}

void	ft_putchar(char c)
{
	write(1 , &c, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr > 9)
		ft_putnbr(nbr / 10);
	ft_putchar(nbr % 10 + '0');
}

int	main(int ac, char **av)
{
	if(ac != 2)
		{
			write( 1, "wrong number of arguments\n", 26);
				return (0);
		}
	int	n;
	int	i;

	n = ft_atoi(av[1]);
	i = 1;
	while (i <= 9)
	{
		ft_putnbr(i);
		ft_putchar(' ');
		ft_putchar('x');
		ft_putchar(' ');
		ft_putnbr(n);
		ft_putchar(' ');
		ft_putchar('=');
		ft_putchar(' ');
		ft_putnbr(i * n);
		ft_putchar('\n');
		i++;
	}
}
