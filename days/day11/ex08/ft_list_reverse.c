/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 22:42:53 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/21 15:46:48 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_listlen(t_list *begin)
{
	int		len;

	len = 1;
	while (begin->next)
	{
		begin = begin->next;
		len = len + 1;
	}
	return (len);
}

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	i;

	i = 0;
	while (i < nbr && begin_list->next)
	{
		begin_list = begin_list->next;
		i = i + 1;
	}
	return (i == nbr ? begin_list : 0);
}

void	ft_list_reverse(t_list **begin_list)
{
	int			i;
	int			inc;
	void		*save;
	t_list		*front;
	t_list		*back;

	if (!*begin_list || ft_listlen(*begin_list) <= 1)
		return ;
	inc = ft_listlen(*begin_list) % 2 == 0 ? 1 : 0;
	i = 0;
	while ((ft_listlen(*begin_list) / 2) - i - inc >= 0)
	{
		front = ft_list_at(*begin_list, (ft_listlen(*begin_list) / 2) - i
				- inc);
		back = ft_list_at(*begin_list, (ft_listlen(*begin_list) / 2) + i);
		save = front->data;
		front->data = back->data;
		back->data = save;
		i = i + 1;
	}
}
