#include <unistd.h>

int atoi(char *s)
{
	int i = 0;
	int r = 0;
	int sg = 1;
	if(s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
		{
			sg = -1;
		}	
			i++;
	}		
	while(s[i] >= '0' && s[i] <= '9')
		r = r * 10 + (s[i++] - '0');
	return (r * sg); 	
}

void putnbr(int n)
{
	char r;
	if(n < 0)
	{
		write( 1, "-", 1);
		n *= -1;
	}
	if(n >= 10)
		putnbr(n / 10);
	r = ((n % 10) + '0');
	write( 1, &r, 1);	
}

int	main(int argc, char **argv)
{
	int r = 0;
	if ( argc != 4)
	{
		write( 1, "wrong number of arguments\n", 26);
		return (0);
	}
	if(argv[2][0] == '+')
	{
		r = (atoi(argv[1]) + atoi(argv[3]));
		putnbr(r);
	}
	else if(argv[2][0] == '-')
	{
		r = (atoi(argv[1]) - atoi(argv[3]));
		putnbr(r);
	}
	else if(argv[2][0] == '/')
	{
		r = (atoi(argv[1]) / atoi(argv[3]));
		putnbr(r);
	}
	else if(argv[2][0] == '%')
	{
		r = (atoi(argv[1]) % atoi(argv[3]));
		putnbr(r);
	}
	else if(argv[2][0] == '*')
	{
		r = (atoi(argv[1]) * atoi(argv[3]));
		putnbr(r);
	}
	write( 1, "\n", 1);
	return (0);
}
