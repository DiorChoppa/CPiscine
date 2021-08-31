void	ft_foreach(int *tab, int length, void (*f)(int))
{
	if (length <= 0)
		return ;
	(*f)(tab[0]);
	ft_foreach(tab + 1, length - 1, f);
}
