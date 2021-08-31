#ifndef CAT_H
# define CAT_H

# include <stdbool.h>

# define IN 0
# define OUT 1
# define ERR 2
# define BUFFER_SIZE 1024

void	stdin_loop();

bool	cat(char **paths, int count, int offset);

void	str_write(int fd, char *str);

#endif
