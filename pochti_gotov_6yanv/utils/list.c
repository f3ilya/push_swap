/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 21:34:11 by snakita           #+#    #+#             */
/*   Updated: 2022/01/06 21:34:12 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	*ft_lstnew(int num)
{
	t_stack	*elem;

	elem = malloc(sizeof(t_stack));
	if (elem)
	{
		elem->num = num;
		elem->index = 0;
		elem->flag = 0;
		elem->prev = NULL;
		elem->next = NULL;
	}
	return (elem);
}

void	ft_lstadd_front(t_stack **lst, t_stack *new)
{
	if (*lst)
	{
		new->next = *lst;
		*lst = new;
	}
	else
		*lst = new;
}

void	ft_lstadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*list;

	list = *lst;
	if (list)
	{
		while (list->next)
			list = list->next;
		list->next = new;
		new->prev = *lst;
	}
	else
		*lst = new;
}

t_stack	*ft_lstlast(t_stack *lst)
{
	t_stack	*list;

	list = lst;
	if (list)
	{
		while (list->next)
			list = list->next;
	}
	return (list);
}
