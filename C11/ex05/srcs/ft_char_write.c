#include <unistd.h>

#include "ft_io.h"

void	ft_char_write_to(int fd, char c)
{
	write(fd, &c, 1);
}

void	ft_char_write(char c)
{
	ft_char_write_to(OUT, c);
}
