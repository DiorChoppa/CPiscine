#include <unistd.h>

#include "ft_console_io.h"

void	write_char_to(char c, int fd)
{
	write(fd, &c, 1);
}

void	write_char_out(char c)
{
	write_char_to(c, OUT);
}

void	write_str_out(char *str)
{
	while (*str)
	{
		write_char_out(*str);
		str++;
	}
}

void	write_char_err(char c)
{
	write_char_to(c, ERR);
}

void	write_str_err(char *str)
{
	while (*str)
	{
		write_char_err(*str);
		str++;
	}
}
