#include <stdio.h>
#include <stdlib.h>

int digit_len(long n)
{
	int i;


	if (n < 0)
		n = -n;
	i = 1;
	while (n > 9)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char *fill_digit(char *str, int len,long n)
{
	while (len > 0)
	{
		str[len - 1] = ((n % 10) + '0');
		n /= 10;
		len--;
	}
	return (str);
}

char *int_to_str(int n)
{
	int s;
	int len;
	long nb;
	char *str;

	nb = n;
	s = (nb < 0);
	if (s)
		nb = -nb;
	len = digit_len(nb);
	// printf("%d", len);
	str = malloc(((len + s) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len + s] = '\0';
	if (s)
		str[0] = '-';
	
	fill_digit(str + s,len,nb);
	return (str);
}