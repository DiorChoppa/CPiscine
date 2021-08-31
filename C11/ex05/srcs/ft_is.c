#include "ft_boolean.h"

t_bool	ft_is_number(char c)
{
	return (c >= '0' && c <= '9');
}

t_bool	ft_is_whitespace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\r'
			|| c == '\f');
}
