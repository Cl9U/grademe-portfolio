#include <stdio.h>
#include <stdlib.h>

int *int_range(int from, int to)
{
	int *arr;
	int range;
	int i;
	int j;
	int c;

	if(from <= to)
	{
		range = to - from;
		c = 1;
	}
	if(from > to)
	{
		range = from - to;
		c = 0;
	}
	arr = malloc((range + 1) * sizeof(int));
	if(!arr)
		return (NULL);
	i = 0;
	j = range;
	if (c == 1)
	{
		while (i <= j)
		{
			arr[i] = from + i;
			i++;
		}
	}
	if (c == 0)
	{
		while (i <= j)
		{
			arr[i] = from - i;
			i++;
		}
	}
	return (arr);
}