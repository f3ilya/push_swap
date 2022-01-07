/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instr_rr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 21:23:46 by snakita           #+#    #+#             */
/*   Updated: 2022/01/06 21:23:47 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rra(t_stack **a)
{
	t_stack	*tmp;
	t_stack	*end;

	if ((*a) && (*a)->next)
	{
		tmp = *a;
		end = ft_lstlast(*a);
		while (tmp->next->next)
			tmp = tmp->next;
		tmp->next = NULL;
		ft_lstadd_front(a, end);
		ft_putstr_fd("rra\n", 1);
	}
}

void	rrb(t_stack **b)
{
	t_stack	*tmp;
	t_stack	*end;

	if ((*b) && (*b)->next)
	{
		tmp = *b;
		end = ft_lstlast(*b);
		while (tmp->next->next)
			tmp = tmp->next;
		tmp->next = NULL;
		ft_lstadd_front(b, end);
		ft_putstr_fd("rrb\n", 1);
	}
}

void	rrr(t_stack **a, t_stack **b)
{
	t_stack	*tmp;
	t_stack	*end;

	if ((*a) && (*a)->next)
	{
		tmp = *a;
		end = ft_lstlast(*a);
		while (tmp->next->next)
			tmp = tmp->next;
		tmp->next = NULL;
		ft_lstadd_front(a, end);
	}
	if ((*b) && (*b)->next)
	{
		tmp = *b;
		end = ft_lstlast(*b);
		while (tmp->next->next)
			tmp = tmp->next;
		tmp->next = NULL;
		ft_lstadd_front(b, end);
	}
	ft_putstr_fd("rrr\n", 1);
}
