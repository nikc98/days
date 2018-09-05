#include <stdlib.h>

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
    t_list	*new;
    t_list	*tmp;

    if (ac < 1)
	return (NULL);
    tmp = ft_create_elem(av[ac - 1]);
    if (tmp == NULL)
	return (NULL);
    new = tmp;
    while (ac > 0 && (new->next = *ft_create_elem(av[--ac]) != NULL))
	new = new->next;
    return (tmp);
}
