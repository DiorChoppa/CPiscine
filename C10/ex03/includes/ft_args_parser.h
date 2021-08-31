#ifndef FT_ARGS_PARSER_H
# define FT_ARGS_PARSER_H

# include <stdbool.h>

typedef struct	s_options
{
	char	*executable;
	char	**paths;
	char	*curr_path;
	int		disp_cont;
}				t_options;

bool			parse_args(char **args, int count);

bool			process_files(char **args, int count, int i, t_options *opts);

void			display_usage(t_options *opt);

void			display_error(t_options *opt, char *err, char *cse, bool limit);

#endif
