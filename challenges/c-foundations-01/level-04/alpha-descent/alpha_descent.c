#include <unistd.h>

int main(void)
{
    char c = 'Z';
    int i = 0;
	char lw;

    while (c >= 'A')
    {
        if ((i / 2) % 2 == 0)
            write(1, &c, 1);
        else
        {
            lw = c + 32;
            write(1, &lw, 1);
        }
        c--;
        i++;
    }
    write(1, "\n", 1);
    return 0;
}