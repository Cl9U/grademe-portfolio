#include <unistd.h>

long	atoi(char *s)
{
	long	r;
	int	i;

	r = 0;
	i = 0;
	while(s[i])
	{
		r = r * 10 + (s[i] - '0');
		i++;
	}
	return (r);
}

void print_hex(char *hex, long n)
{
	if(n >= 16)
	{
		print_hex(hex, (n / 16));
	}
	write(1, &hex[n % 16], 1);
}

int	main(int ac, char **av)
{
	long n;
	char *hex;

	if(ac != 2)
	{
		write( 1, "wrong number of arguments\n", 26);
			return (0);
	}
	n = atoi(av[1]);
	hex = "0123456789abcdef";

	print_hex(hex, n);
	write(1, "\n", 1);
	return (0);
}
