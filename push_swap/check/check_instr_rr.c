/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_instr_rr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 18:43:23 by snakita           #+#    #+#             */
/*   Updated: 2022/01/07 18:43:25 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	check_rra(t_stack **a)
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
}

void	check_rrb(t_stack **b)
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
	}
}

void	check_rrr(t_stack **a, t_stack **b)
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
}
