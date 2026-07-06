#include <unistd.h>

int	main(int argc, char **argv)
{
	if(argc != 3)
	{
		write( 1, "wrong number of arguments\n", 26);
			return (0);
	}
	int i = 0;
	while(argv[2][i])
	{
		int j = 0;
		while(argv[1][j] && argv[1][j] != argv[2][i])
			j++;
		if(argv[1][j])
		{
			j = 0;
			while(j < i && argv[2][j] != argv[2][i])
				j++;
			if(j == i)
				write( 1, &argv[2][i], 1);	
		}
		i++;
	}
	write( 1, "\n", 1);	
	return (0);
}
