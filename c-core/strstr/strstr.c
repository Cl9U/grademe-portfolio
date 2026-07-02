#include <stdio.h>

char	*strstr(const char *haystack, const char *needle)
{
	int i = 0;
	int j;
	if(*needle == '\0')
		return (char *)haystack;
	while(haystack[i])
	{
		j = 0;
		while(haystack[i + j] && haystack[i + j] == needle[j])
			j++;
		if(needle[j] == '\0')
			return ((char *)&haystack[i]);
		i++;		
	}
	return (NULL);
}