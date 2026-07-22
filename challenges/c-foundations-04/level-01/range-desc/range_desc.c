#include <stdio.h>
#include <stdlib.h>

int *range_desc(int min, int max)
{
	int *arr;
	int range;
	int i;
	int j;
	
	range = max - min;
	arr = malloc((range + 1) * sizeof(int));
	if(!arr)
	{
		return (NULL);
	}
	i = 0;
	j = range;
	while(i <= j)
	{
		arr[i] = max - i;
		i++;
	}
	return (arr);
}
