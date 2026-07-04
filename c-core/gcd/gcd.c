#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int gcd(unsigned long int a, unsigned long int b)
{
	if(b == 0)
		return a;
	return gcd(b, (a % b));	
}

int	main(int argc, char **argv)
{
	if(argc < 2)
	{
		printf("wrong number of arguments\n");
		return (0);
	}
	long int a = atoi(argv[1]);
	long int b = atoi(argv[2]);
	printf("%d\n", gcd(a, b));
	return (0);
}
