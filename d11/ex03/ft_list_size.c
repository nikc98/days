/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjory-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 17:38:08 by vjory-ca          #+#    #+#             */
/*   Updated: 2018/09/05 17:47:33 by vjory-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

#include <stdlib.h>

int	ft_list_size(t_list *begin_list)
{
	int		z;
	t_list	*new;

	z = 0;
	new = begin_list;
	while (new)
	{
		new = new->next;
		z++;
	}
	return (z);
}
