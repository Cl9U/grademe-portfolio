#include <stddef.h>

// Return 1 when a[0..n - 1] never decreases, 0 at the first drop.
// Equal neighbours keep the answer 1. n of 0 or 1 is sorted by convention.
int	is_sorted(const int *a, size_t n)
{
	size_t i;
	size_t j;
	size_t count;

	if  (n <= 1)
		return (1);
	i = 0;
	count = 1;
	while(i < n - 1)
	{
		j = i + 1;
		if (a[i] <= a[j])
			count++;
		i++;
	}
	if (count == n)
		return (1);
	return (0);
}
