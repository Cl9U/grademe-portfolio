#include <unistd.h>

int	main(int argc, char **argv)
{
	if(argc != 2)
	{
		write( 1, "wrong number of arguments\n", 26);
			return (0);
	}
	int i = 0;
	int j = 0;
	while(argv[1][i])
	{
		if((argv[1][i] == ' ') || (argv[1][i] >= 9 && argv[1][i] <= 13))
			j++;
		if((argv[1][i] >= 'a' && argv[1][i] <= 'z') || (argv[1][i] >= 'A' && argv[1][i] <= 'Z'))
			break;	
		i++;	
	}
	while(argv[1][j])
	{
		if((argv[1][j] == ' ') || (argv[1][j] >= 9 && argv[1][j] <= 13))
		{
			break;
		}		
		write( 1, &argv[1][j], 1);	
		j++;
	}
	write( 1, "\n", 1);
	return (0);
}
