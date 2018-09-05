/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjory-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 17:37:07 by vjory-ca          #+#    #+#             */
/*   Updated: 2018/09/05 21:26:03 by vjory-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *node;
	t_list *new;

	if (begin_list == NULL)
		return ;
	new = ft_create_elem(data);
	if (new == NULL)
		return ;
	if (*begin_list == NULL)
		*begin_list = new;
	else
	{
		node = *begin_list;
		while (node->next != NULL)
			node = node->next;
		node->next = new;
	}
}
