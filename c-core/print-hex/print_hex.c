#include <unistd.h>

void print_hex(unsigned int n)
{
	char *hex = "0123456789abcdef";

	if (n >= 16)
		print_hex(n / 16);

	write(1, &hex[n % 16], 1);
}

int ft_atoi(char *str)
{
	int i = 0;
	int n = 0;

	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 + (str[i] - '0');
		i++;
	}
	return n;
}

int main(int argc, char **argv)
{
	if(argc != 2)
	{
		write( 1, "wrong number of arguments\n", 26);
			return (0);
	}

	print_hex(ft_atoi(argv[1]));
	write(1, "\n", 1);
	return (0);
}