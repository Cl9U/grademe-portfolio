#include <unistd.h>

void ft_putchar(char c)
{
    write( 1, &c, 1);
}

int main(int argc,char** argv)
{
    int i;
    int j;
    char l[] = "abcdefghijklmnopqrstuvwxyz";
    char u[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    if ( argc == 2)
    {
        i = 0;
        while (argv[1][i])
        {
            j = 0;
            while (l[j])
            {
                if ( argv[1][i] == l[j])
                {
                    argv[1][i] = l[(j + 1) % 26];
                    break; 
                }
                if (argv[1][i] == u[j])
                {
                    argv[1][i] = u[(j + 1) % 26];
                    break;
                } 
             j++;   
            }
            ft_putchar(argv[1][i]);
         i++;   
        }
    }
    ft_putchar('\n');
    return (0);
}