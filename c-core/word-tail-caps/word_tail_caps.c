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
		j++;
	}
	j = 1;	
	while(j <= k)
	{
		i = 0;
		while(argv[j][i])
		{
			if(argv[j][i] >= 'a' && argv[j][i] <= 'z')
			{
				if(argv[j][i + 1] == ' ' || argv[j][i + 1] == '\t' || argv[j][i + 1] == '\0'
				|| (!(argv[j][i + 1] >= 'a' && argv[j][i + 1] <= 'z')))
					argv[j][i] -= 32;
			}
			write( 1, &argv[j][i], 1);
			i++;	 
		}
		write( 1, "\n", 1);
		j++;
	}
	return (0);
}
