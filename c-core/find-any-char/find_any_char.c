#include <stdio.h>
char *find_any_char( char *text,  char *needles)
{
	if (*text == '\0' || *needles == '\0')
		return NULL;

	int i = 0;
	int j;
	while(text[i])
	{
		j = 0;
		while(needles[j])
		{
			if (text[i] == needles[j])
				return &text[i];
			j++;	
		}
		i++;
	}	
	return NULL;
}