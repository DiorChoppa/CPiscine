#include <stdlib.h>

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	if (begin_list == 0)
		return (NULL);
	if (nbr == 0)
		return (begin_list);
	return (ft_list_at(begin_list->next, nbr - 1));
}
