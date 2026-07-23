#include <unistd.h>

int	ft_strlen(char *s)
{
	int	len;

	len = 0;
	while(s[len])
		len++;
	return (len);
}

int	main(int ac, char **av)
{
	int	len;
	int start;
	int end;

	if (ac != 2)
	{
		write( 1, "wrong number of arguments\n", 26);
			return (0);
	}

	len = ft_strlen(av[1]) - 1;
	start = 0;
	while (av[1][len] == ' ' || av[1][len] == '\t')
		len--;
	end = len;
	while (len >= 0)
	{
		if (av[1][len] == ' ' || av[1][len] == '\t')
		{
			start = len;
			break;
		}
		len--;
	}
	if (!start && !(av[1][start] == ' ' || av[1][start] == '\t'))
	{
		while (av[1][start])
		{
			write(1, &av[1][start], 1);
			start++;
		}
		write(1, "\n", 1);
		return (0);
	}
	start++;
	while(start <= end)
	{
		write(1, &av[1][start], 1);
		start++;
	}
	write(1, "\n", 1);
	return (0);
}
