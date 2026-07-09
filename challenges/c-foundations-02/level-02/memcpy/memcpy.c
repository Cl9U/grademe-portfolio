#include <stddef.h>

void *memcpy(void *dst, const void *src, size_t n)
{
    char *d = (char *)dst;
    const char *s = (const char *)src;
    void *ret = dst;

    while (n--)
        *d++ = *s++;

    return (ret);
}