#include <stdlib.h>

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
    t_list *new;

    if (begin_list == NULL)
	return ;
    *begin_list = ft_create_elem(data);
    while (new->next != 0)
	new = new->next;
    new->next = ft_create_elem(data);
}
