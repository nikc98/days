/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjory-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 19:45:57 by vjory-ca          #+#    #+#             */
/*   Updated: 2018/09/05 20:17:05 by vjory-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

#include <stdlib.h>

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	if (begin_list == NULL)
		return ;
	while (begin_list)
	{
		(*f)(begin_list->data);
		begin_list = begin_list->next;
	}
}
