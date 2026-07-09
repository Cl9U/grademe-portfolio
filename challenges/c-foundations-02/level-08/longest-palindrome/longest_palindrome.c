#include <unistd.h>

void	ft_putstr(char *s)
{
	while (*s)
		write(1, s++, 1);
}

int	is_palindrome(char *s, int start, int end)
{
	while (start < end)
	{
		if (s[start] != s[end])
			return (0);
		start++;
		end--;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int i;
	int j;
	int len;
	int best_start;
	int best_len;

	if (argc != 2)
	{
		ft_putstr("wrong number of arguments\n");
		return (0);
	}

	len = 0;
	while (argv[1][len])
		len++;

	if (len == 0)
	{
		write(1, "\n", 1);
		return (0);
	}

	best_start = 0;
	best_len = 1;

	i = 0;
	while (i < len)
	{
		j = i;
		while (j < len)
		{
			if (is_palindrome(argv[1], i, j))
			{
				if (j - i + 1 > best_len)
				{
					best_start = i;
					best_len = j - i + 1;
				}
			}
			j++;
		}
		i++;
	}

	write(1, argv[1] + best_start, best_len);
	write(1, "\n", 1);

	return (0);
}