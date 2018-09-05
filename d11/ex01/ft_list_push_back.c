/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjory-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 17:37:07 by vjory-ca          #+#    #+#             */
/*   Updated: 2018/09/05 18:51:20 by vjory-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *new;

	if (begin_list == NULL)
	{
		begin_list = ft_create_elem(data);
		return ;
	}
	new = *begin_list;
	while (new->next != 0)
		new = new->next;
	new->next = ft_create_elem(data);
}
