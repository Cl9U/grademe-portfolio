#include <unistd.h>

int	main(int ac, char **av)
{
	if(ac != 3)
	{
		write( 1, "wrong number of arguments\n", 26);
			return (0);
	}
	int i;
	int j;

	i = 0;
	j = 0;
	while(av[2][j])
	{
		while(av[1][i] && av[2][j] == av[1][i])
			i++;
		j++;
	}
	if (av[1][i] == '\0')
		write(1, "yes\n", 4);
	else
		write(1, "no\n", 3);
	return (0);
}
