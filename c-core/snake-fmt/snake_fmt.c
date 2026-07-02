#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	char *str;
	int ln = 0;
	int i = 0;
	int j = 0;
	if(argc != 2)
	{
		write( 1, "wrong number of arguments\n", 26);
		return (0);
	}
	while(argv[1][i])
	{
		ln++;
		if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			ln++;	
		i++;	
	}	
	str = malloc((ln + 1) * (sizeof(char)));
	if(!str)
		return 1;
	i = 0;
	while(argv[1][i])
	{
		if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
		{
			str[j++] = '_';
			str[j++] = argv[1][i] + 32;
		}
		else
			str[j++] = argv[1][i];
		i++;
	}
	str[j] = '\0';
	i = 0;
	while(str[i])
	{
		write( 1, &str[i], 1);
		i++;
	}	
	write( 1, "\n", 1);	
	free(str);		
	return (0);
}
/*
int	main(int argc, char **argv)
{
	if(argc != 2)
	{
		write( 1, "wrong number of arguments\n", 26);
		return (0);
	}
	int i = 0;
	while(argv[1][i])
	{
		if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
		{
			write( 1, "_", 1);
			argv[1][i] += 32;
		}
		write( 1, &argv[1][i], 1);
		i++;
	}
	write( 1, "\n", 1);
	return (0);
}
*/