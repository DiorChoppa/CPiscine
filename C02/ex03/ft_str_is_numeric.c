#include <stdbool.h>

int		ft_str_is_numeric(char *str)
{
	int		index;
	bool	valid;
	char	curr;

	index = 0;
	valid = true;
	while (true)
	{
		curr = str[index];
		if (curr == '\0')
		{
			break ;
		}
		if (!(curr >= '0' && curr <= '9'))
		{
			valid = false;
			break ;
		}
		index++;
	}
	return (valid);
}
