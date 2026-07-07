#include <stddef.h>

void	*memchr(const void *s, int c, size_t n)
{
	size_t i = 0;
	const unsigned char *src = (const unsigned char *)s;
	unsigned char ch = (unsigned char)c;
	while(i < n)
	{
		while(i < n)
		{
			if(src[i] == ch)
				return (void *)&src[i];
		i++;
		}
	}
	return (NULL);
}
