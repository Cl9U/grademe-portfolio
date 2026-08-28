#include <stddef.h>

void	*memset(void *s, int c, size_t n)
{
	if (n == 0)
		return(s);
	size_t i = 0;
	unsigned char *str = (unsigned char *)s;
	while(i < n)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	//str[i] = '\0';
	return (str);
}
