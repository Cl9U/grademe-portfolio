int	isspace(char c)
{
	if (!((c == ' ') || (c >= 9 && c <= 13)))
		return (0);
	return (1);	
}
