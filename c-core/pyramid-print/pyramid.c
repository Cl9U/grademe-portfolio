#include <stdlib.h>
#include <unistd.h>

// argv[1] is the height. Print a centered pyramid of '#', one row per line.
// A wrong argument count prints "wrong number of arguments" and a newline.
int	main(int ac, char **av)
{
	if (ac != 2)
	{
		write(1, "wrong number of arguments\n", 26);
		return (0);
	}
	int n = atoi(av[1]);
	int i = 1;
	int j = 0;
	while(i <= n)
	{
		j = 0;
		while (j < n - i)
		{
			write(1, " ", 1);
			j++;
		}
		j = 0;
		while (j < 2 * i - 1)
		{
			write(1, "#", 1);
			j++;
		}
		write (1, "\n", 1);
		i++;
	}
	return (0);
}
