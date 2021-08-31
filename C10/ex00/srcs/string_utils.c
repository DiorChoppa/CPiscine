#include <unistd.h>

void	str_write(int fd, char *str)
{
	while (*str)
	{
		write(fd, str, 1);
		str++;
	}
}
