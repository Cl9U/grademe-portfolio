#include <unistd.h>
int atoi(char *s)
{
	int r = 0;
	int sn = 1; 
	int i = 0;
	if(s[i] == '-' || s[i] == '+')
	{
		if(s[i] == '-')
			sn = - 1;
		i++;	
	}
	while(s[i])
	{
		r = r * 10 + (s[i] - '0');
		i++;
	}
	return (r * sn);
}
void putnbr(int n)
{
	if(n < 0)
	{
		write( 1, "-", 1);
			n *= -1;	
	}
	if(n > 9)
		putnbr(n / 10);
	char c = ((n % 10) + '0');
	write( 1, &c, 1);	
}
int	main(int argc, char **argv)
{
	if(argc <= 1)
	{
		write( 1, "0\n", 2);
		return (0);
	}
	int i = 1;
	int j = argc - 1;
	int t = 0;
	while(i <= j)
	{
		t = t + atoi(argv[i]);
		i++;
	}	
	putnbr(t);
	write( 1, "\n", 1);	
	return (0);
}
