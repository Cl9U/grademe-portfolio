#include <stddef.h>

char	*strncat(char *dst, const char *src, size_t n)
{
	size_t i = 0;
	size_t j = 0;
	while(dst[i])
		i++;
	while(j < n)
		dst[i++] = src[j++];
	dst[i] = '\0';	
	return (dst);
}
