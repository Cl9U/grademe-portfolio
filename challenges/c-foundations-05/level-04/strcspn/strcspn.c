#include <stddef.h>

size_t	strcspn(const char *s, const char *reject)
{
	size_t i = 0;
	size_t j = 0;

	if (s[0] == '\0')
		return (0);
	while(s[i])
	{
		j = 0;
		while(reject[j])
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}
