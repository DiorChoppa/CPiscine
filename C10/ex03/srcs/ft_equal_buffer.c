#include <stdbool.h>

bool	ft_is_equal(char *a, char *b, unsigned int size)
{
	unsigned int	index;

	index = 0;
	while (index < size)
	{
		if ((unsigned char)a[index] != (unsigned char)b[index])
			return (false);
		index++;
	}
	return (true);
}
