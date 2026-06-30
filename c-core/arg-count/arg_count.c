#include <unistd.h>

int	main(int argc, char **argv)
{
	(void)argv;
	if( argc <= 1)
	{
		write( 1, "0\n", 2);
		return (0);
	}
	int c = argc - 1;
	c += '0'; 
	write( 1, &c, 1);
	write( 1, "\n", 1);
	return (0);
}
