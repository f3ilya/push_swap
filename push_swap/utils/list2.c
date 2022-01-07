/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 21:34:18 by snakita           #+#    #+#             */
/*   Updated: 2022/01/06 21:34:19 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_index(t_stack *a, const int *neworder1, int count)
{
	int		i;
	t_stack	*list;

	list = a;
	while (list)
	{
		i = -1;
		while (++i < count)
		{
			if (neworder1[i] == list->num)
				list->index = i;
		}
		list = list->next;
	}
}

int	ft_lstsize(t_stack **lst)
{
	t_stack	*list;
	int		i;

	i = 0;
	list = *lst;
	while (list)
	{
		list = list->next;
		i++;
	}
	return (i);
}

t_stack	*min_in_stack(t_stack **stack)
{
	t_stack	*min;
	t_stack	*lst;

	min = *stack;
	lst = *stack;
	while (lst)
	{
		if (min->num > lst->num)
			min = lst;
		lst = lst->next;
	}
	return (min);
}

t_stack	*max_in_stack(t_stack **stack)
{
	t_stack	*max;
	t_stack	*lst;

	max = *stack;
	lst = *stack;
	while (lst)
	{
		if (max->num < lst->num)
			max = lst;
		lst = lst->next;
	}
	return (max);
}

int	pos_in_stack(t_stack **stack, t_stack *elem)
{
	t_stack	*lst;
	int		i;

	i = 1;
	lst = *stack;
	while (lst != elem)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
