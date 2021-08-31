#include <stdbool.h>

int		ft_str_is_lowercase(char *str)
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
		if (!(curr >= 'a' && curr <= 'z'))
		{
			valid = false;
			break ;
		}
		index++;
	}
	return (valid);
}
