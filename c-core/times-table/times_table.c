#include <unistd.h>

int atoi(char *s)
{
	int i = 0;
	int r = 0;
	while(s[i] >= '0' && s[i] <= '9')
	{
		r = r * 10 + (s[i] - '0');
		i++;
	}	
	return (r);	
}
void putnbr(int n)
{
	char c;
	if(n > 9)
		putnbr(n / 10);
	c = (n % 10) + '0';
	write( 1, &c, 1);
}
int	main(int argc, char **argv)
{
	if(argc != 2)
	{
		write( 1, "wrong number of arguments\n", 26);
			return (0);
	}
	int i = 1;
	int t = atoi(argv[1]);
	int r = 0;
	while( i <= 9)
	{
		r = i * t;
		putnbr(i);
		write( 1, " ", 1);
		write( 1, "x", 1);
		write( 1, " ", 1);
		putnbr(t);
		write( 1, " ", 1);
		write( 1, "=", 1);
		write( 1, " ", 1);
		putnbr(r);
		write( 1, "\n", 1);
		i++;
	}
	return (0);
}
