int	ft_any(char **tab, int (*f)(char*))
{
	int	index;
	int	result;

	result = 0;
	index = 0;
	while (tab[index])
	{
		if ((*f)(tab[index]) != 0)
		{
			result = 1;
			break ;
		}
		index++;
	}
	return (result);
}
