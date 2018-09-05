/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjory-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 18:07:04 by vjory-ca          #+#    #+#             */
/*   Updated: 2018/09/05 18:07:17 by vjory-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
