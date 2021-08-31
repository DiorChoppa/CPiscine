#include <stdbool.h>

char	*ft_strlowcase(char *str)
{
	int		index;
	char	curr;

	index = 0;
	while (true)
	{
		curr = str[index];
		if (curr == '\0')
		{
			break ;
		}
		if (curr >= 'A' && curr <= 'Z')
		{
			str[index] = curr + 32;
		}
		index++;
	}
	return (str);
}
