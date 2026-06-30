#include <unistd.h>

int	main(int argc, char **argv)
{
	if(argc >= 2)
	{
		int j = argc - 1;
		while(j >= 1)
		{
			int i = 0;
			while(argv[j][i])
			write( 1, &argv[j][i++], 1);
			write( 1, "\n", 1);
		j--;
		}
	}
	return (0);
}
