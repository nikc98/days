/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjory-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 17:41:37 by vjory-ca          #+#    #+#             */
/*   Updated: 2018/09/05 21:39:15 by vjory-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*new;
	t_list	*tmp;

	if (ac < 1)
		return (NULL);
	tmp = ft_create_elem(av[--ac]);
	if (tmp == NULL)
		return (NULL);
	new = tmp;
	while (ac > 0 && (new->next = ft_create_elem(av[--ac])) != NULL)
		new = new->next;
	return (tmp);
}
