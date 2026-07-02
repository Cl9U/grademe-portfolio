#include <stddef.h>

void	*memset(void *s, int c, size_t n)
{
	size_t i = 0;
	unsigned char *p = (unsigned char *)s;
	while(i < n)
		p[i++] = (unsigned char)c;
	return (s);
}
