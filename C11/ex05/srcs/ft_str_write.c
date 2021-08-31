#include <unistd.h>

#include "ft_io.h"
#include "ft_char.h"

void	ft_str_write_to(int fd, char *str)
{
	while (*str)
	{
		ft_char_write_to(fd, *str);
		str++;
	}
}

void	ft_str_write(char *str)
{
	ft_str_write_to(OUT, str);
}
