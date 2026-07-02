#include <stddef.h>

int strln(char *s)
{
	int ln = 0;
	while(s[ln])
		ln++;
	return (ln);	
}
size_t	strcspn(const char *s, const char *reject)
{
	int i = 0;
	int j;
	while(reject[i])
	{
		j = 0;
		while(s[j])
		{
			if (s[j] == reject[i])
				return j;
			else if (j == strln(((char *)s)) - 1)
				return strln(((char *)s)); 
			j++;		
		}
		i++;
	}
	return 0;
}