#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	if(ac != 4)
	{
		printf("wrong number of arguments\n");
			return (0);
	}
	int	a;
	int	b;

	a = atoi(av[1]);
	b = atoi(av[3]);

	if (av[2][0] ==  '-')
	{
		printf("%d\n", a - b);
		return (0);
	}
	if (av[2][0] ==  '+')
	{
		printf("%d\n", a + b);
		return (0);
	}
	if (av[2][0] ==  '*')
	{
		printf("%d\n", a * b);
		return (0);
	}
	if (av[2][0] ==  '/')
	{
		printf("%d\n", a / b);
		return (0);
	}
	if (av[2][0] ==  '%')
	{
		printf("%d\n", a % b);
		return (0);
	}
}
