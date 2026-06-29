#include <unistd.h>

int	main(void)
{
	int i = 1;
	char c;
	char *d = "0123456789";
	while( i <= 100)
	{
		if( i % 15 == 0)
		write( 1, "FizzBuzz", 8);
		else if( i % 3 == 0)
		write( 1, "Fizz", 4);
		else if( i % 5 == 0)
		write( 1, "Buzz", 4);
		else
		{
			if( i < 10)
			{
			c = i + '0';
			write( 1, &c, 1);
			}
			else if ( i >= 10)
			{
			write( 1, &d[i / 10], 1);
			write( 1, &d[i % 10], 1);
			}
		}
		write( 1, "\n", 1);
		i++;
	}
	return (0);
}
