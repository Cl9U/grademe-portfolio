int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}
char	*strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	if (s[len] == (char)c)
		return ((char *)&s[len]);
	while (len--)
	{
		if (s[len] == (char)c)
			return ((char *)&s[len]);
	}
	return (0);
}