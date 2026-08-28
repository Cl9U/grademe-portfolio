#include <stddef.h>

char	*strncat(char *dst, const char *src, size_t n)
{
	size_t i;
	i = 0;
	while(dst[i])
		i++;
	size_t j = 0;
	while(src[j] && j < n)
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (dst);
}
