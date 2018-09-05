/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjory-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 19:57:55 by vjory-ca          #+#    #+#             */
/*   Updated: 2018/09/05 20:22:01 by vjory-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

#include <stdlib.h>

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *),
						void *data_ref, int (*cmp)(void *, void *))
{
	if (begin_lsit == NULL)
		return ;
	while (begin_list)
	{
		if ((*cmp)(begin_list->data, data_ref) == 0)
			(*f)(begin_list->data);
		begin_list = begin_list->next;
	}
}
