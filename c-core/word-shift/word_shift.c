#include <unistd.h>

int w_count(char *s)
{
    int ct;
    int id;

    ct = 0;
    id = 0;

    while (*s)
    {
        if (!(*s == ' ' || *s == '\t'))
        {
            if (!id)
            {
                ct++;
                id = 1;
            }
        }
        else
            id = 0;
        s++;
    }
    return (ct);
}

int    main(int ac, char **av)
{
    if (ac != 2)
    {
        write( 1, "wrong number of arguments\n", 26);
            return (0);
    }
    int i;
    int sep;
    int wct;
    int f_word;
    int e_word;

    i = 0;
    sep = 1;
    wct = w_count(av[1]);


    if (wct == 1)
    {
        while (av[1][i] == ' ' || av[1][i] == '\t')
            i++;
        while (av[1][i] && (av[1][i] != ' ' && av[1][i] != '\t'))
            write(1, &av[1][i++], 1);
        write(1, "\n", 1);
        return (0);
    }

    while (av[1][i] == ' ' || av[1][i] == '\t')
        i++;
    f_word = i;
    while (av[1][i] && !(av[1][i] == ' ' || av[1][i] == '\t'))
        i++;
    e_word = i;
    while (av[1][i])
    {
        while (av[1][i] == ' ' || av[1][i] == '\t')
            i++;
        if (av[1][i - 1] == ' ' || av[1][i - 1] == '\t')
        {
            if (!sep)
                write(1, " ", 1);
        }
        sep = 0;
        write(1, &av[1][i], 1);
        i++;
    }
    write(1, " ", 1);
    while (f_word < e_word)
        write(1, &av[1][f_word++], 1);
    write(1, "\n", 1);
    return (0);
}