/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instr_r.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 21:23:39 by snakita           #+#    #+#             */
/*   Updated: 2022/01/06 21:23:40 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ra(t_stack **a)
{
	t_stack	*tmp;

	if ((*a) && (*a)->next)
	{
		tmp = *a;
		*a = tmp->next;
		tmp->next = NULL;
		ft_lstadd_back(a, tmp);
		ft_putstr_fd("ra\n", 1);
	}
}

void	rb(t_stack **b)
{
	t_stack	*tmp;

	if ((*b) && (*b)->next)
	{
		tmp = *b;
		*b = tmp->next;
		tmp->next = NULL;
		ft_lstadd_back(b, tmp);
		ft_putstr_fd("rb\n", 1);
	}
}

void	rr(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	if ((*a) && (*a)->next)
	{
		tmp = *a;
		*a = tmp->next;
		tmp->next = NULL;
		ft_lstadd_back(a, tmp);
	}
	if ((*b) && (*b)->next)
	{
		tmp = *b;
		*b = tmp->next;
		tmp->next = NULL;
		ft_lstadd_back(b, tmp);
	}
	ft_putstr_fd("rr\n", 1);
}
