#include <unistd.h>

int	putchar(int c)
{
	unsigned char c1 = (unsigned char) c;
	write( 1, &c1, 1);
	if ( c > 255 )
	return (c);
	return (c1);
}

