#include <unistd.h>
int main(int ac, char **av)
{
    if (ac <= 1)
    {
        write(1, "wrong number of arguments\n", 26);
        return (0);
    }
    char stack[1000];
    int top;
    int i;
    int j;

    j = 1;
    while (j < ac)
    {
        top = -1;
        i = 0;
        char *str = av[j];
        while (str[i])
        {
            if (str[i] == '(' || str[i] == '[' || str[i] == '{')
            {
                top++;
                stack[top] = str[i];
            }
            else if (str[i] == ')' || str[i] == ']' || str[i] == '}')
            {
                if (top < 0)
                    return (write(1, "Error\n", 6), 0);
                if ((str[i] == ')' && stack[top] != '(')
                    || (str[i] == ']' && stack[top] != '[')
                    || (str[i] == '}' && stack[top] != '{'))
                    return (write(1, "Error\n", 6), 0);
                top--;
            }
            i++;
        }
        if (top == -1)
            write(1, "OK\n", 3);
        else
            write(1, "Error\n", 6);
        j++;
    }
    return (0);
}
