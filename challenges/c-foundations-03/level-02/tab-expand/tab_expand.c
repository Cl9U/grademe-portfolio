#include <unistd.h>

int	main(int ac, char **av)
{
	if(ac != 2)
	{
		write( 1, "wrong number of arguments\n", 26);
			return (0);
	}
	int i;
	int j;
	int col;

	i = 0;
	col = 0;
	while (av[1][i])
	{
		if(av[1][i] == ' ')
		{
			j = 8 - (col % 8);
			while(j > 0)
			{
				write(1, &av[1][i], 1);
				col++;
				j--;
			}
		}
		else
		{
			write(1, &av[1][i], 1);
			col++;
		}
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
