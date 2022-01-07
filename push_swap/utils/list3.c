/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 21:34:24 by snakita           #+#    #+#             */
/*   Updated: 2022/01/06 21:34:25 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_push	*ft_push_new(void)
{
	t_push	*elem;

	elem = malloc(sizeof(t_push));
	if (elem)
	{
		elem->next = 0;
		elem->max = 0;
		elem->flag = 0;
		elem->mid = 0;
	}
	return (elem);
}

int	check_finish(t_stack **a, int count)
{
	t_stack	*list;
	int		len;

	len = ft_lstsize(a);
	if (count != len)
		return (0);
	list = *a;
	while (list->next)
	{
		if (list->index > list->next->index)
			return (0);
		list = list->next;
	}
	return (1);
}
