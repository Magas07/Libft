void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = -1;
	if (!s || !f)
		return ;
	while (s[++i])
		(*f)(i, s + i);
}