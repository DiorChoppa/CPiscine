int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	if (length == 0)
		return (0);
	return (((*f)(tab[0]) != 0 ? 1 : 0) + ft_count_if(tab + 1, length - 1, f));
}
