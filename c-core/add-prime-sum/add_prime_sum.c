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
	if ( n >= 10)
		putnbr( n / 10 );
	char c = (n % 10) + '0';
	write( 1, &c, 1);	
}

int add_prime_sum( int n , int i)
{
	if ( n < 2)
		return 0;
	if ( i * i > n)
		return 1;
	if ( n % i == 0)
		return 0;
	return 	add_prime_sum( n , i + 1);			
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write( 1, "0\n", 2);
		return (0);
	}
	int n = atoi(argv[1]);
	int i = 2;
	int c = 0;
	while( i <= n)
	{
		if(add_prime_sum(i, 2) == 1)
		{
			c += i;
		}	
			i++;	
	}
	putnbr(c);
	write( 1, "\n", 1);
	return (0);
	}