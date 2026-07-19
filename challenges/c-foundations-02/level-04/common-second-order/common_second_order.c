#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;
	int	k;
	int	found;
	int	dup;

	if (ac != 3)
	{
		write(1, "wrong number of arguments\n", 26);
		return (0);
	}
	i = 0;
	while (av[2][i])
	{
		found = 0;
		j = 0;
		while (av[1][j])
		{
			if (av[2][i] == av[1][j])
				found = 1;
			j++;
		}
		dup = 0;
		k = 0;
		while (k < i)
		{
			if (av[2][k] == av[2][i])
				dup = 1;
			k++;
		}
		if (found == 1 && dup == 0)
			write(1, &av[2][i], 1);
		i++;
	}
	write(1,"\n", 1);
	return (0);
}