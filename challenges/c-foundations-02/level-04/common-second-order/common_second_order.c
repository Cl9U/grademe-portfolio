#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc != 3)
	{
		write(1, "wrong number of arguments\n", 26);
		return (0);
	}
	i = 0;
	while (argv[2][i])
	{
		j = 0;
		while (j < i)
		{
			if (argv[2][j] == argv[2][i])
				break;
			j++;
		}
		if (j == i)
		{
			j = 0;
			while (argv[1][j])
			{
				if (argv[1][j] == argv[2][i])
				{
					write(1, &argv[2][i], 1);
					break;
				}
				j++;
			}
		}
		i++;
	}
	write(1, "\n", 1);
	return (0);
}