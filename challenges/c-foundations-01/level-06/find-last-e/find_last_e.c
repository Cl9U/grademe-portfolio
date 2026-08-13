#include <unistd.h>

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		write(1, "e\n", 2);
		return (0);
	}
	int i;
	i = 0;
	while (av[1][i])
		i++;
	
	while (i >= 0)
	{
		if (av[1][i] == 'e')
		{
			write(1, "e", 1);
			break;
		}
		i--;
	}
	write(1, "\n", 1);
	return (0);
}
