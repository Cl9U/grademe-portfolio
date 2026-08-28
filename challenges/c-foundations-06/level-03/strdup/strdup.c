#include <stdlib.h>
int ft_strlen(const char *s)
{
	int i = 0;
	while(s[i])
		i++;
	return (i);
}
char *strdup(const char *src)
{
	int len = ft_strlen(src);
	char *dup;
	int i = 0;
	dup = malloc((len + 1) * sizeof(char));
	if(!dup)
		return (NULL);
	while(src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
