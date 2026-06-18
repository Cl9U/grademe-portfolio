#include <unistd.h>

int	main(int argc ,char** argv)
{
	int i = 0;

	if ( argc == 2 )
	{
	while (argv[1][i])
		{
			if(argv[1][i] == 'n')
				{
				write( 1, "n", 1);
				write( 1, "\n", 1);
				return 0;
				}
			i++;		
		}
	}
	write( 1, "\n", 1);	
	return (0);
}
