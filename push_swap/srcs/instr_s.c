/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instr_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 21:23:55 by snakita           #+#    #+#             */
/*   Updated: 2022/01/06 21:23:56 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sa(t_stack **a)
{
	t_stack	*tmp;

	if ((*a) && (*a)->next)
	{
		tmp = *a;
		(*a) = (*a)->next;
		tmp->next = (*a)->next;
		(*a)->next = tmp;
		ft_putstr_fd("sa\n", 1);
	}
}

void	sb(t_stack **b)
{
	t_stack	*tmp;

	if ((*b) && (*b)->next)
	{
		tmp = *b;
		(*b) = (*b)->next;
		tmp->next = (*b)->next;
		(*b)->next = tmp;
		ft_putstr_fd("sb\n", 1);
	}
}

void	ss(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	if ((*a) && (*a)->next)
	{
		tmp = *a;
		(*a) = (*a)->next;
		tmp->next = (*a)->next;
		(*a)->next = tmp;
	}
	if ((*b) && (*b)->next)
	{
		tmp = *b;
		(*b) = (*b)->next;
		tmp->next = (*b)->next;
		(*b)->next = tmp;
	}
	ft_putstr_fd("ss\n", 1);
}
