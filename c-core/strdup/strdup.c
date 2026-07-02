#include <stdlib.h>
#include <stdio.h>
char *strdup(const char *src)
{
	char *dup;
	int ln = 0;
	while(src[ln])
		ln++;
	ln--;
	dup = malloc(ln + 1 * (sizeof(char)));
	if(!dup)
		return NULL;
	int i = 0;
	while(src[i])
	{
		dup[i] = src[i];
		i++;
	}	
	dup[i] = '\0'; 	
	return (dup);
}