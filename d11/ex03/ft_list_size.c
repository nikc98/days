#include "ft_list.h"

#include <stdlib.h>

int	ft_list_size(t_list *begin_list)
{
    int z;
    t_list *new;

    z = 0;
    new = begin_list;
    while (new)
    {
	new = new->next;
	z++;
    }
    return (z);
}
