#include <unistd.h>

void printstr(char *s)
{
	int i = 0;
	while(s[i])
	{
		write( 1, &s[i], 1);
		i++;
	}
}
int	main(int argc, char **argv)
{
	if(argc != 4)
	{
		write( 1, "wrong number of arguments\n", 26);
		return (0);
	}
	if(argv[2][1] == '\0' && argv[3][1] == '\0')
	{
	int i = 0;
	while(argv[1][i])
		i++;
	i--;
	while( i >= 0)
	{
		if(argv[1][i] == argv[2][0])
		{
			argv[1][i] = argv[3][0];
			printstr(argv[1]);
			write( 1, "\n", 1);
			return (0);
		}
		i--;
	}
	printstr(argv[1]);
	write( 1, "\n", 1);
	}
	else
	write( 1, "\n", 1);	
	return (0);
}