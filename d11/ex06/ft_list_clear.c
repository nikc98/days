#include "ft_list.h"

#include <stdlib.h>

void	ft_list_clear(t_list **begin_list)
{
    t_list *new;
    t_list *tmp;

    new = *begin_list;
    while (begin_list)
    {
	tmp = new;
	free(new);
	new = tmp->next;
    }
    *begin_list = NULL;
}
