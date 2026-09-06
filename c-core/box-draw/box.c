#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_display(int h, int w, int x, int y)
{
	if (h == 1 && w == 1)
		ft_putchar('+');
	else if (h == 1 && w == x)
		ft_putchar('+');
	else if (h == y && w == 1)
		ft_putchar('+');
	else if (h == y && w == x)
		ft_putchar('+');
	else if (h == 1 || h == y)
		ft_putchar('-');
	else if (w == 1 || w == x)
		ft_putchar('|');
	else
		ft_putchar(' ');
}

int	main(int ac, char **av)
{
	if (ac != 3)
    {
        write(1, "wrong number of arguments\n", 26);
        return (0);
    }

	int	h;
	int	w;
	int x;
	int	y;

	x = atoi(av[1]);
	y = atoi(av[2]);

	if (x <= 0 || y <= 0)
		return (0);
	h = 1;
	while (h <= y)
	{
		w = 1;
		while (w <= x)
		{
			ft_display(h, w, x, y);
			w++;
		}
		ft_putchar('\n');
		h++;
	}
	return (0);
}
