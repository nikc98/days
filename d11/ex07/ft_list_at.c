#include <stdlib.h>

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
    t_list *new;

    if (nbr < 1)
	return (NULL);
    new = begin_list;
    while (new && nbr > 0)
    {
	new = new->next;
	nbr--;
    }
    if (new != NULL)
	return (new);
    return (NULL);
}
