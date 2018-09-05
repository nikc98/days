/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjory-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 17:39:31 by vjory-ca          #+#    #+#             */
/*   Updated: 2018/09/05 18:30:39 by vjory-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list *new;

	if (begin_list == NULL)
		return (NULL);
	new = begin_list;
	while (new)
	{
		if (new->next == NULL)
			return (new);
		new = new->next;
	}
	return (NULL);
}
