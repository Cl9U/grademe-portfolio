#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	n;
	int	div;

	if (argc != 2)
	{
		printf("wrong number of arguments\n");
		return (0);
	}
	n = atoi(argv[1]);
	if (n == 1)
	{
		printf("1\n");
		return (0);
	}
	div = 2;
	while (n > 1)
	{
		if (n % div == 0)
		{
			printf("%d", div);
			n = n / div;
			if (n > 1)
				printf("*");
		}
		else
			div++;
	}
	printf("\n");
	return (0);
}