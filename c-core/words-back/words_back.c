#include <unistd.h>

int ft_strlen(char *s)
{
	int i;

	i = 0;
	while(s[i])
		i++;
	return (i);
}

int words_count(char *s)
{
	int in_word;
	int count;

	in_word = 0;
	count = 0;
	while(*s)
	{
		if ((*s != ' ' && *s != '\t'))
		{
			if (!in_word)
			{
				count++;
				in_word = 1;
			}
		}
		else
			in_word = 0;
		s++;
	}
	return (count);
}

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		write( 1, "wrong number of arguments\n", 26);
			return (0);
	}
	int len;
	int start;
	int end;
	int words;
	
	len = ft_strlen(av[1]) - 1;
	end = 0;
	words = words_count(av[1]);

	while(words >= 1)
	{
		while(len >= 0 && (av[1][len] != ' ' && av[1][len] != '\t'))
		{
			len--;
			end++;
		}
		start = len + 1;
		while(end > 0 )
		{
			write(1, &av[1][start], 1);
			start++;
			end--;
		}
		len--;
		if (words != 1)
			write(1, " ", 1);
		words--;
	}
	write(1, "\n", 1);
	return (0);
}