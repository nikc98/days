/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjory-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 17:43:23 by vjory-ca          #+#    #+#             */
/*   Updated: 2018/09/05 19:16:29 by vjory-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list	*new;

	if (nbr < 1)
		return (NULL);
	new = begin_list;
	nbr--;
	while (new && nbr > 0)
	{
		new = new->next;
		nbr--;
	}
	if (new != NULL)
		return (new);
	return (NULL);
}
