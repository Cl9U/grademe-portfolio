#include <stddef.h>

size_t prefix_span(const char *text, const char *allowed)
{
	size_t i;
	size_t j;
	size_t count;

	i = 0;
	j = 0;
	count = 0;
	while(text[i])
	{
		j = 0;
		while(allowed[j])
		{
			if (text[i] == allowed[j])
				count++;
			j++;
		}
		i++;
	}
	return (count);
}
