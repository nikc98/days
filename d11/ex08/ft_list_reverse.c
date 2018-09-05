#include <stdlib.h>

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
    t_list *new;
    t_list *old;
    t_list *nxt;

    nxt = *begin_list;
    if (begin_list == NULL || nxt == NULL)
	return ;
    old = NULL;
    while (new)
    {
	nxt = new->next;
	new->next = old;
	old = new;
	new = nxt;
    }
    *begin_list = old;
}
