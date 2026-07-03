#include <unistd.h>

void	show_bits(unsigned char byte)
{
	int		i;
	char	c;

	i = 7;
	while (i >= 0)
	{
		if ((byte >> i) & 1)
			c = '1';
		else
			c = '0';
		write(1, &c, 1);
		i--;
	}
}