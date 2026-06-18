#include <unistd.h>

void ft_putchar(char c)
{
	write( 1, &c, 1);
}

int main(int argc ,char** argv)
{
	int i = 0;
	int j = 0;

	if ( argc == 2 )
		{
			while(argv[1][i])
				{
					if ( argv[1][i] >= 'a' &&  argv[1][i] <= 'z' ) 
						{
							j = argv[1][i];
							while ( j > 'a')
								{
									ft_putchar(argv[1][i]);
									j--;
								}
						}
					else if ( argv[1][i] >= 'A' &&  argv[1][i] <= 'Z' )
						{
							j = argv[1][i];
							while ( j > 'A')
								{
									ft_putchar(argv[1][i]);
									j--;
								}
						}
					else
					ft_putchar(argv[1][i]);
				i++;
				} 
		}		
	ft_putchar('\n');
	return (0);
}	
