#include <stddef.h>

int	memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i = 0;
	const unsigned char *st1 = (const unsigned char *)s1;
	const unsigned char *st2 = (const unsigned char *)s2;
	while (i < n)
    {
        if (st1[i] != st2[i])
        {
            if (st1[i] > st2[i])
                return (1);
            else
                return (-1);
        }
        i++;
    }
    return (0);
}
