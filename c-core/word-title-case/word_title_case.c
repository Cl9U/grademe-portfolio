#include <unistd.h>

int	main(int argc, char **argv)
{
	if(argc < 2)
	{
		write( 1, "wrong number of arguments\n", 26);
		return (0);
	}
	int i = 0;
	int j = 1;
	int k = argc - 1;
	while(j <= k)
	{
		i = 0;
		while(argv[j][i])
		{
			if(argv[j][i] >= 'A' && argv[j][i] <= 'Z')
				argv[j][i] += 32;
			i++;	
		}
		if(argv[j][0] >= 'a' && argv[j][0] <= 'z')
			argv[j][0] -= 32;
		j++;
	}
	j = 1;	
	while(j <= k)
	{
		i = 0;
		while(argv[j][i])
		{
			if(argv[j][i] == ' ' || argv[j][i] == '\t')
			{
				if(argv[j][i + 1] >= 'a' && argv[j][i + 1] <= 'z')
					argv[j][i + 1] -= 32;
			}
			write( 1, &argv[j][i], 1);
			i++;	 
		}
		write( 1, "\n", 1);
		j++;
	}
	return (0);
}
