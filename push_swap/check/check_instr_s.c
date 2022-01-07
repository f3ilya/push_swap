/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_instr_s.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 18:43:30 by snakita           #+#    #+#             */
/*   Updated: 2022/01/07 18:43:31 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	check_sa(t_stack **a)
{
	t_stack	*tmp;

	if ((*a) && (*a)->next)
	{
		tmp = *a;
		(*a) = (*a)->next;
		tmp->next = (*a)->next;
		(*a)->next = tmp;
	}
}

void	check_sb(t_stack **b)
{
	t_stack	*tmp;

	if ((*b) && (*b)->next)
	{
		tmp = *b;
		(*b) = (*b)->next;
		tmp->next = (*b)->next;
		(*b)->next = tmp;
	}
}

void	check_ss(t_stack **a, t_stack **b)
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
}
