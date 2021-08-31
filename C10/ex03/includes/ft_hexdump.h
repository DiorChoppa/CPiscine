#ifndef FT_HEXDUMP_H
# define FT_HEXDUMP_H

# include <stdbool.h>

# include "ft_args_parser.h"

bool	ft_stdin_hexdump(t_options *options);

bool	ft_hexdump(t_options *options, int count);

#endif
