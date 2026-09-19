#include <stddef.h>

void	*memmove(void *dst, const void *src, size_t n)
{
	if (n == 0)
		return (dst);
	char *d = (char *)dst;
	const char *s = (const char *)src;
	
	size_t i = 0;
	if (d < s)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	if (d > s)
	{
		int j = n - 1;
		while (j >= 0)
		{
			d[j] = s[j];
			j--;
		}
	}
	return (dst);
}