#include <unistd.h>

int	main(void)
{
	char c = 'a';
	char up;

	while( c <= 'z')
	{
		if (c % 2 == 0)
		{
			up = c - 32;
		write( 1, &up, 1);
		write( 1, &up, 1);
		}
		else
		{
		write( 1, &c, 1);
		write( 1, &c, 1);
		}
		c++;
	}
	write( 1, "\n", 1);
	return (0);
}
